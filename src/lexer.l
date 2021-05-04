%top{
#define LEXER

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
}
%{
#include <stdbool.h>
#include <stdio.h>
#include "tlua/alloc.h"
#include "tlua/lexer.h"

#define YYSTYPE tlua_token_value
#define YYLTYPE struct region

#define YY_USER_ACTION                           \
    yycolumn += yyleng;                          \
    yylloc->left.line    = yylloc->right.line;   \
    yylloc->left.column  = yylloc->right.column; \
    yylloc->right.line   = yylineno;             \
    yylloc->right.column = yycolumn;             \

#define YY_USER_INIT                               \
    yylloc->left.line = yylloc->right.line = 1;    \
    yylloc->left.column = yylloc->right.column = 0;

#define newline() do {                   \
    yylloc->right.line = ++yylineno;     \
    yylloc->right.column = yycolumn = 0; \
} while(0)

#define memdup(p, n) alloc_copy(&yyextra->alloc, p, n)
#define errorl(str) error(yyextra, &yylloc->left, &yylloc->right, str)
#define errort(str) error(yyextra, &yyextra->saved_left, &yylloc->right, str)
static void error(tlua_lexstate *, const struct sourcepos *l, const struct sourcepos *r, const char *);
static double parse_real(char *, int);
static lua_Unsigned parse_word(char *, int);
static struct tlua_int_token parse_int(char *, int, bool);
static void text_add_char(tlua_lexstate *, char);
static void text_add_str(tlua_lexstate *, char *, int);
%}

%option 8bit bison-bridge bison-locations nodefault noyywrap reentrant warn stack
%option noyyalloc noyyrealloc noyyfree
%option extra-type="tlua_lexstate *"
%option prefix="tlua_yy"
/* Remove unused functions */
%option nounput noinput noyy_top_state noyy_scan_buffer noyy_scan_bytes
%option noyy_scan_string noyyget_extra noyyget_leng noyyget_text noyyget_lineno
%option noyyset_lineno noyyget_in noyyget_out noyyset_out noyyget_lval
%option noyyset_lval noyyget_lloc noyyset_lloc noyyget_debug noyyset_debug

ws  [\t\v\f ]
cr  [\r]
nl  [\n]
eol {cr}{nl}|{nl}|{cr}

alphanum   [a-zA-Z0-9'_]
alphanumId [a-zA-Z]{alphanum}*
sym        [-+!%&$#_/:<=>?@\\~`^|*]
symId      {sym}+

tyvarId        "'"{alphanum}*
longSymId      ({alphanumId}".")+{symId}
longAlphanumId ({alphanumId}".")+{alphanumId}

decDigit [0-9]
decnum   {decDigit}("_"*{decDigit})*
hexDigit [0-9a-fA-F]
hexnum   {hexDigit}("_"*{hexDigit})*
binDigit [0-1]
binnum   {binDigit}("_"*{binDigit})*
frac     "."{decnum}
exp      [eE]"~"?{decnum}
real     "~"?(({decnum}{frac}?{exp})|({decnum}{frac}{exp}?))

%x STRING CHAR TEXT_FMT LINE_COMMENT BLOCK_COMMENT

%%

{ws}+ ;
{eol} { newline(); }
 /* Reserved symbols */
"#"   { return T_HASH;         }
"#["  { return T_HASHLBRACKET; }
"("   { return T_LPAREN;       }
")"   { return T_RPAREN;       }
","   { return T_COMMA;        }
"->"  { return T_ARROW;        }
"..." { return T_DOTDOTDOT;    }
":"   { return T_COLON;        }
":>"  { return T_COLONGT;      }
";"   { return T_SEMICOLON;    }
"="   { return T_EQUALOP;      }
"=>"  { return T_DARROW;       }
"["   { return T_LBRACKET;     }
"]"   { return T_RBRACKET;     }
"_"   { return T_WILD;         }
"{"   { return T_LBRACE;       }
"|"   { return T_BAR;          }
"}"   { return T_RBRACE;       }
"*"   { return T_ASTERISK;     }

 /* Reserved keywords */
"and"       { return T_AND;       }
"andalso"   { return T_ANDALSO;   }
"as"        { return T_AS;        }
"case"      { return T_CASE;      }
"datatype"  { return T_DATATYPE;  }
"do"        { return T_DO;        }
"else"      { return T_ELSE;      }
"end"       { return T_END;       }
"eqtype"    { return T_EQTYPE;    }
"exception" { return T_EXCEPTION; }
"fn"        { return T_FN;        }
"fun"       { return T_FUN;       }
"functor"   { return T_FUNCTOR;   }
"handle"    { return T_HANDLE;    }
"if"        { return T_IF;        }
"in"        { return T_IN;        }
"include"   { return T_INCLUDE;   }
"infix"     { return T_INFIX;     }
"infixr"    { return T_INFIXR;    }
"let"       { return T_LET;       }
"local"     { return T_LOCAL;     }
"nonfix"    { return T_NONFIX;    }
"of"        { return T_OF;        }
"op"        { return T_OP;        }
"open"      { return T_OPEN;      }
"orelse"    { return T_ORELSE;    }
"raise"     { return T_RAISE;     }
"rec"       { return T_REC;       }
"sharing"   { return T_SHARING;   }
"sig"       { return T_SIG;       }
"signature" { return T_SIGNATURE; }
"struct"    { return T_STRUCT;    }
"structure" { return T_STRUCTURE; }
"then"      { return T_THEN;      }
"type"      { return T_TYPE;      }
"val"       { return T_VAL;       }
"where"     { return T_WHERE;     }
"while"     { return T_WHILE;     }
"with"      { return T_WITH;      }
"withtype"  { return T_WITHTYPE;  }

 /* Identifier types */
{symId}          { yylval->ident = memdup(yytext, yyleng+1); return T_SHORTSYMID;      }
{alphanumId}     { yylval->ident = memdup(yytext, yyleng+1); return T_SHORTALPHANUMID; }
{tyvarId}        { yylval->ident = memdup(yytext, yyleng+1); return T_TYVARID;         }
{longAlphanumId} { yylval->ident = memdup(yytext, yyleng+1); return T_LONGALPHANUMID;  }
{longSymId}      { yylval->ident = memdup(yytext, yyleng+1); return T_LONGSYMID;       }

 /* Numeric constants */
{real}        { yylval->real = parse_real(yytext, yyleng); return T_REAL; }
{decnum}      { yylval->integer = parse_int(yytext+0, 10, false); return T_INT; }
"~"{decnum}   { yylval->integer = parse_int(yytext+1, 10, true);  return T_INT; }
"0x"{hexnum}  { yylval->integer = parse_int(yytext+2, 16, false); return T_INT; }
"~0x"{hexnum} { yylval->integer = parse_int(yytext+3, 16, true);  return T_INT; }
"0b"{binnum}  { yylval->integer = parse_int(yytext+2, 2, false);  return T_INT; }
"~0b"{binnum} { yylval->integer = parse_int(yytext+3, 2, true);   return T_INT; }
"0w"{decnum}  { yylval->word = parse_word(yytext+2, 10); return T_WORD; }
"0wx"{hexnum} { yylval->word = parse_word(yytext+3, 16); return T_WORD; }
"0wb"{binnum} { yylval->word = parse_word(yytext+3, 2);  return T_WORD; }

 /* String and character literals */
"\"" {
    yyextra->text.buf = malloc(16);
    if (!yyextra->text.buf)
        abort();
    yyextra->text.len = 0;
    yyextra->text.size = 16;
    yyextra->saved_left.line = yylloc->left.line;
    yyextra->saved_left.column = yylloc->left.column;
    yy_push_state(STRING, yyscanner);
}
"#\"" {
    yyextra->text.buf = malloc(2);
    if (!yyextra->text.buf)
        abort();
    yyextra->text.len = 0;
    yyextra->text.size = 2;
    yyextra->saved_left.line = yylloc->left.line;
    yyextra->saved_left.column = yylloc->left.column;
    yy_push_state(CHAR, yyscanner);
}

<STRING>"\"" {
    yylval->string.buf = alloc_copy(&yyextra->alloc, yyextra->text.buf, yyextra->text.len);
    yylval->string.len = yyextra->text.len;
    free(yyextra->text.buf);
    yy_pop_state(yyscanner);
    return T_STRING;
}
<CHAR>"\"" {
    if (yyextra->text.len != 1) {
        errort("Character constant not of size 1");
    }
    yylval->chr = yyextra->text.len > 0 ? yyextra->text.buf[0] : '\0';
    free(yyextra->text.buf);
    yy_pop_state(yyscanner);
    return T_CHAR;
}

<STRING,CHAR>" "|[!]|[\x23-\x5b]|[\x5d-\x7e]              { text_add_str(yyextra, yytext, yyleng); }
<STRING,CHAR>[\xc0-\xdf][\x80-\xbf]                       { text_add_str(yyextra, yytext, yyleng); }
<STRING,CHAR>[\xe0-\xef][\x80-\xbf][\x80-\xbf]            { text_add_str(yyextra, yytext, yyleng); }
<STRING,CHAR>[\xf0-\xf7][\x80-\xbf][\x80-\xbf][\x80-\xbf] { text_add_str(yyextra, yytext, yyleng); }
<STRING,CHAR>\\a { text_add_char(yyextra, '\a'); }
<STRING,CHAR>\\b { text_add_char(yyextra, '\b'); }
<STRING,CHAR>\\t { text_add_char(yyextra, '\t'); }
<STRING,CHAR>\\n { text_add_char(yyextra, '\n'); }
<STRING,CHAR>\\v { text_add_char(yyextra, '\v'); }
<STRING,CHAR>\\f { text_add_char(yyextra, '\f'); }
<STRING,CHAR>\\r { text_add_char(yyextra, '\r'); }
<STRING,CHAR>\\\^[@-_] { text_add_char(yyextra, yytext[2] - '@'); }
<STRING,CHAR>\\\^.     { errorl("Illegal control escape in text constant; must be one of @ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_"); }
<STRING,CHAR>\\{decDigit}{3} {
    long n = strtol(yytext + 2, NULL, 10);
    if (0 <= n && n <= 255) {
        text_add_char(yyextra, (char)n);
    } else {
        errorl("Numeric escape out of bounds");
    }
}
<STRING,CHAR>\\u{hexDigit}{4} {
    long n = strtol(yytext + 2, NULL, 16);
    if (0 <= n && n <= 255) {
        text_add_char(yyextra, (char)n);
    } else {
        errorl("Numeric escape out of bounds\n");
    }
}
<STRING,CHAR>\\U{hexDigit}{8} {
    long n = strtol(yytext + 2, NULL, 16);
    if (0 <= n && n <= 255) {
        text_add_char(yyextra, (char)n);
    } else {
        errorl("Numeric escape out of bounds\n");
    }
}
<STRING,CHAR>"\\\"" { text_add_char(yyextra, '"'); }
<STRING,CHAR>"\\\\" { text_add_char(yyextra, '\\'); }
<STRING,CHAR>\\{ws}+ { yy_push_state(TEXT_FMT, yyscanner); }
<STRING,CHAR>\\{eol} { newline(); yy_push_state(TEXT_FMT, yyscanner); }
<STRING,CHAR>\\      { errorl("Illegal escape in text constant\n"); }
<STRING,CHAR>{eol} {
    errorl("Unclosed text constant at eol\n");
    newline();
}
<STRING,CHAR>. { errorl("Illegal character in text constant\n"); }

<TEXT_FMT>{ws}+ ;
<TEXT_FMT>{eol} { newline(); }
<TEXT_FMT>\\    { yy_pop_state(yyscanner); }
<TEXT_FMT>.     { errorl("Illegal formatting character in text continuation\n"); }

 /* Comments */
"(*)" { yy_push_state(LINE_COMMENT, yyscanner); }
"(*"  { yy_push_state(BLOCK_COMMENT, yyscanner); }

<LINE_COMMENT>{eol} { newline(); yy_pop_state(yyscanner); }
<LINE_COMMENT>.     ;

<BLOCK_COMMENT>"(*)" { yy_push_state(LINE_COMMENT, yyscanner); }
<BLOCK_COMMENT>"(*"  { yy_push_state(BLOCK_COMMENT, yyscanner); }
<BLOCK_COMMENT>"*)"  { yy_pop_state(yyscanner); }
<BLOCK_COMMENT>{eol} { newline(); }
<BLOCK_COMMENT>.     ;

. { errorl("Illegal token"); return T_EOF; }

<STRING><<EOF>> {
    errort("Unterminated string constant");
}
<CHAR><<EOF>> {
    errort("Unterminated character constant");
}
<BLOCK_COMMENT><<EOF>> {
    errort("Unterminated block comment");
}
<LINE_COMMENT><<EOF>> {
    /* Check if we're nested inside a block comment */
    if (yyg->yy_start_stack_ptr > 1) {
        errort("Unterminated block comment");
    }
}

%%

static double parse_real(char *str, int len)
{
    int i, j;

    for (i = 0; i < len; i++) {
        if (str[i] == '~') {
            str[i] = '-';
        }
        if (str[i] == '_') {
            for (j = i; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            str[len - 1] = '\0';
            len--;
            i--; /* Redo the same check on the shifted char */
        }
    }
    return lua_str2number(str, NULL);
}

static lua_Unsigned parse_word(char *str, int radix)
{
    lua_Unsigned w = 0;
    int i;

    for (i = 0; str[i]; i++) {
        if ('0' <= str[i] && str[i] <= '9')
            w = w * radix + str[i] - '0';
        else if (str[i] == '_')
            ;
        else if ('a' <= str[i] && str[i] <= 'f')
            w = w * radix + str[i] - 'a';
        else if ('A' <= str[i] && str[i] <= 'F')
            w = w * radix + str[i] - 'A';
        else
            abort();
    }
    return w;
}

static struct tlua_int_token parse_int(char *str, int radix, bool negate)
{
    lua_Integer n = 0;
    bool underscores = false;
    struct tlua_int_token s;
    int i;

    for (i = 0; str[i]; i++) {
        if ('0' <= str[i] && str[i] <= '9')
            n = n * radix + str[i] - '0';
        else if (str[i] == '_')
            underscores = true;
        else if ('a' <= str[i] && str[i] <= 'f')
            n = n * radix + str[i] - 'a';
        else if ('A' <= str[i] && str[i] <= 'F')
            n = n * radix + str[i] - 'A';
        else
            abort();
    }

    s.val = negate ? -n : n;
    s.isdigit = str[1] == '\0' && !underscores && !negate && radix == 10;
    s.isfield = str[0] != '0' && !underscores && !negate && radix == 10;
    return s;
}

static void text_add_char(tlua_lexstate *lexstate, char c)
{
    text_add_str(lexstate, &c, 1);
}

static int next_pow2(int n)
{
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n++;
    return n;
}

static void text_add_str(tlua_lexstate *lexstate, char *str, int len)
{
    if (lexstate->text.len + len >= lexstate->text.size) {
        lexstate->text.size = next_pow2(lexstate->text.len + len);
        lexstate->text.buf = realloc(lexstate->text.buf, lexstate->text.size);
    }
    memcpy(lexstate->text.buf + lexstate->text.len, str, len);
    lexstate->text.len += len;
}

static void error(
    tlua_lexstate *lexstate,
    const struct sourcepos *left,
    const struct sourcepos *right,
    const char *str)
{
    /* TODO: Error handling */
    fprintf(stderr, "Error: %s\n", str);
    /* int written; */
    /* tlua_error *e; */

    /* e = tlua_alloc_alloc(&lexstate->alloc, sizeof(tlua_error)); */

    /* written = snprintf(e->message, sizeof e->message, "Error: %d.%d-%d.%d ", */
        /* first_line, first_column, last_line, last_column); */
    /* if (written < 0) */
        /* abort(); */

    /* strncpy(e->message + written, str, sizeof e->message - written); */
    /* e->message[sizeof e->message - 1] = '\0'; */
    /* e->next = lexstate->errors; */
    /* lexstate->errors = e; */
}

void *yyalloc(size_t sz, yyscan_t scanner)
{
    struct alloc *alloc = &((struct yyguts_t *)scanner)->yyextra_r->alloc;
    size_t *mem = rawalloc(alloc, sz + sizeof(size_t));
    *mem = sz + sizeof(size_t);
    return mem + 1;
}
void *yyrealloc(void *p, size_t sz, yyscan_t scanner)
{
    struct alloc *alloc = &((struct yyguts_t *)scanner)->yyextra_r->alloc;
    size_t *mem = p;
    mem = mem - 1;
    mem = rawrealloc(alloc, mem, *mem, sz + sizeof(size_t));
    *mem = sz + sizeof(size_t);
    return mem + 1;
}
void yyfree(void *p, yyscan_t scanner)
{
    if (p) {
        struct alloc *alloc = &((struct yyguts_t *)scanner)->yyextra_r->alloc;
        size_t *mem = p;
        mem = mem - 1;
        rawfree(alloc, mem, *mem);
    }
}


