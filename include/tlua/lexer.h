/* vim: set ft=c: */
#ifndef TLUA_LEXER_H
#define TLUA_LEXER_H 

#include <tlua/config.h>
#include <tlua/alloc.h>
#include <tlua/region.h>

typedef struct {
    struct {
        char *buf;
        int len, size;
    } text;
    tlua_alloc alloc;
    struct sourcepos saved_left; /* Saved text/comment position */
} tlua_lexstate;

union TLUA_YYSTYPE;

int tlua_yylex_init_extra(tlua_lexstate *lexstate, void **scanner);
int tlua_yylex_destroy(void *scanner);
void tlua_yyset_in(FILE *fp, void *scanner);
int tlua_yylex(union TLUA_YYSTYPE *lval, struct region *lloc, void *scanner);

#if 0
#define YY_TYPEDEF_YY_SCANNER_T
typedef void *yyscan_t;

union TLUA_YYSTYPE;

int tlua_yylex_init_extra(tlua_lexstate *lexstate, yyscan_t *scanner);
int tlua_yylex_destroy(yyscan_t scanner);
void tlua_yyset_in(FILE *fp, yyscan_t scanner);
int tlua_yylex(union TLUA_YYSTYPE *lval, struct region *lloc, yyscan_t scanner);

typedef enum {
    T_EOF = 0,
    /* Symbols */
    T_HASH, T_HASHLBRACKET, T_LPAREN, T_RPAREN, T_COMMA,
    T_ARROW, T_ASTERISK, T_DOTDOTDOT, T_COLON, T_COLONGT,
    T_SEMICOLON, T_EQUALOP, T_DARROW, T_LBRACKET, T_RBRACKET,
    T_WILD, T_LBRACE, T_BAR, T_RBRACE,
    /* Keywords */
    T_AND, T_ANDALSO, T_AS, T_CASE, T_DATATYPE, T_DO, T_ELSE,
    T_END, T_EQTYPE, T_EXCEPTION, T_FN, T_FUN, T_FUNCTOR, T_HANDLE,
    T_IF, T_IN, T_INCLUDE, T_INFIX, T_INFIXR, T_LET, T_LOCAL,
    T_NONFIX, T_OF, T_OP, T_OPEN, T_ORELSE, T_RAISE, T_REC,
    T_SHARING, T_SIG, T_SIGNATURE, T_STRUCT, T_STRUCTURE,
    T_THEN, T_TYPE, T_VAL, T_WHERE, T_WHILE, T_WITH, T_WITHTYPE,
    /* Identifiers */
    T_SHORTALPHANUMID, T_SHORTSYMID, T_TYVARID, T_LONGALPHANUMID, T_LONGSYMID,
    /* Literals */
    T_REAL, T_WORD, T_INT, T_STRING, T_CHAR
} tlua_token;
#endif

#endif /* ifndef TLUA_LEXER_H */

