%code requires {
#include <stdio.h>
#include <lua.h>
#include <tlua/alloc.h>
#include <tlua/region.h>
#include <tlua/ast.h>
#include <tlua/lexer.h>
}
%code {
#define YYLLOC_DEFAULT(Cur, Rhs, N) do {                                        \
    if (N) {                                                                    \
        (Cur).left.line    = YYRHSLOC(Rhs, 1).left.line;                        \
        (Cur).left.column  = YYRHSLOC(Rhs, 1).left.column;                      \
        (Cur).right.line   = YYRHSLOC(Rhs, N).right.line;                       \
        (Cur).right.column = YYRHSLOC(Rhs, N).right.column;                     \
    } else {                                                                    \
        (Cur).left.line   = (Cur).right.line   = YYRHSLOC(Rhs, 0).right.line;   \
        (Cur).left.column = (Cur).right.column = YYRHSLOC(Rhs, 0).right.column; \
    }                                                                           \
} while (0)

/* Required function definitions */
int tlua_yylex(TLUA_YYSTYPE *, struct region *, void *);
static void tlua_yyerror(struct region *, void *scanner, tlua_lexstate *, const char *);

#define const_(x, t, l) do {                          \
    (x) = alloc(&lexstate->alloc, sizeof(tlua_const)); \
    (x)->tag = CONST_##t;                             \
    (x)->loc = (l);                                   \
} while (0)

#define var(x, l) do {                              \
    (x) = alloc(&lexstate->alloc, sizeof(tlua_var)); \
    (x)->loc = (l);                                  \
} while (0)

#define cons(x, a, b) do {                            \
    (x) = alloc(&lexstate->alloc, sizeof(tlua_list)); \
    (x)->car = (a);                                   \
    (x)->cdr = (b);                                   \
} while (0)

#define field(x, t) do {                               \
    (x) = alloc(&lexstate->alloc, sizeof(tlua_field)); \
    (x)->tag = FIELD_##t;                              \
} while (0)

#define exp(x, t, l) do {                            \
    (x) = alloc(&lexstate->alloc, sizeof(tlua_exp)); \
    (x)->tag = EXP_##t;                              \
    (x)->loc = (l);                                  \
} while (0)

} 

%require "3.6.4"
%define api.pure full
/* %define api.header.include { <tlua/parser.h> } */
%define api.prefix {tlua_yy}
%define api.token.prefix {T_}
%define api.token.raw
%define api.location.type {struct region}
%define parse.assert
%define parse.error detailed
/* %define parse.lac */
%locations
%union {
    /* Terminals */
    lua_Number real;
    lua_Unsigned word;
    struct {
        lua_Integer val;
        unsigned int isdigit : 1;
        unsigned int isfield : 1;
    } integer;
    tlua_string string;
    unsigned char chr;
    char *ident;

    /* Nonterminals */
    tlua_exp *exp;
    tlua_const *const_;
    tlua_var *var;
    tlua_list *list;
    tlua_field *field;
}
%parse-param { void *scanner } { tlua_lexstate *lexstate }
%lex-param { void *scanner }

%token EOF 0
%token HASH HASHLBRACKET LPAREN RPAREN COMMA ARROW ASTERISK DOTDOTDOT COLON
%token COLONGT SEMICOLON EQUALOP DARROW LBRACKET RBRACKET WILD LBRACE BAR
%token RBRACE AND ANDALSO AS CASE DATATYPE DO ELSE END EQTYPE EXCEPTION FN FUN
%token FUNCTOR HANDLE IF IN INCLUDE INFIX INFIXR LET LOCAL NONFIX OF OP
%token OPEN ORELSE RAISE REC SHARING SIG SIGNATURE STRUCT STRUCTURE
%token THEN TYPE VAL WHERE WHILE WITH WITHTYPE
%token <ident> SHORTALPHANUMID SHORTSYMID TYVARID LONGALPHANUMID LONGSYMID
%token <real> REAL
%token <word> WORD
%token <integer> INT
%token <string> STRING
%token <chr> CHAR

%nterm <list> decs
%nterm <field> numericField
%nterm <exp> aexp exp
%nterm <list> exp_2c exp_list exp_ps

%nterm <const_> const constOrBool
%nterm <var> shortAlphanumId shortSymId longAlphanumId longSymId
%nterm <var> vidNoEqual vid longvid longvidNoEqual
%nterm <var> con tyvar tycon longtycon
%nterm <var> strid longstrid sigid fctid
%nterm <list> vids sigids longstrids
%nterm <field> idField field

%nonassoc WITHTYPE
%right AND
%right ARROW
%right DARROW
%left DO
%left ELSE
%left RAISE
%right HANDLE
%left ORELSE
%left ANDALSO
%right AS
%left COLON

%%

input: %empty
     | input aexp optsemicolon { printf("Got exp!\n"); }

numericField : INT {
    field($$, NUM);
    if ($1.isfield)
        fprintf(stderr, "Invalid numeric label\n");
    $$->val.num = (unsigned)$1.val;
}

decs : %empty { $$ = NULL; }

exp : aexp

exp_ps : exp optsemicolon { cons($$, $1, NULL); }
       | exp SEMICOLON exp_ps { cons($$, $1, $3); }

aexp : OP longvid { exp($$, VAR, @$); $$->val.var = $2; }
     | const { exp($$, CONST, @$); $$->val.const_ = $1; }
     | HASH field { exp($$, SELECTOR, @$); $$->val.sel = $2; }
     | HASHLBRACKET exp_list RBRACKET { exp($$, VECTOR, @$); $$->val.exps = $2; }
     | HASHLBRACKET RBRACKET { exp($$, VECTOR, @$); $$->val.exps = NULL; }
     /* | LBRACE elabels RBRACE {  } */
     | LBRACE RBRACE { exp($$, RECORD, @$); $$->val.record = NULL; }
     | LPAREN RPAREN { exp($$, RECORD, @$); $$->val.record = NULL; }
     | LPAREN exp_ps RPAREN {
        if ($2 && !$2->cdr) {
            $$ = $2->car;
            $$->loc = @$;
        } else {
            exp($$, SEQ, @$);
            $$->val.exps = $2;
        }
     }
     | LPAREN exp_2c RPAREN {
        if (!$2->cdr) {
            $$ = $2->car;
            $$->loc = @$;
        }
     }
     | LBRACKET exp_list RBRACKET { exp($$, LIST, @$); $$->val.exps = $2; }
     | LBRACKET RBRACKET { exp($$, LIST, @$); $$->val.exps = NULL; }
     | LET decs IN exp_ps END {
        exp($$, LET, @$);
        $$->val.let.decs = $2;
        if (!$4->cdr)
            $$->val.let.body = $4->car;
        else {
            exp($$->val.let.body, SEQ, @4);
            $$->val.let.body->val.exps = $4;
        }
            
     }

exp_2c : exp COMMA exp_2c { cons($$, $1, $3); }
       | exp COMMA exp {
           tlua_list *l;
           cons(l, $3, NULL);
           cons($$, $1, l);
       }

exp_list : exp { cons($$, $1, NULL); }
         | exp COMMA exp_list { cons($$, $1, $3); }

/*** Atoms ***/

optbar : %empty | BAR

optsemicolon : %empty | SEMICOLON

constOrBool : const { $$ = $1; }
            | SHORTALPHANUMID {
                const_($$, BOOL, @$);
                if (strcmp($1, "true") == 0)
                    $$->val.bool_ = 1;
                else if (strcmp($1, "false") == 0)
                    $$->val.bool_ = 0;
                else {
                    fprintf(stderr, "Invalid constant: \"%s\"\n", $1);
                    $$->val.bool_ = 0;
                }
            }

const : REAL   { const_($$, REAL, @$); $$->val.real = $1; }
      | WORD   { const_($$, WORD, @$); $$->val.word = $1; }
      | INT    { const_($$, INT, @$); $$->val.int_ = $1.val; }
      | STRING { const_($$, STRING, @$); $$->val.string.buf = $1.buf; $$->val.string.len = $1.len; }
      | CHAR   { const_($$, CHAR, @$); $$->val.char_ = $1; }

shortAlphanumId : SHORTALPHANUMID { var($$, @$); $$->name = $1; }
shortSymId      : SHORTSYMID      { var($$, @$); $$->name = $1; }
longAlphanumId  : LONGALPHANUMID  { var($$, @$); $$->name = $1; }
longSymId       : LONGSYMID       { var($$, @$); $$->name = $1; }

vidNoEqual : shortAlphanumId
           | shortSymId
           | ASTERISK { var($$, @$); $$->name = "*"; }

vid : vidNoEqual
    | EQUALOP { var($$, @$); $$->name = "="; }

longvidNoEqual : vidNoEqual
               | longAlphanumId
               | longSymId

longvid : longvidNoEqual
        | EQUALOP { var($$, @$); $$->name = "="; }

con : vid

longcon : longvid

tyvar : TYVARID { var($$, @$); $$->name = $1; }

tycon : shortAlphanumId
      | shortSymId

longtycon : tycon
          | longAlphanumId

idField : shortAlphanumId { field($$, ID); $$->val.ident = $1->name; }
        | shortSymId { field($$, ID); $$->val.ident = $1->name; }
        | ASTERISK { field($$, ID); $$->val.ident = "*"; }

field : idField
      | numericField

strid : shortAlphanumId

longstrid : shortAlphanumId
          | longAlphanumId

sigid : shortAlphanumId

fctid : shortAlphanumId

vids : vid { cons($$, $1, NULL); }
     | vid vids { cons($$, $1, $2); }

sigids : sigid { cons($$, $1, NULL); }
       | sigid sigids { cons($$, $1, $2) }

longstrids : longstrid { cons($$, $1, NULL); }
           | longstrid longstrids { cons($$, $1, $2); }

%%

void tlua_yyerror(struct region *lloc, void *scanner, tlua_lexstate *lexstate, const char *msg)
{
    fprintf(stderr, "Error: %s\n", msg);
}
