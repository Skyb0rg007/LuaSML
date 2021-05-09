/* vim: set ft=lemon: */
%code requires {
#include <tlua/config.h>
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
extern int tlua_yylex(TLUA_YYSTYPE *, struct region *, void *);
static void tlua_yyerror(struct region *, void *scanner, tlua_lexstate *, const char *);
/* Required for allocation macros */
#define allocator (&lexstate->alloc)
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
    struct tlua_int_token {
        lua_Integer val;
        unsigned int isdigit : 1;
        unsigned int isfield : 1;
    } integer;
    tlua_string string;
    unsigned char chr;
    char *ident;

    /* Nonterminals */
    int digit;
    tlua_exp *exp;
    tlua_const *const_;
    tlua_con *con;
    tlua_var *var;
    tlua_field *field;
    tlua_match *match;
    tlua_record_item *record_item;
    tlua_rule *rule;
    tlua_pat *pat;
    struct tlua_pat_record pat_record;
    tlua_type *type;
    tlua_dec *dec;
    tlua_fixity fixity;
    tlua_eb *eb;
    tlua_typbind *typbind;
    struct tlua_exp_val val;
    tlua_funbind *funbind;

    list(con) *con_list;
    list(dec) *dec_list;
    list(exp) *exp_list;
    list(pat) *pat_list;
    list(record_item) *record;
    list(var) *var_list;
    list(type) *type_list;
    list(funbind) *funbind_list;
    list(funbinds) *funbinds_list;
    list(eb) *eb_list;
    list(rule) *rule_list;
    list(typbind) *typbind_list;
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

%nterm <val> valbind_top
%nterm <type> constraint
%nterm <funbind> clause
%nterm <funbind_list> clauses clauses_top
%nterm <funbinds_list> funs
%nterm <typbind> tb
%nterm <con_list> constrs
%nterm <con> constr
%nterm <eb> eb ebrhs
%nterm <eb_list> ebs
%nterm <digit> digit
%nterm <fixity> fixity
%nterm <pat_record> patitems
%nterm <type> ty
%nterm <pat> pat apat cpat opaspat
%nterm <rule> rule
%nterm <record_item> elabel patitem
%nterm <match> match
%nterm <field> numericField
%nterm <exp> aexp exp
%nterm <dec> dec decnolocal
%nterm <dec_list> decs
%nterm <record> elabels longvidands
%nterm <exp_list> app_exp exp_2c exp_list exp_ps
%nterm <pat_list> barcpats apats cpats pats commapats
%nterm <rule_list> rules
%nterm <typbind_list> withtypes tbs

%nterm <const_> const constOrBool
%nterm <var> shortAlphanumId shortSymId longAlphanumId longSymId
%nterm <var> vidNoEqual vid longvid longvidNoEqual
%nterm <var> con tyvar tycon longtycon opcon
%nterm <var> strid longstrid sigid fctid longcon
%nterm <var_list> vids sigids longstrids tyvars tyvarseq tyvar_pc
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
     | exp optsemicolon { tlua_print_exp($1, stdout); puts(""); }

/*** Declarations ***/

fixity : INFIX        { $$.tag = FIXITY_INFIX;  $$.precedence = -1; }
       | INFIX digit  { $$.tag = FIXITY_INFIX;  $$.precedence = $2; }
       | INFIXR       { $$.tag = FIXITY_INFIXR; $$.precedence = -1; }
       | INFIXR digit { $$.tag = FIXITY_INFIXR; $$.precedence = $2; }
       | NONFIX       { $$.tag = FIXITY_NONFIX; $$.precedence = -1; }

digit : INT {
        $$ = $1.val;
        if (!$1.isdigit)
            fprintf(stderr, "Not a digit!\n");
      }

decs : %empty { $$ = NULL; }
     | dec decs { list_cons($$, $1, $2); }
     | SEMICOLON decs { $$ = $2; }

dec : decnolocal { $$ = $1; }
    | LOCAL decs IN decs END { tlua_dec($$, LOCAL, @$); $$->val.local.d1 = $2; $$->val.local.d2 = $4; }

decnolocal : VAL valbind_top { tlua_dec($$, VAL, @$); $$->val.val = $2; }
           | VAL tyvarseq valbind_top { tlua_dec($$, VAL, @$); $$->val.val = $3; $$->val.val.tyvars = $2; }
           | DO exp { tlua_dec($$, DO, @$); $$->val.do_ = $2; }
           | FUN funs { tlua_dec($$, FUN, @$); $$->val.fun.tyvars = NULL; $$->val.fun.fbs = $2; }
           | FUN tyvarseq funs { tlua_dec($$, FUN, @$); $$->val.fun.tyvars = $2; $$->val.fun.fbs = $3; }
           | EXCEPTION ebs { tlua_dec($$, EXCEPTION, @$); $$->val.exception = $2; }
           | OPEN longstrids { tlua_dec($$, OPEN, @$); $$->val.open = $2; }
           | fixity vids { tlua_dec($$, FIX, @$); $$->val.fixity.fixity = $1; $$->val.fixity.ops = $2; }

funs : clauses_top { list_cons($$, $1, NULL); }
     | clauses_top AND funs { list_cons($$, $1, $3); }

clauses_top : optbar clauses { $$ = $2; }

clauses : clause { list_cons($$, $1, NULL); }
        | clause BAR clauses { list_cons($$, $1, NULL); }

clause : apats constraint EQUALOP exp { tlua_funbind($$); $$->pats = $1; $$->result_type = $2; $$->body = $4; }

tbs : tb { list_cons($$, $1, NULL); }
    | tb AND tbs { list_cons($$, $1, $3); }

tb : tyvars tycon EQUALOP ty { tlua_typbind($$); $$->def = $4; $$->tycon = $2; $$->tyvars = $1; }

tyvars : %empty { $$ = NULL; }
       | tyvarseq { $$ = $1; }

tyvarseq : tyvar { list_cons($$, $1, NULL); }
         | LPAREN tyvar_pc RPAREN { $$ = $2; }

tyvar_pc : tyvar { list_cons($$, $1, NULL); }
         | tyvar COMMA tyvar_pc { list_cons($$, $1, $3); }

constrs : constr { list_cons($$, $1, NULL); }
        | constr BAR constrs { list_cons($$, $1, $3); }

constr : opcon { tlua_con($$); $$->con = $1; $$->type = NULL; }
       | opcon OF ty { tlua_con($$); $$->con = $1; $$->type = $3; }

opcon : con { $$ = $1; }
      | OP con { $$ = $2; }

ebs : eb { list_cons($$, $1, NULL); }
    | eb AND ebs { list_cons($$, $1, $3); }

eb : opcon ebrhs { $$ = $2; $$->con = $1; }

ebrhs : %empty { tlua_eb($$, GEN); $$->val.gen = NULL; }
      | OF ty { tlua_eb($$, GEN); $$->val.gen = $2; }
      | EQUALOP longcon { tlua_eb($$, DEF); $$->val.def = $2; }
      | EQUALOP OP longcon { tlua_eb($$, DEF); $$->val.def = $3; }

numericField : INT {
    tlua_field($$, NUM);
    if (!$1.isfield)
        fprintf(stderr, "Invalid numeric label\n");
    $$->val.num = (unsigned)$1.val;
}

match : %empty { $$ = NULL; }

constraint : %empty { $$ = NULL; }
           | COLON ty { $$ = $2; }

withtypes : WITHTYPE tbs { $$ = $2; }

longvidands : longvid { list_cons($$, $1, NULL); }
            | longvid AND longvidands { list_cons($$, $1, $3); }

match : optbar rules { tlua_match($$, @$); $$->rules = $2; }

rules : rule { list_cons($$, $1, NULL); }
      | rule BAR rules { list_cons($$, $1, $3); }

rule : pat DARROW exp { tlua_rule($$); $$->pat = $1; $$->exp = $3; }

elabel : field EQUALOP exp { tlua_record_item($$, @$); $$->field = $1; $$->val = $3; }
       | idField constraint {
           tlua_exp *e, *fa;
           tlua_var *v;
           tlua_var(v, @1);
           v->name = $1->val.ident;
           tlua_exp(e, VAR, @1);
           e->val.var = v;
           tlua_exp(fa, FLATAPP, @1);
           list_cons(fa->val.flatapp, e, NULL);
           tlua_record_item($$, @$);
           $$->field = $1;
           $$->val = fa;
       }

elabels : elabel COMMA elabels { list_cons($$, $1, $3); }
        | elabel { list_cons($$, $1, NULL); }

exp_ps : exp optsemicolon { list_cons($$, $1, NULL); }
       | exp SEMICOLON exp_ps { list_cons($$, $1, $3); }

exp : exp HANDLE match { tlua_exp($$, HANDLE, @$); $$->val.handle.exp = $1; $$->val.handle.match = $3; }
    | exp ORELSE exp { tlua_exp($$, ORELSE, @$); $$->val.orelse.left = $1; $$->val.orelse.right = $3; }
    | exp ANDALSO exp { tlua_exp($$, ANDALSO, @$); $$->val.andalso.left = $1; $$->val.andalso.right = $3; }
    | exp COLON ty { tlua_exp($$, CONSTRAINT, @$); $$->val.constraint.exp = $1; $$->val.constraint.type = $3; }
    | app_exp { tlua_exp($$, FLATAPP, @$); $$->val.flatapp = $1; }
    | FN match { tlua_exp($$, FN, @$); $$->val.fn = $2; }
    | CASE exp OF match { tlua_exp($$, CASE, @$); $$->val.case_.exp = $2; $$->val.case_.match = $4; }
    | WHILE exp DO exp { tlua_exp($$, WHILE, @$); $$->val.while_.cond = $2; $$->val.while_.body = $4; }
    | IF exp THEN exp ELSE exp { tlua_exp($$, IF, @$); $$->val.if_.cond = $2; $$->val.if_.true_ = $4; $$->val.if_.false_ = $6; }
    | RAISE exp { tlua_exp($$, RAISE, @$); $$->val.raise = $2; }

app_exp : aexp { list_cons($$, $1, NULL); }
        | aexp app_exp { list_cons($$, $1, $2); }
        | longvid { 
            tlua_exp *e;
            tlua_exp(e, VAR, @$);
            e->val.var = $1;
            list_cons($$, e, NULL);
        }
        | longvid app_exp {
            tlua_exp *e;
            tlua_exp(e, VAR, @$);
            e->val.var = $1;
            list_cons($$, e, $2);
        }

aexp : OP longvid { tlua_exp($$, VAR, @$); $$->val.var = $2; }
     | const { tlua_exp($$, CONST, @$); $$->val.const_ = $1; }
     | HASH field { tlua_exp($$, SELECTOR, @$); $$->val.sel = $2; }
     | HASHLBRACKET exp_list RBRACKET { tlua_exp($$, VECTOR, @$); $$->val.vector = $2; }
     | HASHLBRACKET RBRACKET { tlua_exp($$, VECTOR, @$); $$->val.vector = NULL; }
     | LBRACE elabels RBRACE { tlua_exp($$, RECORD, @$); $$->val.record = $2; }
     | LBRACE RBRACE { tlua_exp($$, RECORD, @$); $$->val.record = NULL; }
     | LPAREN RPAREN { tlua_exp($$, RECORD, @$); $$->val.record = NULL; }
     | LPAREN exp_ps RPAREN {
        if ($2 && !$2->cdr) {
            $$ = $2->car;
            $$->loc = @$;
        } else {
            tlua_exp($$, SEQ, @$);
            $$->val.seq = $2;
        }
     }
     | LPAREN exp_2c RPAREN {
        if (!$2->cdr) {
            $$ = $2->car;
            $$->loc = @$;
        } else {
            tlua_exp *e;
            list(exp) *it;
            int n = 1;
            list(record_item) *r, *tmp;
            tlua_record_item *item;

            tlua_exp($$, RECORD, @$);
            r = $$->val.record = NULL;
            list_foreach(e, it, $2) {
                tlua_record_item(item, e->loc);
                tlua_field(item->field, NUM); item->field->val.num = n;
                item->val = e;

                list_cons(tmp, item, NULL);
                if (r) r->cdr = tmp; else $$->val.record = tmp;
                r = tmp;
                n++;
            }
        }
     }
     | LBRACKET exp_list RBRACKET { tlua_exp($$, LIST, @$); $$->val.list = $2; }
     | LBRACKET RBRACKET { tlua_exp($$, LIST, @$); $$->val.list = NULL; }
     | LET decs IN exp_ps END {
        tlua_exp($$, LET, @$);
        $$->val.let.decs = $2;
        if (!$4->cdr)
            $$->val.let.body = $4->car;
        else {
            tlua_exp($$->val.let.body, SEQ, @4);
            $$->val.let.body->val.seq = $4;
        }
            
     }

exp_2c : exp COMMA exp_2c { list_cons($$, $1, $3); }
       | exp COMMA exp {
           list(exp) *l;
           list_cons(l, $3, NULL);
           list_cons($$, $1, l);
       }

exp_list : exp { list_cons($$, $1, NULL); }
         | exp COMMA exp_list { list_cons($$, $1, $3); }

/*** Patterns ***/

pat : cpat BAR barcpats { tlua_pat($$, OR, @$); list_cons($$->val.or_, $1, $3); }
    | cpat              { $$ = $1; }

cpat : cpat AS cpat { $$ = NULL; }
     | cpat COLON ty { tlua_pat($$, CONSTRAINT, @$); $$->val.constraint.pat = $1; $$->val.constraint.type = $3; }
     | apats { tlua_pat($$, FLATAPP, @$); $$->val.flatapp = $1; }

apats : apat       { list_cons($$, $1, NULL); }
      | apat apats { list_cons($$, $1, $2); }

apat : longvidNoEqual {
         tlua_pat($$, VAR, @$);
         $$->val.var.name = $1;
         $$->val.var.fixop = FIXOP_NONE;
     }
     | OP longvid {
         tlua_pat($$, VAR, @$);
         $$->val.var.name = $2;
         $$->val.var.fixop = FIXOP_OP;
     }
     | const {
         if ($1->tag == CONST_REAL) {
             fprintf(stderr, "Real constants are not allowed in patterns\n");
         }
         tlua_pat($$, CONST, @$); $$->val.const_ = $1;
     }
     | WILD { tlua_pat($$, WILD, @$); }
     | LPAREN pats RPAREN { 
        if ($2 && $2->cdr) {
            $$ = $2->car;
            $$->loc = @$;
        } else {
            tlua_pat($$, TUPLE, @$);
            $$->val.tuple = $2;
        }
     }
     | LBRACKET pats RBRACKET { tlua_pat($$, LIST, @$); $$->val.list = $2; }
     | HASHLBRACKET pats RBRACKET { tlua_pat($$, VECTOR, @$); $$->val.vector = $2; }
     | LBRACE RBRACE { tlua_pat($$, TUPLE, @$); $$->val.tuple = NULL; }
     | LBRACE patitems RBRACE { tlua_pat($$, RECORD, @$); $$->val.record = $2; }

pats : %empty { $$ = NULL; }
     | pat commapats { list_cons($$, $1, $2); }

barcpats : cpat { list_cons($$, $1, NULL); }
         | cpat BAR barcpats { list_cons($$, $1, $3); }

commapats : %empty { $$ = NULL; }
          | COMMA pat commapats { list_cons($$, $2, $3); }

patitems : patitem COMMA patitems {
            list(record_item) *p; list_cons(p, $1, $3.items); $3.items = p;
            $$ = $3;
         }
         | patitem {
            $$.flexible = 0;
            list_cons($$.items, $1, NULL);
         }
         | DOTDOTDOT { 
            $$.flexible = 1;
            $$.items = NULL;
         }

patitem : field EQUALOP pat { tlua_record_item($$, @$); $$->field = $1; $$->val = $3; }

opaspat : %empty { $$ = NULL; }
        | AS pat { $$ = $2; }

/*** Types ***/

ty : tuple_ty
   | ty ARROW ty
   | ty1

ty1 : tyvar
    | LBRACE tlabels RBRACE
    | LBRACE RBRACE
    | LPAREN ty0_pc RPAREN longtycon
    | LPAREN ty RPAREN
    | ty1 longtycon
    | longtycon

tlabel : field COLON ty

tlabels : tlabel COMMA tlabels
        | tlabel

tuple_ty : ty1 ASTERISK tuple_ty
         | ty1 ASTERISK ty1

ty0_pc : ty COMMA ty
       | ty COMMA ty0_pc

/*** Atoms ***/

optbar : %empty | BAR

optsemicolon : %empty | SEMICOLON

constOrBool : const { $$ = $1; }
            | SHORTALPHANUMID {
                tlua_const($$, BOOL, @$);
                if (strcmp($1, "true") == 0)
                    $$->val.bool_ = 1;
                else if (strcmp($1, "false") == 0)
                    $$->val.bool_ = 0;
                else {
                    fprintf(stderr, "Invalid constant: \"%s\"\n", $1);
                    $$->val.bool_ = 0;
                }
            }

const : REAL   { tlua_const($$, REAL, @$); $$->val.real = $1; }
      | WORD   { tlua_const($$, WORD, @$); $$->val.word = $1; }
      | INT    { tlua_const($$, INT, @$); $$->val.int_ = $1.val; }
      | STRING { tlua_const($$, STRING, @$); $$->val.string.buf = $1.buf; $$->val.string.len = $1.len; }
      | CHAR   { tlua_const($$, CHAR, @$); $$->val.char_ = $1; }

shortAlphanumId : SHORTALPHANUMID { tlua_var($$, @$); $$->name = $1; }
shortSymId      : SHORTSYMID      { tlua_var($$, @$); $$->name = $1; }
longAlphanumId  : LONGALPHANUMID  { tlua_var($$, @$); $$->name = $1; }
longSymId       : LONGSYMID       { tlua_var($$, @$); $$->name = $1; }

vidNoEqual : shortAlphanumId
           | shortSymId
           | ASTERISK { tlua_var($$, @$); $$->name = "*"; }

vid : vidNoEqual
    | EQUALOP { tlua_var($$, @$); $$->name = "="; }

longvidNoEqual : vidNoEqual
               | longAlphanumId
               | longSymId

longvid : longvidNoEqual
        | EQUALOP { tlua_var($$, @$); $$->name = "="; }

con : vid

longcon : longvid

tyvar : TYVARID { tlua_var($$, @$); $$->name = $1; }

tycon : shortAlphanumId
      | shortSymId

longtycon : tycon
          | longAlphanumId

idField : shortAlphanumId { tlua_field($$, ID); $$->val.ident = $1->name; }
        | shortSymId { tlua_field($$, ID); $$->val.ident = $1->name; }
        | ASTERISK { tlua_field($$, ID); $$->val.ident = "*"; }

field : idField
      | numericField

strid : shortAlphanumId

longstrid : shortAlphanumId
          | longAlphanumId

sigid : shortAlphanumId

fctid : shortAlphanumId

vids : vid { list_cons($$, $1, NULL); }
     | vid vids { list_cons($$, $1, $2); }

sigids : sigid { list_cons($$, $1, NULL); }
       | sigid sigids { list_cons($$, $1, $2) }

longstrids : longstrid { list_cons($$, $1, NULL); }
           | longstrid longstrids { list_cons($$, $1, $2); }

%%

void tlua_yyerror(struct region *lloc, void *scanner, tlua_lexstate *lexstate, const char *msg)
{
    UNUSED(lloc);
    UNUSED(scanner);
    UNUSED(lexstate);
    fprintf(stderr, "Error: %s\n", msg);
}
