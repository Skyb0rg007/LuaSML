/* A Bison parser, made by GNU Bison 3.6.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         TLUA_YYSTYPE
#define YYLTYPE         TLUA_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         tlua_yyparse
#define yylex           tlua_yylex
#define yyerror         tlua_yyerror
#define yydebug         tlua_yydebug
#define yynerrs         tlua_yynerrs


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_TLUA_YY_BUILD_PARSER_H_INCLUDED
# define YY_TLUA_YY_BUILD_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef TLUA_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define TLUA_YYDEBUG 1
#  else
#   define TLUA_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define TLUA_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined TLUA_YYDEBUG */
#if TLUA_YYDEBUG
extern int tlua_yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/parser.y"

#include <stdio.h>
#include <lua.h>
#include <tlua/alloc.h>
#include <tlua/region.h>
#include <tlua/ast.h>
#include <tlua/lexer.h>

#line 128 "_build/parser.c"

/* Token kinds.  */
#ifndef TLUA_YYTOKENTYPE
# define TLUA_YYTOKENTYPE
  enum tlua_yytokentype
  {
    T_TLUA_YYEMPTY = -2,
    T_EOF = 0,                     /* EOF  */
    T_TLUA_YYerror = 1,            /* error  */
    T_TLUA_YYUNDEF = 2,            /* "invalid token"  */
    T_HASH = 3,                    /* HASH  */
    T_HASHLBRACKET = 4,            /* HASHLBRACKET  */
    T_LPAREN = 5,                  /* LPAREN  */
    T_RPAREN = 6,                  /* RPAREN  */
    T_COMMA = 7,                   /* COMMA  */
    T_ARROW = 8,                   /* ARROW  */
    T_ASTERISK = 9,                /* ASTERISK  */
    T_DOTDOTDOT = 10,              /* DOTDOTDOT  */
    T_COLON = 11,                  /* COLON  */
    T_COLONGT = 12,                /* COLONGT  */
    T_SEMICOLON = 13,              /* SEMICOLON  */
    T_EQUALOP = 14,                /* EQUALOP  */
    T_DARROW = 15,                 /* DARROW  */
    T_LBRACKET = 16,               /* LBRACKET  */
    T_RBRACKET = 17,               /* RBRACKET  */
    T_WILD = 18,                   /* WILD  */
    T_LBRACE = 19,                 /* LBRACE  */
    T_BAR = 20,                    /* BAR  */
    T_RBRACE = 21,                 /* RBRACE  */
    T_AND = 22,                    /* AND  */
    T_ANDALSO = 23,                /* ANDALSO  */
    T_AS = 24,                     /* AS  */
    T_CASE = 25,                   /* CASE  */
    T_DATATYPE = 26,               /* DATATYPE  */
    T_DO = 27,                     /* DO  */
    T_ELSE = 28,                   /* ELSE  */
    T_END = 29,                    /* END  */
    T_EQTYPE = 30,                 /* EQTYPE  */
    T_EXCEPTION = 31,              /* EXCEPTION  */
    T_FN = 32,                     /* FN  */
    T_FUN = 33,                    /* FUN  */
    T_FUNCTOR = 34,                /* FUNCTOR  */
    T_HANDLE = 35,                 /* HANDLE  */
    T_IF = 36,                     /* IF  */
    T_IN = 37,                     /* IN  */
    T_INCLUDE = 38,                /* INCLUDE  */
    T_INFIX = 39,                  /* INFIX  */
    T_INFIXR = 40,                 /* INFIXR  */
    T_LET = 41,                    /* LET  */
    T_LOCAL = 42,                  /* LOCAL  */
    T_NONFIX = 43,                 /* NONFIX  */
    T_OF = 44,                     /* OF  */
    T_OP = 45,                     /* OP  */
    T_OPEN = 46,                   /* OPEN  */
    T_ORELSE = 47,                 /* ORELSE  */
    T_RAISE = 48,                  /* RAISE  */
    T_REC = 49,                    /* REC  */
    T_SHARING = 50,                /* SHARING  */
    T_SIG = 51,                    /* SIG  */
    T_SIGNATURE = 52,              /* SIGNATURE  */
    T_STRUCT = 53,                 /* STRUCT  */
    T_STRUCTURE = 54,              /* STRUCTURE  */
    T_THEN = 55,                   /* THEN  */
    T_TYPE = 56,                   /* TYPE  */
    T_VAL = 57,                    /* VAL  */
    T_WHERE = 58,                  /* WHERE  */
    T_WHILE = 59,                  /* WHILE  */
    T_WITH = 60,                   /* WITH  */
    T_WITHTYPE = 61,               /* WITHTYPE  */
    T_SHORTALPHANUMID = 62,        /* SHORTALPHANUMID  */
    T_SHORTSYMID = 63,             /* SHORTSYMID  */
    T_TYVARID = 64,                /* TYVARID  */
    T_LONGALPHANUMID = 65,         /* LONGALPHANUMID  */
    T_LONGSYMID = 66,              /* LONGSYMID  */
    T_REAL = 67,                   /* REAL  */
    T_WORD = 68,                   /* WORD  */
    T_INT = 69,                    /* INT  */
    T_STRING = 70,                 /* STRING  */
    T_CHAR = 71                    /* CHAR  */
  };
  typedef enum tlua_yytokentype tlua_yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined TLUA_YYSTYPE && ! defined TLUA_YYSTYPE_IS_DECLARED
union TLUA_YYSTYPE
{
#line 67 "src/parser.y"

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

#line 237 "_build/parser.c"

};
typedef union TLUA_YYSTYPE TLUA_YYSTYPE;
# define TLUA_YYSTYPE_IS_TRIVIAL 1
# define TLUA_YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
typedef struct region TLUA_YYLTYPE;



int tlua_yyparse (void *scanner, tlua_lexstate *lexstate);

#endif /* !YY_TLUA_YY_BUILD_PARSER_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* EOF  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_HASH = 3,                       /* HASH  */
  YYSYMBOL_HASHLBRACKET = 4,               /* HASHLBRACKET  */
  YYSYMBOL_LPAREN = 5,                     /* LPAREN  */
  YYSYMBOL_RPAREN = 6,                     /* RPAREN  */
  YYSYMBOL_COMMA = 7,                      /* COMMA  */
  YYSYMBOL_ARROW = 8,                      /* ARROW  */
  YYSYMBOL_ASTERISK = 9,                   /* ASTERISK  */
  YYSYMBOL_DOTDOTDOT = 10,                 /* DOTDOTDOT  */
  YYSYMBOL_COLON = 11,                     /* COLON  */
  YYSYMBOL_COLONGT = 12,                   /* COLONGT  */
  YYSYMBOL_SEMICOLON = 13,                 /* SEMICOLON  */
  YYSYMBOL_EQUALOP = 14,                   /* EQUALOP  */
  YYSYMBOL_DARROW = 15,                    /* DARROW  */
  YYSYMBOL_LBRACKET = 16,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 17,                  /* RBRACKET  */
  YYSYMBOL_WILD = 18,                      /* WILD  */
  YYSYMBOL_LBRACE = 19,                    /* LBRACE  */
  YYSYMBOL_BAR = 20,                       /* BAR  */
  YYSYMBOL_RBRACE = 21,                    /* RBRACE  */
  YYSYMBOL_AND = 22,                       /* AND  */
  YYSYMBOL_ANDALSO = 23,                   /* ANDALSO  */
  YYSYMBOL_AS = 24,                        /* AS  */
  YYSYMBOL_CASE = 25,                      /* CASE  */
  YYSYMBOL_DATATYPE = 26,                  /* DATATYPE  */
  YYSYMBOL_DO = 27,                        /* DO  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_END = 29,                       /* END  */
  YYSYMBOL_EQTYPE = 30,                    /* EQTYPE  */
  YYSYMBOL_EXCEPTION = 31,                 /* EXCEPTION  */
  YYSYMBOL_FN = 32,                        /* FN  */
  YYSYMBOL_FUN = 33,                       /* FUN  */
  YYSYMBOL_FUNCTOR = 34,                   /* FUNCTOR  */
  YYSYMBOL_HANDLE = 35,                    /* HANDLE  */
  YYSYMBOL_IF = 36,                        /* IF  */
  YYSYMBOL_IN = 37,                        /* IN  */
  YYSYMBOL_INCLUDE = 38,                   /* INCLUDE  */
  YYSYMBOL_INFIX = 39,                     /* INFIX  */
  YYSYMBOL_INFIXR = 40,                    /* INFIXR  */
  YYSYMBOL_LET = 41,                       /* LET  */
  YYSYMBOL_LOCAL = 42,                     /* LOCAL  */
  YYSYMBOL_NONFIX = 43,                    /* NONFIX  */
  YYSYMBOL_OF = 44,                        /* OF  */
  YYSYMBOL_OP = 45,                        /* OP  */
  YYSYMBOL_OPEN = 46,                      /* OPEN  */
  YYSYMBOL_ORELSE = 47,                    /* ORELSE  */
  YYSYMBOL_RAISE = 48,                     /* RAISE  */
  YYSYMBOL_REC = 49,                       /* REC  */
  YYSYMBOL_SHARING = 50,                   /* SHARING  */
  YYSYMBOL_SIG = 51,                       /* SIG  */
  YYSYMBOL_SIGNATURE = 52,                 /* SIGNATURE  */
  YYSYMBOL_STRUCT = 53,                    /* STRUCT  */
  YYSYMBOL_STRUCTURE = 54,                 /* STRUCTURE  */
  YYSYMBOL_THEN = 55,                      /* THEN  */
  YYSYMBOL_TYPE = 56,                      /* TYPE  */
  YYSYMBOL_VAL = 57,                       /* VAL  */
  YYSYMBOL_WHERE = 58,                     /* WHERE  */
  YYSYMBOL_WHILE = 59,                     /* WHILE  */
  YYSYMBOL_WITH = 60,                      /* WITH  */
  YYSYMBOL_WITHTYPE = 61,                  /* WITHTYPE  */
  YYSYMBOL_SHORTALPHANUMID = 62,           /* SHORTALPHANUMID  */
  YYSYMBOL_SHORTSYMID = 63,                /* SHORTSYMID  */
  YYSYMBOL_TYVARID = 64,                   /* TYVARID  */
  YYSYMBOL_LONGALPHANUMID = 65,            /* LONGALPHANUMID  */
  YYSYMBOL_LONGSYMID = 66,                 /* LONGSYMID  */
  YYSYMBOL_REAL = 67,                      /* REAL  */
  YYSYMBOL_WORD = 68,                      /* WORD  */
  YYSYMBOL_INT = 69,                       /* INT  */
  YYSYMBOL_STRING = 70,                    /* STRING  */
  YYSYMBOL_CHAR = 71,                      /* CHAR  */
  YYSYMBOL_YYACCEPT = 72,                  /* $accept  */
  YYSYMBOL_decs = 73,                      /* decs  */
  YYSYMBOL_numericField = 74,              /* numericField  */
  YYSYMBOL_aexp = 75,                      /* aexp  */
  YYSYMBOL_exp = 76,                       /* exp  */
  YYSYMBOL_exp_2c = 77,                    /* exp_2c  */
  YYSYMBOL_exp_list = 78,                  /* exp_list  */
  YYSYMBOL_exp_ps = 79,                    /* exp_ps  */
  YYSYMBOL_const = 80,                     /* const  */
  YYSYMBOL_shortAlphanumId = 81,           /* shortAlphanumId  */
  YYSYMBOL_shortSymId = 82,                /* shortSymId  */
  YYSYMBOL_longAlphanumId = 83,            /* longAlphanumId  */
  YYSYMBOL_longSymId = 84,                 /* longSymId  */
  YYSYMBOL_vidNoEqual = 85,                /* vidNoEqual  */
  YYSYMBOL_longvid = 86,                   /* longvid  */
  YYSYMBOL_longvidNoEqual = 87,            /* longvidNoEqual  */
  YYSYMBOL_idField = 88,                   /* idField  */
  YYSYMBOL_field = 89,                     /* field  */
  YYSYMBOL_input = 90,                     /* input  */
  YYSYMBOL_optsemicolon = 91               /* optsemicolon  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 9 "src/parser.y"

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


#line 402 "_build/parser.c"

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#ifdef NDEBUG
# define YY_ASSERT(E) ((void) (0 && (E)))
#else
# include <assert.h> /* INFRINGES ON USER NAME SPACE */
# define YY_ASSERT(E) assert (E)
#endif


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined TLUA_YYLTYPE_IS_TRIVIAL && TLUA_YYLTYPE_IS_TRIVIAL \
             && defined TLUA_YYSTYPE_IS_TRIVIAL && TLUA_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   155

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  48
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  67

#define YYMAXUTOK   326


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX) YY_CAST (yysymbol_kind_t, YYX)

#if TLUA_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   132,   132,   133,   135,   142,   144,   146,   147,   149,
     150,   151,   152,   153,   155,   156,   157,   166,   172,   173,
     174,   186,   187,   193,   194,   200,   200,   215,   216,   217,
     218,   219,   221,   222,   223,   224,   226,   227,   228,   233,
     234,   235,   237,   238,   252,   253,   254,   256,   257
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "EOF", "error", "invalid token", "HASH", "HASHLBRACKET", "LPAREN",
  "RPAREN", "COMMA", "ARROW", "ASTERISK", "DOTDOTDOT", "COLON", "COLONGT",
  "SEMICOLON", "EQUALOP", "DARROW", "LBRACKET", "RBRACKET", "WILD",
  "LBRACE", "BAR", "RBRACE", "AND", "ANDALSO", "AS", "CASE", "DATATYPE",
  "DO", "ELSE", "END", "EQTYPE", "EXCEPTION", "FN", "FUN", "FUNCTOR",
  "HANDLE", "IF", "IN", "INCLUDE", "INFIX", "INFIXR", "LET", "LOCAL",
  "NONFIX", "OF", "OP", "OPEN", "ORELSE", "RAISE", "REC", "SHARING", "SIG",
  "SIGNATURE", "STRUCT", "STRUCTURE", "THEN", "TYPE", "VAL", "WHERE",
  "WHILE", "WITH", "WITHTYPE", "SHORTALPHANUMID", "SHORTSYMID", "TYVARID",
  "LONGALPHANUMID", "LONGSYMID", "REAL", "WORD", "INT", "STRING", "CHAR",
  "$accept", "decs", "numericField", "aexp", "exp", "exp_2c", "exp_list",
  "exp_ps", "const", "shortAlphanumId", "shortSymId", "longAlphanumId",
  "longSymId", "vidNoEqual", "longvid", "longvidNoEqual", "idField",
  "field", "input", "optsemicolon", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
#endif

#define YYPACT_NINF (-48)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -48,     0,   -48,    -8,     5,    74,    79,    -6,   -48,    -3,
     -48,   -48,   -48,   -48,   -48,     4,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     6,     1,
     -48,     7,    17,    19,   -48,     9,   -48,   -10,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,    84,   -48,    84,    84,   -48,   -48,   -48,   -48,    84,
     -48,    21,   -48,    16,   -48,     2,   -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     5,     0,
      27,    28,    29,    30,    31,    25,    10,    46,    32,    33,
       4,    48,    44,    45,    47,    11,    13,     6,    23,     0,
      15,    25,     0,     0,    19,     0,    14,     0,    38,    43,
      34,    35,    36,    37,    40,    41,    39,     9,    42,    26,
       3,     0,    12,     0,    26,     7,    17,    16,    18,     0,
      24,    22,    21,    25,     8,     0,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -48,   -48,   -48,    29,    32,   -21,    -4,   -47,   -48,    24,
      25,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,    20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    37,    21,    27,    28,    32,    29,    33,    16,    22,
      23,    44,    45,    46,    47,    48,    24,    25,     1,    55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       2,    17,    35,     3,     4,     5,    38,    64,     3,     4,
       5,    39,    65,    51,    53,    36,     6,    49,    52,     7,
      54,     6,    26,    56,     7,    57,    58,    59,    53,    54,
      15,    66,    62,    42,    43,    50,     0,    31,     0,     0,
       0,     8,     0,     0,     0,     9,     8,    60,     0,     0,
       9,     0,     0,     0,    18,    19,     0,     0,     0,    18,
      19,    20,    40,    41,     0,     0,     0,    10,    11,    12,
      13,    14,    10,    11,    12,    13,    14,     3,     4,     5,
      30,     0,     3,     4,     5,    61,    63,     3,     4,     5,
       6,    63,     0,     7,     0,     6,    34,     0,     7,     0,
       6,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,     9,
       8,     0,     0,     0,     9,     8,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,    12,    13,    14,    10,    11,    12,    13,
      14,    10,    11,    12,    13,    14
};

static const yytype_int8 yycheck[] =
{
       0,     9,     6,     3,     4,     5,     9,    54,     3,     4,
       5,    14,    59,     7,     7,    21,    16,    13,    17,    19,
      13,    16,    17,     6,    19,     6,    17,    37,     7,    13,
       1,    29,    53,     9,     9,    15,    -1,     5,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    41,    51,    -1,    -1,
      45,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    62,
      63,    69,    65,    66,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    67,    68,    69,    70,    71,     3,     4,     5,
       6,    -1,     3,     4,     5,    53,    54,     3,     4,     5,
      16,    59,    -1,    19,    -1,    16,    17,    -1,    19,    -1,
      16,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      41,    -1,    -1,    -1,    45,    41,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    67,    68,    69,    70,
      71,    67,    68,    69,    70,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    90,     0,     3,     4,     5,    16,    19,    41,    45,
      67,    68,    69,    70,    71,    75,    80,     9,    62,    63,
      69,    74,    81,    82,    88,    89,    17,    75,    76,    78,
       6,    76,    77,    79,    17,    78,    21,    73,     9,    14,
      65,    66,    81,    82,    83,    84,    85,    86,    87,    13,
      91,     7,    17,     7,    13,    91,     6,     6,    17,    37,
      78,    76,    77,    76,    79,    79,    29
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    72,    90,    90,    74,    73,    76,    79,    79,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    77,    77,    78,    78,    91,    91,    80,    80,    80,
      80,    80,    81,    82,    83,    84,    85,    85,    85,    87,
      87,    87,    86,    86,    88,    88,    88,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     1,     0,     1,     2,     3,     2,
       1,     2,     3,     2,     2,     2,     3,     3,     3,     2,
       5,     3,     3,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = T_TLUA_YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == T_TLUA_YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, lexstate, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use T_TLUA_YYerror or T_TLUA_YYUNDEF. */
#define YYERRCODE T_TLUA_YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if TLUA_YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined TLUA_YYLTYPE_IS_TRIVIAL && TLUA_YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, lexstate); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, tlua_lexstate *lexstate)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (lexstate);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, tlua_lexstate *lexstate)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, lexstate);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, void *scanner, tlua_lexstate *lexstate)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, lexstate);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, lexstate); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !TLUA_YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !TLUA_YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif



static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yystrlen (yysymbol_name (yyarg[yyi]));
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp = yystpcpy (yyp, yysymbol_name (yyarg[yyi++]));
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void *scanner, tlua_lexstate *lexstate)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (lexstate);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *scanner, tlua_lexstate *lexstate)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined TLUA_YYLTYPE_IS_TRIVIAL && TLUA_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;


  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = T_TLUA_YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == T_TLUA_YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= T_EOF)
    {
      yychar = T_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == T_TLUA_YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = T_TLUA_YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = T_TLUA_YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3:
#line 133 "src/parser.y"
                               { printf("Got exp!\n"); }
#line 1732 "_build/parser.c"
    break;

  case 4:
#line 135 "src/parser.y"
                   {
    field((yyval.field), NUM);
    if ((yyvsp[0].integer).isfield)
        fprintf(stderr, "Invalid numeric label\n");
    (yyval.field)->val.num = (unsigned)(yyvsp[0].integer).val;
}
#line 1743 "_build/parser.c"
    break;

  case 5:
#line 142 "src/parser.y"
              { (yyval.list) = NULL; }
#line 1749 "_build/parser.c"
    break;

  case 7:
#line 146 "src/parser.y"
                          { cons((yyval.list), (yyvsp[-1].exp), NULL); }
#line 1755 "_build/parser.c"
    break;

  case 8:
#line 147 "src/parser.y"
                              { cons((yyval.list), (yyvsp[-2].exp), (yyvsp[0].list)); }
#line 1761 "_build/parser.c"
    break;

  case 9:
#line 149 "src/parser.y"
                  { exp((yyval.exp), VAR, (yyloc)); (yyval.exp)->val.var = (yyvsp[0].var); }
#line 1767 "_build/parser.c"
    break;

  case 10:
#line 150 "src/parser.y"
             { exp((yyval.exp), CONST, (yyloc)); (yyval.exp)->val.const_ = (yyvsp[0].const_); }
#line 1773 "_build/parser.c"
    break;

  case 11:
#line 151 "src/parser.y"
                  { exp((yyval.exp), SELECTOR, (yyloc)); (yyval.exp)->val.sel = (yyvsp[0].field); }
#line 1779 "_build/parser.c"
    break;

  case 12:
#line 152 "src/parser.y"
                                      { exp((yyval.exp), VECTOR, (yyloc)); (yyval.exp)->val.exps = (yyvsp[-1].list); }
#line 1785 "_build/parser.c"
    break;

  case 13:
#line 153 "src/parser.y"
                             { exp((yyval.exp), VECTOR, (yyloc)); (yyval.exp)->val.exps = NULL; }
#line 1791 "_build/parser.c"
    break;

  case 14:
#line 155 "src/parser.y"
                     { exp((yyval.exp), RECORD, (yyloc)); (yyval.exp)->val.record = NULL; }
#line 1797 "_build/parser.c"
    break;

  case 15:
#line 156 "src/parser.y"
                     { exp((yyval.exp), RECORD, (yyloc)); (yyval.exp)->val.record = NULL; }
#line 1803 "_build/parser.c"
    break;

  case 16:
#line 157 "src/parser.y"
                            {
        if ((yyvsp[-1].list) && !(yyvsp[-1].list)->cdr) {
            (yyval.exp) = (yyvsp[-1].list)->car;
            (yyval.exp)->loc = (yyloc);
        } else {
            exp((yyval.exp), SEQ, (yyloc));
            (yyval.exp)->val.exps = (yyvsp[-1].list);
        }
     }
#line 1817 "_build/parser.c"
    break;

  case 17:
#line 166 "src/parser.y"
                            {
        if ((yyvsp[-1].list) && !(yyvsp[-1].list)->cdr) {
            (yyval.exp) = (yyvsp[-1].list)->car;
            (yyval.exp)->loc = (yyloc);
        }
     }
#line 1828 "_build/parser.c"
    break;

  case 18:
#line 172 "src/parser.y"
                                  { exp((yyval.exp), LIST, (yyloc)); (yyval.exp)->val.exps = (yyvsp[-1].list); }
#line 1834 "_build/parser.c"
    break;

  case 19:
#line 173 "src/parser.y"
                         { exp((yyval.exp), LIST, (yyloc)); (yyval.exp)->val.exps = NULL; }
#line 1840 "_build/parser.c"
    break;

  case 20:
#line 174 "src/parser.y"
                              {
        exp((yyval.exp), LET, (yyloc));
        (yyval.exp)->val.let.decs = (yyvsp[-3].list);
        if (!(yyvsp[-1].list)->cdr)
            (yyval.exp)->val.let.body = (yyvsp[-1].list)->car;
        else {
            exp((yyval.exp)->val.let.body, SEQ, (yylsp[-1]));
            (yyval.exp)->val.let.body->val.exps = (yyvsp[-1].list);
        }
            
     }
#line 1856 "_build/parser.c"
    break;

  case 21:
#line 186 "src/parser.y"
                          { cons((yyval.list), (yyvsp[-2].exp), (yyvsp[0].list)); }
#line 1862 "_build/parser.c"
    break;

  case 22:
#line 187 "src/parser.y"
                       {
           tlua_list *l;
           cons(l, (yyvsp[0].exp), NULL);
           cons((yyval.list), (yyvsp[-2].exp), l);
       }
#line 1872 "_build/parser.c"
    break;

  case 23:
#line 193 "src/parser.y"
               { cons((yyval.list), (yyvsp[0].exp), NULL); }
#line 1878 "_build/parser.c"
    break;

  case 24:
#line 194 "src/parser.y"
                              { cons((yyval.list), (yyvsp[-2].exp), (yyvsp[0].list)); }
#line 1884 "_build/parser.c"
    break;

  case 27:
#line 215 "src/parser.y"
               { const_((yyval.const_), REAL, (yyloc)); (yyval.const_)->val.real = (yyvsp[0].real); }
#line 1890 "_build/parser.c"
    break;

  case 28:
#line 216 "src/parser.y"
               { const_((yyval.const_), WORD, (yyloc)); (yyval.const_)->val.word = (yyvsp[0].word); }
#line 1896 "_build/parser.c"
    break;

  case 29:
#line 217 "src/parser.y"
               { const_((yyval.const_), INT, (yyloc)); (yyval.const_)->val.int_ = (yyvsp[0].integer).val; }
#line 1902 "_build/parser.c"
    break;

  case 30:
#line 218 "src/parser.y"
               { const_((yyval.const_), STRING, (yyloc)); (yyval.const_)->val.string.buf = (yyvsp[0].string).buf; (yyval.const_)->val.string.len = (yyvsp[0].string).len; }
#line 1908 "_build/parser.c"
    break;

  case 31:
#line 219 "src/parser.y"
               { const_((yyval.const_), CHAR, (yyloc)); (yyval.const_)->val.char_ = (yyvsp[0].chr); }
#line 1914 "_build/parser.c"
    break;

  case 32:
#line 221 "src/parser.y"
                                  { var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 1920 "_build/parser.c"
    break;

  case 33:
#line 222 "src/parser.y"
                                  { var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 1926 "_build/parser.c"
    break;

  case 34:
#line 223 "src/parser.y"
                                  { var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 1932 "_build/parser.c"
    break;

  case 35:
#line 224 "src/parser.y"
                                  { var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 1938 "_build/parser.c"
    break;

  case 38:
#line 228 "src/parser.y"
                      { var((yyval.var), (yyloc)); (yyval.var)->name = "*"; }
#line 1944 "_build/parser.c"
    break;

  case 43:
#line 238 "src/parser.y"
                  { var((yyval.var), (yyloc)); (yyval.var)->name = "="; }
#line 1950 "_build/parser.c"
    break;

  case 44:
#line 252 "src/parser.y"
                          { field((yyval.field), ID); (yyval.field)->val.ident = (yyvsp[0].var)->name; }
#line 1956 "_build/parser.c"
    break;

  case 45:
#line 253 "src/parser.y"
                     { field((yyval.field), ID); (yyval.field)->val.ident = (yyvsp[0].var)->name; }
#line 1962 "_build/parser.c"
    break;

  case 46:
#line 254 "src/parser.y"
                   { field((yyval.field), ID); (yyval.field)->val.ident = "*"; }
#line 1968 "_build/parser.c"
    break;


#line 1972 "_build/parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == T_TLUA_YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, scanner, lexstate, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= T_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == T_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, lexstate);
          yychar = T_TLUA_YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, lexstate);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, lexstate, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != T_TLUA_YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, lexstate);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, lexstate);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 277 "src/parser.y"


void tlua_yyerror(struct region *lloc, void *scanner, tlua_lexstate *lexstate, const char *msg)
{
    fprintf(stderr, "Error: %s\n", msg);
}
