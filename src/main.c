
#include <tlua/config.h>
#include <tlua/alloc.h>
#include <tlua/region.h>
#include <tlua/lexer.h>
#include <../_build/parser.h>


int main(void)
{
    tlua_lexstate lexstate;
    lua_State *L;
    void *scanner;

    L = luaL_newstate();
    tlua_alloc_init(&lexstate.alloc, L);
    tlua_yylex_init_extra(&lexstate, &scanner);
    tlua_yyset_in(stdin, scanner);

    tlua_yyparse(scanner, &lexstate);

    tlua_yylex_destroy(scanner);
    tlua_alloc_destroy(&lexstate.alloc);
    lua_close(L);
}

/* 
union TLUA_YYSTYPE lvals[] = {
    {0},
    { .ident = "foo" },
    {0},
    { .word = 23 },
    { .ident = "+" },
    { .word = 45 },
    { .ident = "-" },
    { .word = 23 },
    {0},
    {0},
    {0},
    {0}
};
int toks[] = {
    // { foo = 0w23 + 0w45, * }
    T_LBRACE,
    T_SHORTALPHANUMID,
    T_EQUALOP,
    T_WORD,
    T_SHORTSYMID,
    T_WORD,
    T_SHORTSYMID,
    T_WORD,
    T_COMMA,
    T_ASTERISK,
    T_RBRACE,
    T_EOF
};
int tlua_yylex(union TLUA_YYSTYPE *lval, struct region *lloc, void *scanner)
{
    static int i = 0;
    UNUSED(scanner);

    lloc->left.line = lloc->left.column = lloc->right.line = lloc->right.column = i;

    *lval = lvals[i];
    return toks[i++];
}
 */
/* 
static void print_tok(int tok, const tlua_token_value *lval);

int main(void)
{
    tlua_lexstate lexstate;
    tlua_token_value lval;
    struct region lloc;
    yyscan_t scanner;
    int tok;

    lexstate_init(&lexstate);
    tlua_yylex_init_extra(&lexstate, &scanner);
    tlua_yyset_in(stdin, scanner);

    do {
        tok = tlua_yylex(&lval, &lloc, scanner);
        printf("["REGION_FMT"]\t", REGION_FMTARG(&lloc));
        print_tok(tok, &lval);
        printf("\n");
    } while (tok != T_EOF);

    tlua_yylex_destroy(scanner);
    alloc_destroy(&lexstate.alloc);
    lua_close(lexstate.L);
}

static void print_tok(int tok, const tlua_token_value *lval)
{
    switch (tok)
    {
        case T_EOF: printf("EOF"); break;

        case T_HASH:         printf("HASH");         break;
        case T_RBRACE:       printf("RBRACE");       break;
        case T_BAR:          printf("BAR");          break;
        case T_LBRACE:       printf("LBRACE");       break;
        case T_WILD:         printf("WILD");         break;
        case T_RBRACKET:     printf("RBRACKET");     break;
        case T_LBRACKET:     printf("LBRACKET");     break;
        case T_DARROW:       printf("DARROW");       break;
        case T_EQUALOP:      printf("EQUALOP");      break;
        case T_SEMICOLON:    printf("SEMICOLON");    break;
        case T_COLONGT:      printf("COLONGT");      break;
        case T_COLON:        printf("COLON");        break;
        case T_DOTDOTDOT:    printf("DOTDOTDOT");    break;
        case T_ASTERISK:     printf("ASTERISK");     break;
        case T_ARROW:        printf("ARROW");        break;
        case T_COMMA:        printf("COMMA");        break;
        case T_RPAREN:       printf("RPAREN");       break;
        case T_LPAREN:       printf("LPAREN");       break;
        case T_HASHLBRACKET: printf("HASHLBRACKET"); break;
                                           
        case T_WITHTYPE:  printf("WITHTYPE");  break;
        case T_WITH:      printf("WITH");      break;
        case T_WHILE:     printf("WHILE");     break;
        case T_WHERE:     printf("WHERE");     break;
        case T_VAL:       printf("VAL");       break;
        case T_TYPE:      printf("TYPE");      break;
        case T_THEN:      printf("THEN");      break;
        case T_STRUCTURE: printf("STRUCTURE"); break;
        case T_STRUCT:    printf("STRUCT");    break;
        case T_SIGNATURE: printf("SIGNATURE"); break;
        case T_SIG:       printf("SIG");       break;
        case T_SHARING:   printf("SHARING");   break;
        case T_REC:       printf("REC");       break;
        case T_RAISE:     printf("RAISE");     break;
        case T_ORELSE:    printf("ORELSE");    break;
        case T_OPEN:      printf("OPEN");      break;
        case T_OP:        printf("OP");        break;
        case T_OF:        printf("OF");        break;
        case T_NONFIX:    printf("NONFIX");    break;
        case T_LOCAL:     printf("LOCAL");     break;
        case T_LET:       printf("LET");       break;
        case T_INFIXR:    printf("INFIXR");    break;
        case T_INFIX:     printf("INFIX");     break;
        case T_INCLUDE:   printf("INCLUDE");   break;
        case T_IN:        printf("IN");        break;
        case T_IF:        printf("IF");        break;
        case T_HANDLE:    printf("HANDLE");    break;
        case T_FUNCTOR:   printf("FUNCTOR");   break;
        case T_FUN:       printf("FUN");       break;
        case T_FN:        printf("FN");        break;
        case T_EXCEPTION: printf("EXCEPTION"); break;
        case T_EQTYPE:    printf("EQTYPE");    break;
        case T_END:       printf("END");       break;
        case T_ELSE:      printf("ELSE");      break;
        case T_DO:        printf("DO");        break;
        case T_DATATYPE:  printf("DATATYPE");  break;
        case T_CASE:      printf("CASE");      break;
        case T_AS:        printf("AS");        break;
        case T_ANDALSO:   printf("ANDALSO");   break;
        case T_AND:       printf("AND");       break;

        case T_SHORTALPHANUMID: printf("SHORTALPHANUMID(%s)", lval->ident); break;
        case T_SHORTSYMID:      printf("SHORTSYMID(%s)", lval->ident);      break;
        case T_TYVARID:         printf("TYVARID(%s)", lval->ident);         break;
        case T_LONGALPHANUMID:  printf("LONGALPHANUMID(%s)", lval->ident);  break;
        case T_LONGSYMID:       printf("LONGSYMID(%s)", lval->ident);       break;

        case T_REAL:   printf("REAL(%f)", lval->real);                                 break;
        case T_WORD:   printf("WORD(%lu)", lval->word);                                break;
        case T_INT:    printf("INT(%lu)", lval->integer.val);                          break;
        case T_STRING: printf("STRING(\"%.*s\")", lval->string.len, lval->string.buf); break;
        case T_CHAR:   printf("CHAR(#\"%c\")", lval->chr);                             break;

        default:
            printf("Unknown token %d\n", tok);
    }
} */
