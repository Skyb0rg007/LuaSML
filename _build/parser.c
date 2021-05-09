/* A Bison parser, made by GNU Bison 3.7.4.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

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

#include "parser.h"
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
  YYSYMBOL_input = 73,                     /* input  */
  YYSYMBOL_decs = 74,                      /* decs  */
  YYSYMBOL_dec = 75,                       /* dec  */
  YYSYMBOL_decnolocal = 76,                /* decnolocal  */
  YYSYMBOL_valbind = 77,                   /* valbind  */
  YYSYMBOL_rvalbind = 78,                  /* rvalbind  */
  YYSYMBOL_constraint = 79,                /* constraint  */
  YYSYMBOL_funs = 80,                      /* funs  */
  YYSYMBOL_clauses_top = 81,               /* clauses_top  */
  YYSYMBOL_clauses = 82,                   /* clauses  */
  YYSYMBOL_clause = 83,                    /* clause  */
  YYSYMBOL_tbs = 84,                       /* tbs  */
  YYSYMBOL_tb = 85,                        /* tb  */
  YYSYMBOL_tyvars = 86,                    /* tyvars  */
  YYSYMBOL_tyvarseq = 87,                  /* tyvarseq  */
  YYSYMBOL_tyvar_pc = 88,                  /* tyvar_pc  */
  YYSYMBOL_constrs = 89,                   /* constrs  */
  YYSYMBOL_constr = 90,                    /* constr  */
  YYSYMBOL_opcon = 91,                     /* opcon  */
  YYSYMBOL_ebs = 92,                       /* ebs  */
  YYSYMBOL_eb = 93,                        /* eb  */
  YYSYMBOL_ebrhs = 94,                     /* ebrhs  */
  YYSYMBOL_fixity = 95,                    /* fixity  */
  YYSYMBOL_digit = 96,                     /* digit  */
  YYSYMBOL_numericField = 97,              /* numericField  */
  YYSYMBOL_datatype_rhs = 98,              /* datatype_rhs  */
  YYSYMBOL_repl = 99,                      /* repl  */
  YYSYMBOL_datbind = 100,                  /* datbind  */
  YYSYMBOL_dbs = 101,                      /* dbs  */
  YYSYMBOL_db = 102,                       /* db  */
  YYSYMBOL_withtypes = 103,                /* withtypes  */
  YYSYMBOL_match = 104,                    /* match  */
  YYSYMBOL_rules = 105,                    /* rules  */
  YYSYMBOL_rule = 106,                     /* rule  */
  YYSYMBOL_elabel = 107,                   /* elabel  */
  YYSYMBOL_elabels = 108,                  /* elabels  */
  YYSYMBOL_exp_ps = 109,                   /* exp_ps  */
  YYSYMBOL_exp = 110,                      /* exp  */
  YYSYMBOL_app_exp = 111,                  /* app_exp  */
  YYSYMBOL_aexp = 112,                     /* aexp  */
  YYSYMBOL_exp_2c = 113,                   /* exp_2c  */
  YYSYMBOL_exp_list = 114,                 /* exp_list  */
  YYSYMBOL_pat = 115,                      /* pat  */
  YYSYMBOL_cpat = 116,                     /* cpat  */
  YYSYMBOL_apats = 117,                    /* apats  */
  YYSYMBOL_apat = 118,                     /* apat  */
  YYSYMBOL_pats = 119,                     /* pats  */
  YYSYMBOL_barcpats = 120,                 /* barcpats  */
  YYSYMBOL_commapats = 121,                /* commapats  */
  YYSYMBOL_patitems = 122,                 /* patitems  */
  YYSYMBOL_patitem = 123,                  /* patitem  */
  YYSYMBOL_ty = 124,                       /* ty  */
  YYSYMBOL_ty1 = 125,                      /* ty1  */
  YYSYMBOL_tlabel = 126,                   /* tlabel  */
  YYSYMBOL_tlabels = 127,                  /* tlabels  */
  YYSYMBOL_tuple_ty = 128,                 /* tuple_ty  */
  YYSYMBOL_ty0_pc = 129,                   /* ty0_pc  */
  YYSYMBOL_optbar = 130,                   /* optbar  */
  YYSYMBOL_optsemicolon = 131,             /* optsemicolon  */
  YYSYMBOL_const = 132,                    /* const  */
  YYSYMBOL_shortAlphanumId = 133,          /* shortAlphanumId  */
  YYSYMBOL_shortSymId = 134,               /* shortSymId  */
  YYSYMBOL_longAlphanumId = 135,           /* longAlphanumId  */
  YYSYMBOL_longSymId = 136,                /* longSymId  */
  YYSYMBOL_vidNoEqual = 137,               /* vidNoEqual  */
  YYSYMBOL_vid = 138,                      /* vid  */
  YYSYMBOL_longvidNoEqual = 139,           /* longvidNoEqual  */
  YYSYMBOL_longvid = 140,                  /* longvid  */
  YYSYMBOL_con = 141,                      /* con  */
  YYSYMBOL_longcon = 142,                  /* longcon  */
  YYSYMBOL_tyvar = 143,                    /* tyvar  */
  YYSYMBOL_tycon = 144,                    /* tycon  */
  YYSYMBOL_longtycon = 145,                /* longtycon  */
  YYSYMBOL_idField = 146,                  /* idField  */
  YYSYMBOL_field = 147,                    /* field  */
  YYSYMBOL_longstrid = 148,                /* longstrid  */
  YYSYMBOL_vids = 149,                     /* vids  */
  YYSYMBOL_longstrids = 150                /* longstrids  */
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
extern int tlua_yylex(TLUA_YYSTYPE *, struct region *, void *);
static void tlua_yyerror(struct region *, void *scanner, tlua_lexstate *, const char *);
/* Required for allocation macros */
#define allocator (&lexstate->alloc)

#line 281 "_build/parser.c"

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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  81
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   877

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  195
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  323

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   326


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX) YY_CAST (yysymbol_kind_t, YYX)

#if TLUA_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   162,   162,   163,   167,   168,   169,   171,   172,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   185,
     192,   199,   204,   205,   211,   218,   219,   221,   222,   224,
     226,   227,   229,   231,   232,   234,   236,   237,   239,   240,
     242,   243,   245,   246,   248,   249,   251,   252,   254,   255,
     257,   259,   260,   261,   262,   264,   265,   266,   267,   268,
     270,   276,   283,   284,   286,   295,   301,   308,   309,   311,
     318,   323,   325,   326,   328,   330,   331,   345,   346,   348,
     349,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   362,   363,   364,   370,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   394,   419,   420,   421,   433,   434,
     440,   441,   445,   446,   448,   449,   450,   452,   453,   455,
     460,   465,   471,   472,   481,   482,   483,   484,   486,   487,
     489,   490,   492,   493,   495,   499,   503,   508,   515,   516,
     517,   519,   520,   521,   522,   523,   524,   525,   527,   529,
     530,   532,   533,   535,   536,   540,   540,   542,   542,   557,
     558,   559,   560,   561,   563,   564,   565,   566,   568,   569,
     570,   572,   573,   575,   576,   577,   579,   580,   582,   584,
     586,   588,   589,   591,   592,   594,   595,   596,   598,   599,
     603,   604,   610,   611,   616,   617
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
  "$accept", "input", "decs", "dec", "decnolocal", "valbind", "rvalbind",
  "constraint", "funs", "clauses_top", "clauses", "clause", "tbs", "tb",
  "tyvars", "tyvarseq", "tyvar_pc", "constrs", "constr", "opcon", "ebs",
  "eb", "ebrhs", "fixity", "digit", "numericField", "datatype_rhs", "repl",
  "datbind", "dbs", "db", "withtypes", "match", "rules", "rule", "elabel",
  "elabels", "exp_ps", "exp", "app_exp", "aexp", "exp_2c", "exp_list",
  "pat", "cpat", "apats", "apat", "pats", "barcpats", "commapats",
  "patitems", "patitem", "ty", "ty1", "tlabel", "tlabels", "tuple_ty",
  "ty0_pc", "optbar", "optsemicolon", "const", "shortAlphanumId",
  "shortSymId", "longAlphanumId", "longSymId", "vidNoEqual", "vid",
  "longvidNoEqual", "longvid", "con", "longcon", "tyvar", "tycon",
  "longtycon", "idField", "field", "longstrid", "vids", "longstrids", YY_NULLPTR
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

#define YYPACT_NINF (-255)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-189)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     633,   146,   426,   495,  -255,  -255,   564,    17,   633,    25,
     633,   499,   312,   633,   633,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,    64,   443,  -255,   652,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,   652,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,   399,    61,  -255,    81,   437,   100,
    -255,    99,  -255,   112,   102,    62,   111,   216,  -255,  -255,
     806,   300,   499,    41,   633,   349,    83,    58,    58,   499,
    -255,    20,    41,   320,   103,   499,  -255,   226,  -255,   628,
     381,  -255,    70,  -255,   633,    25,   633,  -255,  -255,  -255,
     633,  -255,  -255,   633,   633,  -255,  -255,  -255,   146,  -255,
      70,  -255,   633,    25,   806,   806,   806,  -255,    21,   312,
    -255,   130,   150,    45,  -255,   806,  -255,  -255,   633,  -255,
     104,  -255,    31,  -255,  -255,  -255,  -255,   109,   152,  -255,
     628,  -255,   226,    22,  -255,   174,  -255,  -255,  -255,  -255,
     177,    25,   806,  -255,  -255,  -255,   138,  -255,  -255,    20,
    -255,  -255,   178,    31,   668,   736,  -255,   764,   187,   633,
    -255,   226,  -255,   633,    70,   120,   194,   167,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,   195,  -255,    30,  -255,   512,
    -255,  -255,   559,  -255,   194,   628,  -255,   198,   193,   208,
     203,  -255,  -255,   204,   224,   219,  -255,   806,   633,    70,
     806,   806,  -255,   563,   228,   229,   233,    41,  -255,    41,
    -255,   286,    70,  -255,   349,    25,  -255,  -255,   238,   251,
     499,  -255,    41,   250,   736,  -255,   255,  -255,   633,   236,
    -255,   628,   153,   270,  -255,   275,   263,   290,    70,    70,
    -255,   806,  -255,  -255,  -255,  -255,  -255,   181,   806,  -255,
     628,   194,    48,  -255,    26,   633,  -255,   104,    29,  -255,
      31,  -255,   312,  -255,  -255,   194,  -255,  -255,   806,   283,
     273,  -255,    70,  -255,   271,   581,  -255,  -255,    70,   122,
     146,  -255,    70,   194,   167,  -255,   198,  -255,  -255,   806,
     628,  -255,   122,   349,   293,  -255,  -255,   633,  -255,   194,
      25,   764,   185,  -255,  -255,  -255,   194,  -255,  -255,  -255,
    -255,   284,   272,    25,   628,   305,  -255,   349,    70,   736,
    -255,   194,  -255
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,   170,   177,     0,     0,     0,   155,
       0,     4,     0,     0,     0,   164,   165,   166,   167,   159,
     160,   161,   162,   163,     0,   157,    85,    91,    96,   168,
     169,   174,   175,   173,   176,    93,   187,    61,   189,   185,
     186,   188,    97,    99,   110,     0,   102,     0,   157,     0,
     106,     0,   101,    78,     0,    25,     0,     0,   156,    86,
       0,     0,     4,    36,     0,     0,   155,    55,    57,     4,
      59,     0,    36,     0,     0,     4,     7,     0,    95,    90,
       0,     1,     0,   158,     0,   155,     0,     3,    92,    94,
       0,    98,   103,     0,   158,    79,   104,   105,     0,   100,
       0,    76,     0,   155,   128,   128,   128,   122,     0,     0,
      71,    72,     0,   113,   116,   117,   121,   119,     0,     6,
       0,   180,     0,    37,    15,    62,    63,    65,    67,    38,
      11,   172,     0,    51,    16,    48,   171,   178,    46,    12,
      27,   155,     0,    60,    56,    58,     0,   190,   191,   194,
      17,    14,    33,     0,   128,     0,     9,     0,     0,     0,
       5,   192,    18,     0,     0,     0,    84,   140,   138,   181,
     182,   184,   141,   183,   147,    83,    81,    82,   111,   109,
     108,    80,   157,    77,    26,    75,    87,   132,     0,     0,
       0,   136,   126,     0,   135,     0,   120,     0,     0,     0,
       0,     0,   118,     0,     0,    40,     0,    36,    66,    36,
      47,     0,     0,    50,     0,   155,    13,    29,    30,    25,
       4,   195,    36,     0,     0,    21,     0,    10,     0,     0,
     193,    88,     0,     0,   143,   150,     0,     0,     0,     0,
     146,     0,   129,   125,   123,   124,   127,     0,     0,    73,
      74,   115,   130,   112,   114,     0,    39,     0,   155,    70,
       0,    68,     0,   179,    53,    52,    49,    28,     0,     0,
       0,    34,     0,    22,     0,    19,   107,   145,     0,     0,
       0,   142,     0,   139,   152,   151,   132,   134,   137,     0,
      89,    41,     0,     0,     0,    54,    31,     0,     8,    35,
     155,     0,   153,   154,   144,   149,   148,   133,   131,    64,
      69,    42,    44,   155,    32,    23,    20,     0,     0,     0,
      43,    45,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,   -51,  -255,  -255,  -147,  -202,    96,  -124,  -255,
      54,  -255,  -174,  -255,   -60,     1,    71,    13,  -255,  -254,
     128,  -255,  -255,  -255,   266,  -255,  -255,  -255,  -255,   134,
    -255,  -255,   -84,   147,  -255,  -255,   247,   -67,    44,    16,
    -255,   253,    19,   -53,  -188,  -110,  -255,    39,    67,    74,
     110,  -255,   121,   123,  -255,    84,   129,    72,   -64,   342,
     -44,    -1,    14,   141,  -255,   -37,   -43,   113,    11,   239,
     108,   246,  -118,  -153,     2,     7,  -255,   211,   227
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    74,    75,    76,   156,   225,   101,   139,   140,
     217,   218,   151,   152,   153,   123,   204,   310,   311,   133,
     134,   135,   213,    77,   144,    38,   124,   125,   126,   127,
     128,   208,    59,   110,   111,    53,    54,    47,    44,    26,
      27,    49,    45,   187,   113,   114,   115,   189,   253,   242,
     193,   194,   166,   167,   235,   236,   168,   233,    60,    95,
      28,    29,    30,    31,    32,    33,   137,    34,    35,   138,
     264,   172,   173,   174,    41,    56,   149,   162,   150
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,   176,   142,   122,   206,   202,    39,   112,    42,    55,
     227,   119,   252,   254,   240,    40,   116,   216,   146,   186,
     158,    40,   273,    78,   160,    51,    36,   181,   136,   116,
      36,   191,   219,   259,   161,   223,   211,   199,    52,   312,
     136,    82,   192,    88,    25,    58,   120,    48,   271,    58,
     201,    89,    57,    84,    61,   292,   199,    79,    80,   199,
     116,   116,   116,   312,    81,   200,   212,   141,   289,   201,
     147,   116,   201,   100,   157,   164,  -188,   142,    91,    15,
      16,   169,    15,    15,    16,    17,    37,    92,   120,   165,
      37,   267,   229,    15,    16,   136,   170,    39,   116,   169,
      55,   252,   226,    58,   158,   121,    96,    39,   130,   178,
     116,   116,    40,   116,   170,   195,    97,   322,   161,    98,
     196,   169,    40,    99,   136,   102,   304,   143,   175,    36,
     177,   240,    15,    16,   121,    17,   170,   179,   182,   309,
     159,   234,   294,   188,   112,   190,   185,   121,   147,   260,
     197,   142,   169,   116,   316,    36,   116,   116,   219,   277,
     278,   238,   203,   169,    39,   198,   169,   170,   121,   270,
     207,   226,   237,   117,   209,   220,   239,   136,   170,    40,
     116,   170,    15,    16,    15,    16,   117,    17,   286,    37,
      36,   191,   278,   238,   293,   288,   214,   116,   169,   215,
     222,   228,   238,   182,   116,   241,    82,   231,    15,    16,
     243,   169,   148,   170,   244,    37,   315,   117,   117,   117,
     245,   184,   263,   171,   116,   246,   170,    82,   117,    15,
      16,   247,    17,   248,   256,     4,   257,   169,   169,    84,
     131,   171,   250,    15,    16,   116,    39,   258,   158,   293,
      37,    85,   170,   170,   195,   117,   136,   116,   268,   169,
     103,    40,   100,    86,   272,   276,   226,   117,   117,   274,
     117,   169,   275,   263,   170,   116,   279,   169,   169,    39,
     136,   169,   280,   169,   281,   232,   170,   237,    15,    16,
     148,   169,   170,   170,    40,     4,   170,   297,   170,   290,
       5,   282,   298,   300,   317,   171,   170,   313,   171,   129,
     117,    82,   129,   117,   117,   269,   318,   169,   129,   129,
     251,     4,   296,    84,   104,   154,     5,   319,   291,     4,
     320,   262,   170,   265,   145,    85,   106,   117,   107,   108,
     171,   314,   266,   261,   249,   183,   180,    86,    15,    16,
     303,    17,    18,   171,   117,   118,   308,   287,     4,   283,
     307,   117,   284,   131,   305,   109,   205,    87,   285,   155,
     295,   210,   230,     0,    15,    16,   221,    17,    18,   171,
     171,   117,    15,    16,   121,    17,    18,    19,    20,    21,
      22,    23,    82,   299,   132,     0,     0,     0,     0,   302,
     205,     0,   117,   306,    84,     0,    90,     0,   163,     0,
      82,    15,    16,   171,   117,     0,    85,     0,     0,   171,
     171,     0,    84,   171,     0,   171,     0,     0,    86,     1,
       2,     3,   117,   171,    85,     4,     0,     0,     0,   321,
       5,     0,     6,    43,    93,     7,    86,     0,    82,     0,
      94,     8,     0,   129,    82,   129,    83,     0,     9,   171,
      84,     0,    10,     0,     0,     0,    84,    11,   129,     0,
       0,    12,    85,     0,    13,     0,     0,     0,    85,     0,
       0,     0,     0,     0,    86,    14,     0,     0,    15,    16,
      86,    17,    18,    19,    20,    21,    22,    23,     1,     2,
       3,    46,     0,   205,     4,     0,     0,     0,     0,     5,
       0,     6,    62,     0,     7,     0,     0,     0,     0,    93,
       8,     0,     0,    82,     0,    63,    64,     9,     0,     0,
      65,    10,    66,     0,     0,    84,    11,     0,    67,    68,
      12,    69,    70,    13,     0,    71,     0,    85,     0,     0,
       0,     0,     0,     0,    14,    72,    73,    15,    16,    86,
      17,    18,    19,    20,    21,    22,    23,     1,     2,     3,
      82,     0,    94,     4,    82,     0,     0,     0,     5,     0,
       6,    50,    84,     7,     0,     0,    84,     0,     0,     8,
       0,   255,    82,     0,    85,     0,     9,     0,    85,     0,
      10,     0,     0,   301,    84,    11,    86,     0,     0,    12,
      86,     0,    13,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,    14,     0,     0,    15,    16,    86,    17,
      18,    19,    20,    21,    22,    23,     1,     2,     3,    82,
       0,     0,     4,     0,     0,     0,     0,     5,     0,     6,
       0,    84,     7,     0,     0,     1,     2,     3,     8,     0,
       0,     4,     0,    85,     0,     9,     5,     0,     6,    10,
       0,     7,   104,   105,    11,    86,     0,     4,    12,     0,
       0,    13,     0,     0,   106,     0,   107,   108,     0,     0,
       0,     0,    14,    11,     0,    15,    16,    12,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,   109,    15,    16,     0,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
      15,    16,   121,    17,    18,    19,    20,    21,    22,    23,
     104,   105,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,   106,     0,   107,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,   105,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
     106,   109,   107,   108,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
       0,    17,    18,    19,    20,    21,    22,    23,     0,   109,
     104,   105,     0,   155,     0,     4,     0,     0,     0,     0,
       0,     0,   106,     0,   107,   108,    15,    16,     0,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
       0,    17,    18,    19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       1,    85,    66,    63,   122,   115,     7,    60,     1,     7,
     157,    62,   200,   201,   167,     1,    60,   141,    69,   103,
      73,     7,   224,    12,    75,     6,     9,    94,    65,    73,
       9,    10,   142,   207,    77,   153,    14,    11,    21,   293,
      77,    11,    21,    27,     0,    20,     5,     3,   222,    20,
      24,    35,     8,    23,    10,    26,    11,    13,    14,    11,
     104,   105,   106,   317,     0,    20,    44,    66,    20,    24,
      71,   115,    24,    11,    73,     5,    14,   141,    17,    62,
      63,    82,    62,    62,    63,    65,    69,     6,     5,    19,
      69,   215,   159,    62,    63,   132,    82,    98,   142,   100,
      98,   289,   155,    20,   157,    64,     6,   108,    64,    90,
     154,   155,    98,   157,   100,   108,    17,   319,   161,     7,
     109,   122,   108,    21,   161,    14,   279,    69,    84,     9,
      86,   284,    62,    63,    64,    65,   122,    93,    94,   292,
      37,    21,   260,   104,   197,   106,   102,    64,   149,   209,
      20,   215,   153,   197,   301,     9,   200,   201,   268,     6,
       7,     8,   118,   164,   165,    15,   167,   153,    64,   220,
      61,   224,   165,    60,    22,    37,     9,   214,   164,   165,
     224,   167,    62,    63,    62,    63,    73,    65,   241,    69,
       9,    10,     7,     8,   258,   248,    22,   241,   199,    22,
      22,    14,     8,   159,   248,     7,    11,   163,    62,    63,
      17,   212,    71,   199,     6,    69,   300,   104,   105,   106,
      17,   100,   211,    82,   268,    21,   212,    11,   115,    62,
      63,     7,    65,    14,     6,     9,     7,   238,   239,    23,
      14,   100,   198,    62,    63,   289,   247,    14,   301,   313,
      69,    35,   238,   239,   247,   142,   293,   301,    20,   260,
      44,   247,    11,    47,    14,    29,   319,   154,   155,    14,
     157,   272,   228,   262,   260,   319,     6,   278,   279,   280,
     317,   282,     7,   284,    21,   164,   272,   280,    62,    63,
     149,   292,   278,   279,   280,     9,   282,    14,   284,   255,
      14,    11,    29,    32,    20,   164,   292,    14,   167,    63,
     197,    11,    66,   200,   201,   219,    44,   318,    72,    73,
     199,     9,   268,    23,     4,     5,    14,    22,   257,     9,
     317,    45,   318,   212,    68,    35,    16,   224,    18,    19,
     199,   297,   214,   209,   197,    98,    93,    47,    62,    63,
     278,    65,    66,   212,   241,    55,   289,   247,     9,   238,
     286,   248,   239,    14,   280,    45,   120,    25,   239,    49,
     262,   132,   161,    -1,    62,    63,   149,    65,    66,   238,
     239,   268,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    11,   272,    45,    -1,    -1,    -1,    -1,   278,
     154,    -1,   289,   282,    23,    -1,     7,    -1,    27,    -1,
      11,    62,    63,   272,   301,    -1,    35,    -1,    -1,   278,
     279,    -1,    23,   282,    -1,   284,    -1,    -1,    47,     3,
       4,     5,   319,   292,    35,     9,    -1,    -1,    -1,   318,
      14,    -1,    16,    17,     7,    19,    47,    -1,    11,    -1,
      13,    25,    -1,   207,    11,   209,    13,    -1,    32,   318,
      23,    -1,    36,    -1,    -1,    -1,    23,    41,   222,    -1,
      -1,    45,    35,    -1,    48,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    47,    59,    -1,    -1,    62,    63,
      47,    65,    66,    67,    68,    69,    70,    71,     3,     4,
       5,     6,    -1,   257,     9,    -1,    -1,    -1,    -1,    14,
      -1,    16,    13,    -1,    19,    -1,    -1,    -1,    -1,     7,
      25,    -1,    -1,    11,    -1,    26,    27,    32,    -1,    -1,
      31,    36,    33,    -1,    -1,    23,    41,    -1,    39,    40,
      45,    42,    43,    48,    -1,    46,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    56,    57,    62,    63,    47,
      65,    66,    67,    68,    69,    70,    71,     3,     4,     5,
      11,    -1,    13,     9,    11,    -1,    -1,    -1,    14,    -1,
      16,    17,    23,    19,    -1,    -1,    23,    -1,    -1,    25,
      -1,    28,    11,    -1,    35,    -1,    32,    -1,    35,    -1,
      36,    -1,    -1,    22,    23,    41,    47,    -1,    -1,    45,
      47,    -1,    48,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    62,    63,    47,    65,
      66,    67,    68,    69,    70,    71,     3,     4,     5,    11,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    14,    -1,    16,
      -1,    23,    19,    -1,    -1,     3,     4,     5,    25,    -1,
      -1,     9,    -1,    35,    -1,    32,    14,    -1,    16,    36,
      -1,    19,     4,     5,    41,    47,    -1,     9,    45,    -1,
      -1,    48,    -1,    -1,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    59,    41,    -1,    62,    63,    45,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       4,     5,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    45,    18,    19,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    45,
       4,     5,    -1,    49,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    19,    62,    63,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     9,    14,    16,    19,    25,    32,
      36,    41,    45,    48,    59,    62,    63,    65,    66,    67,
      68,    69,    70,    71,    73,   110,   111,   112,   132,   133,
     134,   135,   136,   137,   139,   140,     9,    69,    97,   133,
     134,   146,   147,    17,   110,   114,     6,   109,   110,   113,
      17,   114,    21,   107,   108,   146,   147,   110,    20,   104,
     130,   110,    13,    26,    27,    31,    33,    39,    40,    42,
      43,    46,    56,    57,    74,    75,    76,    95,   140,   110,
     110,     0,    11,    13,    23,    35,    47,   131,   111,   111,
       7,    17,     6,     7,    13,   131,     6,    17,     7,    21,
      11,    79,    14,    44,     4,     5,    16,    18,    19,    45,
     105,   106,   115,   116,   117,   118,   132,   139,    55,    74,
       5,    64,    86,    87,    98,    99,   100,   101,   102,   143,
     110,    14,    45,    91,    92,    93,   137,   138,   141,    80,
      81,    87,   130,    69,    96,    96,    74,   133,   135,   148,
     150,    84,    85,    86,     5,    49,    77,    87,   115,    37,
      74,   138,   149,    27,     5,    19,   124,   125,   128,   133,
     134,   135,   143,   144,   145,   110,   104,   110,   114,   110,
     113,   109,   110,   108,   124,   110,   104,   115,   119,   119,
     119,    10,    21,   122,   123,   147,   140,    20,    15,    11,
      20,    24,   117,   110,    88,   143,   144,    61,   103,    22,
     141,    14,    44,    94,    22,    22,    80,    82,    83,   117,
      37,   150,    22,   144,    49,    78,   115,    77,    14,   109,
     149,   110,   124,   129,    21,   126,   127,   147,     8,     9,
     145,     7,   121,    17,     6,    17,    21,     7,    14,   105,
     110,   124,   116,   120,   116,    28,     6,     7,    14,    84,
      86,   101,    45,   140,   142,   124,    92,    80,    20,    79,
      74,    84,    14,    78,    14,   110,    29,     6,     7,     6,
       7,    21,    11,   124,   125,   128,   115,   122,   115,    20,
     110,    88,    26,   130,   144,   142,    82,    14,    29,   124,
      32,    22,   124,   129,   145,   127,   124,   121,   120,   145,
      89,    90,    91,    14,   110,   104,    77,    20,    44,    22,
      89,   124,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    74,    74,    74,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    78,    78,    78,    79,    79,    80,    80,    81,
      82,    82,    83,    84,    84,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    92,    92,
      93,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      96,    97,    98,    98,    99,   100,   100,   101,   101,   102,
     103,   104,   105,   105,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   111,   111,   111,   111,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   116,   117,   117,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   122,   122,   123,   124,   124,
     124,   125,   125,   125,   125,   125,   125,   125,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   132,   132,   132,   133,   134,   135,   136,   137,   137,
     137,   138,   138,   139,   139,   139,   140,   140,   141,   142,
     143,   144,   144,   145,   145,   146,   146,   146,   147,   147,
     148,   148,   149,   149,   150,   150
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     2,     1,     5,     2,
       3,     2,     2,     3,     2,     2,     2,     2,     2,     3,
       5,     2,     2,     4,     6,     0,     2,     1,     3,     2,
       1,     3,     4,     1,     3,     4,     0,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       2,     0,     2,     2,     3,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     5,     1,     2,     1,     3,     5,
       2,     2,     1,     3,     3,     3,     2,     3,     1,     2,
       3,     3,     3,     3,     3,     1,     2,     4,     4,     6,
       2,     1,     2,     1,     2,     2,     1,     2,     3,     2,
       3,     2,     2,     3,     3,     3,     2,     5,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     1,     2,     1,
       2,     1,     1,     3,     3,     3,     2,     3,     0,     2,
       1,     3,     0,     3,     3,     1,     1,     3,     1,     3,
       1,     1,     3,     2,     4,     3,     2,     1,     3,     3,
       1,     3,     3,     3,     3,     0,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2
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
/* Lookahead token kind.  */
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
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
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
  case 3: /* input: exp optsemicolon  */
#line 163 "src/parser.y"
                        { tlua_print_exp((yyvsp[-1].exp), stdout); puts(""); }
#line 1884 "_build/parser.c"
    break;

  case 4: /* decs: %empty  */
#line 167 "src/parser.y"
              { (yyval.dec_list) = NULL; }
#line 1890 "_build/parser.c"
    break;

  case 5: /* decs: dec decs  */
#line 168 "src/parser.y"
                { list_cons((yyval.dec_list), (yyvsp[-1].dec), (yyvsp[0].dec_list)); }
#line 1896 "_build/parser.c"
    break;

  case 6: /* decs: SEMICOLON decs  */
#line 169 "src/parser.y"
                      { (yyval.dec_list) = (yyvsp[0].dec_list); }
#line 1902 "_build/parser.c"
    break;

  case 7: /* dec: decnolocal  */
#line 171 "src/parser.y"
                 { (yyval.dec) = (yyvsp[0].dec); }
#line 1908 "_build/parser.c"
    break;

  case 8: /* dec: LOCAL decs IN decs END  */
#line 172 "src/parser.y"
                             { tlua_dec((yyval.dec), LOCAL, (yyloc)); (yyval.dec)->val.local.d1 = (yyvsp[-3].dec_list); (yyval.dec)->val.local.d2 = (yyvsp[-1].dec_list); }
#line 1914 "_build/parser.c"
    break;

  case 9: /* decnolocal: VAL valbind  */
#line 174 "src/parser.y"
                                   { tlua_dec((yyval.dec), VAL, (yyloc)); (yyval.dec)->val.val = (yyvsp[0].val); (yyval.dec)->val.val.tyvars = NULL; }
#line 1920 "_build/parser.c"
    break;

  case 10: /* decnolocal: VAL tyvarseq valbind  */
#line 175 "src/parser.y"
                                   { tlua_dec((yyval.dec), VAL, (yyloc)); (yyval.dec)->val.val = (yyvsp[0].val); (yyval.dec)->val.val.tyvars = (yyvsp[-1].var_list); }
#line 1926 "_build/parser.c"
    break;

  case 11: /* decnolocal: DO exp  */
#line 176 "src/parser.y"
                                   { tlua_dec((yyval.dec), DO, (yyloc)); (yyval.dec)->val.do_ = (yyvsp[0].exp); }
#line 1932 "_build/parser.c"
    break;

  case 12: /* decnolocal: FUN funs  */
#line 177 "src/parser.y"
                                   { tlua_dec((yyval.dec), FUN, (yyloc)); (yyval.dec)->val.fun.tyvars = NULL; (yyval.dec)->val.fun.fbs = (yyvsp[0].funbinds_list); }
#line 1938 "_build/parser.c"
    break;

  case 13: /* decnolocal: FUN tyvarseq funs  */
#line 178 "src/parser.y"
                                   { tlua_dec((yyval.dec), FUN, (yyloc)); (yyval.dec)->val.fun.tyvars = (yyvsp[-1].var_list); (yyval.dec)->val.fun.fbs = (yyvsp[0].funbinds_list); }
#line 1944 "_build/parser.c"
    break;

  case 14: /* decnolocal: TYPE tbs  */
#line 179 "src/parser.y"
                                   { tlua_dec((yyval.dec), TYPE, (yyloc)); (yyval.dec)->val.type = (yyvsp[0].typbind_list); }
#line 1950 "_build/parser.c"
    break;

  case 15: /* decnolocal: DATATYPE datatype_rhs  */
#line 180 "src/parser.y"
                                   { tlua_dec((yyval.dec), DATATYPE, (yyloc)); (yyval.dec)->val.datatype = (yyvsp[0].datatype_rhs); }
#line 1956 "_build/parser.c"
    break;

  case 16: /* decnolocal: EXCEPTION ebs  */
#line 181 "src/parser.y"
                                   { tlua_dec((yyval.dec), EXCEPTION, (yyloc)); (yyval.dec)->val.exception = (yyvsp[0].eb_list); }
#line 1962 "_build/parser.c"
    break;

  case 17: /* decnolocal: OPEN longstrids  */
#line 182 "src/parser.y"
                                   { tlua_dec((yyval.dec), OPEN, (yyloc)); (yyval.dec)->val.open = (yyvsp[0].var_list); }
#line 1968 "_build/parser.c"
    break;

  case 18: /* decnolocal: fixity vids  */
#line 183 "src/parser.y"
                                   { tlua_dec((yyval.dec), FIX, (yyloc)); (yyval.dec)->val.fixity.fixity = (yyvsp[-1].fixity); (yyval.dec)->val.fixity.ops = (yyvsp[0].var_list); }
#line 1974 "_build/parser.c"
    break;

  case 19: /* valbind: pat EQUALOP exp  */
#line 185 "src/parser.y"
                          {
            tlua_valbind *vb;
            tlua_valbind(vb);
            vb->pat = (yyvsp[-2].pat); vb->exp = (yyvsp[0].exp);
            list_cons((yyval.val).vbs, vb, NULL);
            (yyval.val).rvbs = NULL;
        }
#line 1986 "_build/parser.c"
    break;

  case 20: /* valbind: pat EQUALOP exp AND valbind  */
#line 192 "src/parser.y"
                                      {
            tlua_valbind *vb;
            tlua_valbind(vb);
            vb->pat = (yyvsp[-4].pat); vb->exp = (yyvsp[-2].exp);
            list_cons((yyval.val).vbs, vb, (yyvsp[0].val).vbs);
            (yyval.val).rvbs = (yyvsp[0].val).rvbs;
        }
#line 1998 "_build/parser.c"
    break;

  case 21: /* valbind: REC rvalbind  */
#line 199 "src/parser.y"
                       {
            (yyval.val).vbs = NULL;
            (yyval.val).rvbs = (yyvsp[0].rvalbind_list);
        }
#line 2007 "_build/parser.c"
    break;

  case 22: /* rvalbind: REC rvalbind  */
#line 204 "src/parser.y"
                        { (yyval.rvalbind_list) = (yyvsp[0].rvalbind_list); }
#line 2013 "_build/parser.c"
    break;

  case 23: /* rvalbind: pat EQUALOP FN match  */
#line 205 "src/parser.y"
                                {
            tlua_rvalbind *rvb;
            tlua_rvalbind(rvb);
            rvb->pat = (yyvsp[-3].pat); rvb->match = (yyvsp[0].match);
            list_cons((yyval.rvalbind_list), rvb, NULL);
         }
#line 2024 "_build/parser.c"
    break;

  case 24: /* rvalbind: pat EQUALOP FN match AND rvalbind  */
#line 211 "src/parser.y"
                                             {
            tlua_rvalbind *rvb;
            tlua_rvalbind(rvb);
            rvb->pat = (yyvsp[-5].pat); rvb->match = (yyvsp[-2].match);
            list_cons((yyval.rvalbind_list), rvb, (yyvsp[0].rvalbind_list));
         }
#line 2035 "_build/parser.c"
    break;

  case 25: /* constraint: %empty  */
#line 218 "src/parser.y"
                    { (yyval.type) = NULL; }
#line 2041 "_build/parser.c"
    break;

  case 26: /* constraint: COLON ty  */
#line 219 "src/parser.y"
                      { (yyval.type) = (yyvsp[0].type); }
#line 2047 "_build/parser.c"
    break;

  case 27: /* funs: clauses_top  */
#line 221 "src/parser.y"
                   { list_cons((yyval.funbinds_list), (yyvsp[0].funbind_list), NULL); }
#line 2053 "_build/parser.c"
    break;

  case 28: /* funs: clauses_top AND funs  */
#line 222 "src/parser.y"
                            { list_cons((yyval.funbinds_list), (yyvsp[-2].funbind_list), (yyvsp[0].funbinds_list)); }
#line 2059 "_build/parser.c"
    break;

  case 29: /* clauses_top: optbar clauses  */
#line 224 "src/parser.y"
                             { (yyval.funbind_list) = (yyvsp[0].funbind_list); }
#line 2065 "_build/parser.c"
    break;

  case 30: /* clauses: clause  */
#line 226 "src/parser.y"
                 { list_cons((yyval.funbind_list), (yyvsp[0].funbind), NULL); }
#line 2071 "_build/parser.c"
    break;

  case 31: /* clauses: clause BAR clauses  */
#line 227 "src/parser.y"
                             { list_cons((yyval.funbind_list), (yyvsp[-2].funbind), NULL); }
#line 2077 "_build/parser.c"
    break;

  case 32: /* clause: apats constraint EQUALOP exp  */
#line 229 "src/parser.y"
                                      { tlua_funbind((yyval.funbind)); (yyval.funbind)->pats = (yyvsp[-3].pat_list); (yyval.funbind)->result_type = (yyvsp[-2].type); (yyval.funbind)->body = (yyvsp[0].exp); }
#line 2083 "_build/parser.c"
    break;

  case 33: /* tbs: tb  */
#line 231 "src/parser.y"
         { list_cons((yyval.typbind_list), (yyvsp[0].typbind), NULL); }
#line 2089 "_build/parser.c"
    break;

  case 34: /* tbs: tb AND tbs  */
#line 232 "src/parser.y"
                 { list_cons((yyval.typbind_list), (yyvsp[-2].typbind), (yyvsp[0].typbind_list)); }
#line 2095 "_build/parser.c"
    break;

  case 35: /* tb: tyvars tycon EQUALOP ty  */
#line 234 "src/parser.y"
                             { tlua_typbind((yyval.typbind)); (yyval.typbind)->def = (yyvsp[0].type); (yyval.typbind)->tycon = (yyvsp[-2].var); (yyval.typbind)->tyvars = (yyvsp[-3].var_list); }
#line 2101 "_build/parser.c"
    break;

  case 36: /* tyvars: %empty  */
#line 236 "src/parser.y"
                { (yyval.var_list) = NULL; }
#line 2107 "_build/parser.c"
    break;

  case 37: /* tyvars: tyvarseq  */
#line 237 "src/parser.y"
                  { (yyval.var_list) = (yyvsp[0].var_list); }
#line 2113 "_build/parser.c"
    break;

  case 38: /* tyvarseq: tyvar  */
#line 239 "src/parser.y"
                 { list_cons((yyval.var_list), (yyvsp[0].var), NULL); }
#line 2119 "_build/parser.c"
    break;

  case 39: /* tyvarseq: LPAREN tyvar_pc RPAREN  */
#line 240 "src/parser.y"
                                  { (yyval.var_list) = (yyvsp[-1].var_list); }
#line 2125 "_build/parser.c"
    break;

  case 40: /* tyvar_pc: tyvar  */
#line 242 "src/parser.y"
                 { list_cons((yyval.var_list), (yyvsp[0].var), NULL); }
#line 2131 "_build/parser.c"
    break;

  case 41: /* tyvar_pc: tyvar COMMA tyvar_pc  */
#line 243 "src/parser.y"
                                { list_cons((yyval.var_list), (yyvsp[-2].var), (yyvsp[0].var_list)); }
#line 2137 "_build/parser.c"
    break;

  case 42: /* constrs: constr  */
#line 245 "src/parser.y"
                 { list_cons((yyval.con_list), (yyvsp[0].con), NULL); }
#line 2143 "_build/parser.c"
    break;

  case 43: /* constrs: constr BAR constrs  */
#line 246 "src/parser.y"
                             { list_cons((yyval.con_list), (yyvsp[-2].con), (yyvsp[0].con_list)); }
#line 2149 "_build/parser.c"
    break;

  case 44: /* constr: opcon  */
#line 248 "src/parser.y"
               { tlua_con((yyval.con)); (yyval.con)->con = (yyvsp[0].var); (yyval.con)->type = NULL; }
#line 2155 "_build/parser.c"
    break;

  case 45: /* constr: opcon OF ty  */
#line 249 "src/parser.y"
                     { tlua_con((yyval.con)); (yyval.con)->con = (yyvsp[-2].var); (yyval.con)->type = (yyvsp[0].type); }
#line 2161 "_build/parser.c"
    break;

  case 46: /* opcon: con  */
#line 251 "src/parser.y"
            { (yyval.var) = (yyvsp[0].var); }
#line 2167 "_build/parser.c"
    break;

  case 47: /* opcon: OP con  */
#line 252 "src/parser.y"
               { (yyval.var) = (yyvsp[0].var); }
#line 2173 "_build/parser.c"
    break;

  case 48: /* ebs: eb  */
#line 254 "src/parser.y"
         { list_cons((yyval.eb_list), (yyvsp[0].eb), NULL); }
#line 2179 "_build/parser.c"
    break;

  case 49: /* ebs: eb AND ebs  */
#line 255 "src/parser.y"
                 { list_cons((yyval.eb_list), (yyvsp[-2].eb), (yyvsp[0].eb_list)); }
#line 2185 "_build/parser.c"
    break;

  case 50: /* eb: opcon ebrhs  */
#line 257 "src/parser.y"
                 { (yyval.eb) = (yyvsp[0].eb); (yyval.eb)->con = (yyvsp[-1].var); }
#line 2191 "_build/parser.c"
    break;

  case 51: /* ebrhs: %empty  */
#line 259 "src/parser.y"
               { tlua_eb((yyval.eb), GEN); (yyval.eb)->val.gen = NULL; }
#line 2197 "_build/parser.c"
    break;

  case 52: /* ebrhs: OF ty  */
#line 260 "src/parser.y"
              { tlua_eb((yyval.eb), GEN); (yyval.eb)->val.gen = (yyvsp[0].type); }
#line 2203 "_build/parser.c"
    break;

  case 53: /* ebrhs: EQUALOP longcon  */
#line 261 "src/parser.y"
                        { tlua_eb((yyval.eb), DEF); (yyval.eb)->val.def = (yyvsp[0].var); }
#line 2209 "_build/parser.c"
    break;

  case 54: /* ebrhs: EQUALOP OP longcon  */
#line 262 "src/parser.y"
                           { tlua_eb((yyval.eb), DEF); (yyval.eb)->val.def = (yyvsp[0].var); }
#line 2215 "_build/parser.c"
    break;

  case 55: /* fixity: INFIX  */
#line 264 "src/parser.y"
                      { (yyval.fixity).tag = FIXITY_INFIX;  (yyval.fixity).precedence = -1; }
#line 2221 "_build/parser.c"
    break;

  case 56: /* fixity: INFIX digit  */
#line 265 "src/parser.y"
                      { (yyval.fixity).tag = FIXITY_INFIX;  (yyval.fixity).precedence = (yyvsp[0].digit); }
#line 2227 "_build/parser.c"
    break;

  case 57: /* fixity: INFIXR  */
#line 266 "src/parser.y"
                      { (yyval.fixity).tag = FIXITY_INFIXR; (yyval.fixity).precedence = -1; }
#line 2233 "_build/parser.c"
    break;

  case 58: /* fixity: INFIXR digit  */
#line 267 "src/parser.y"
                      { (yyval.fixity).tag = FIXITY_INFIXR; (yyval.fixity).precedence = (yyvsp[0].digit); }
#line 2239 "_build/parser.c"
    break;

  case 59: /* fixity: NONFIX  */
#line 268 "src/parser.y"
                      { (yyval.fixity).tag = FIXITY_NONFIX; (yyval.fixity).precedence = -1; }
#line 2245 "_build/parser.c"
    break;

  case 60: /* digit: INT  */
#line 270 "src/parser.y"
            {
        (yyval.digit) = (yyvsp[0].integer).val;
        if (!(yyvsp[0].integer).isdigit)
            fprintf(stderr, "Not a digit!\n");
      }
#line 2255 "_build/parser.c"
    break;

  case 61: /* numericField: INT  */
#line 276 "src/parser.y"
                   {
    tlua_field((yyval.field), NUM);
    if (!(yyvsp[0].integer).isfield)
        fprintf(stderr, "Invalid numeric label\n");
    (yyval.field)->val.num = (unsigned)(yyvsp[0].integer).val;
}
#line 2266 "_build/parser.c"
    break;

  case 62: /* datatype_rhs: repl  */
#line 283 "src/parser.y"
                    { (yyval.datatype_rhs) = (yyvsp[0].datatype_rhs); }
#line 2272 "_build/parser.c"
    break;

  case 63: /* datatype_rhs: datbind  */
#line 284 "src/parser.y"
                       { (yyval.datatype_rhs) = (yyvsp[0].datatype_rhs); }
#line 2278 "_build/parser.c"
    break;

  case 64: /* repl: tyvars tycon EQUALOP DATATYPE longtycon  */
#line 286 "src/parser.y"
                                               {
         if ((yyvsp[-4].var_list)) {
            fprintf(stderr, "Nonempty tyvars in datatype repl\n");
         }
         tlua_datatype_rhs((yyval.datatype_rhs), REPL, (yyloc));
         (yyval.datatype_rhs)->val.repl.lhs = (yyvsp[-3].var);
         (yyval.datatype_rhs)->val.repl.rhs = (yyvsp[0].var);
     }
#line 2291 "_build/parser.c"
    break;

  case 65: /* datbind: dbs  */
#line 295 "src/parser.y"
              {
            tlua_datatype_rhs((yyval.datatype_rhs), DATBIND, (yyloc));
            tlua_datbind((yyval.datatype_rhs)->val.datbind);
            (yyval.datatype_rhs)->val.datbind->datatypes = (yyvsp[0].datatype_list);
            (yyval.datatype_rhs)->val.datbind->withtypes = NULL;
        }
#line 2302 "_build/parser.c"
    break;

  case 66: /* datbind: dbs withtypes  */
#line 301 "src/parser.y"
                        {
            tlua_datatype_rhs((yyval.datatype_rhs), DATBIND, (yyloc));
            tlua_datbind((yyval.datatype_rhs)->val.datbind);
            (yyval.datatype_rhs)->val.datbind->datatypes = (yyvsp[-1].datatype_list);
            (yyval.datatype_rhs)->val.datbind->withtypes = (yyvsp[0].typbind_list);
        }
#line 2313 "_build/parser.c"
    break;

  case 67: /* dbs: db  */
#line 308 "src/parser.y"
         { list_cons((yyval.datatype_list), (yyvsp[0].datatype), NULL); }
#line 2319 "_build/parser.c"
    break;

  case 68: /* dbs: db AND dbs  */
#line 309 "src/parser.y"
                 { list_cons((yyval.datatype_list), (yyvsp[-2].datatype), (yyvsp[0].datatype_list)); }
#line 2325 "_build/parser.c"
    break;

  case 69: /* db: tyvars tycon EQUALOP optbar constrs  */
#line 311 "src/parser.y"
                                         {
       tlua_datatype((yyval.datatype));
       (yyval.datatype)->tyvars = (yyvsp[-4].var_list);
       (yyval.datatype)->tycon = (yyvsp[-3].var);
       (yyval.datatype)->cons = (yyvsp[0].con_list);
   }
#line 2336 "_build/parser.c"
    break;

  case 70: /* withtypes: WITHTYPE tbs  */
#line 318 "src/parser.y"
                         { (yyval.typbind_list) = (yyvsp[0].typbind_list); }
#line 2342 "_build/parser.c"
    break;

  case 71: /* match: optbar rules  */
#line 323 "src/parser.y"
                     { tlua_match((yyval.match), (yyloc)); (yyval.match)->rules = (yyvsp[0].rule_list); }
#line 2348 "_build/parser.c"
    break;

  case 72: /* rules: rule  */
#line 325 "src/parser.y"
             { list_cons((yyval.rule_list), (yyvsp[0].rule), NULL); }
#line 2354 "_build/parser.c"
    break;

  case 73: /* rules: rule BAR rules  */
#line 326 "src/parser.y"
                       { list_cons((yyval.rule_list), (yyvsp[-2].rule), (yyvsp[0].rule_list)); }
#line 2360 "_build/parser.c"
    break;

  case 74: /* rule: pat DARROW exp  */
#line 328 "src/parser.y"
                      { tlua_rule((yyval.rule)); (yyval.rule)->pat = (yyvsp[-2].pat); (yyval.rule)->exp = (yyvsp[0].exp); }
#line 2366 "_build/parser.c"
    break;

  case 75: /* elabel: field EQUALOP exp  */
#line 330 "src/parser.y"
                           { tlua_record_item((yyval.record_item), (yyloc)); (yyval.record_item)->field = (yyvsp[-2].field); (yyval.record_item)->val = (yyvsp[0].exp); }
#line 2372 "_build/parser.c"
    break;

  case 76: /* elabel: idField constraint  */
#line 331 "src/parser.y"
                            {
           tlua_exp *e, *fa;
           tlua_var *v;
           tlua_var(v, (yylsp[-1]));
           v->name = (yyvsp[-1].field)->val.ident;
           tlua_exp(e, VAR, (yylsp[-1]));
           e->val.var = v;
           tlua_exp(fa, FLATAPP, (yylsp[-1]));
           list_cons(fa->val.flatapp, e, NULL);
           tlua_record_item((yyval.record_item), (yyloc));
           (yyval.record_item)->field = (yyvsp[-1].field);
           (yyval.record_item)->val = fa;
       }
#line 2390 "_build/parser.c"
    break;

  case 77: /* elabels: elabel COMMA elabels  */
#line 345 "src/parser.y"
                               { list_cons((yyval.record), (yyvsp[-2].record_item), (yyvsp[0].record)); }
#line 2396 "_build/parser.c"
    break;

  case 78: /* elabels: elabel  */
#line 346 "src/parser.y"
                 { list_cons((yyval.record), (yyvsp[0].record_item), NULL); }
#line 2402 "_build/parser.c"
    break;

  case 79: /* exp_ps: exp optsemicolon  */
#line 348 "src/parser.y"
                          { list_cons((yyval.exp_list), (yyvsp[-1].exp), NULL); }
#line 2408 "_build/parser.c"
    break;

  case 80: /* exp_ps: exp SEMICOLON exp_ps  */
#line 349 "src/parser.y"
                              { list_cons((yyval.exp_list), (yyvsp[-2].exp), (yyvsp[0].exp_list)); }
#line 2414 "_build/parser.c"
    break;

  case 81: /* exp: exp HANDLE match  */
#line 351 "src/parser.y"
                       { tlua_exp((yyval.exp), HANDLE, (yyloc)); (yyval.exp)->val.handle.exp = (yyvsp[-2].exp); (yyval.exp)->val.handle.match = (yyvsp[0].match); }
#line 2420 "_build/parser.c"
    break;

  case 82: /* exp: exp ORELSE exp  */
#line 352 "src/parser.y"
                     { tlua_exp((yyval.exp), ORELSE, (yyloc)); (yyval.exp)->val.orelse.left = (yyvsp[-2].exp); (yyval.exp)->val.orelse.right = (yyvsp[0].exp); }
#line 2426 "_build/parser.c"
    break;

  case 83: /* exp: exp ANDALSO exp  */
#line 353 "src/parser.y"
                      { tlua_exp((yyval.exp), ANDALSO, (yyloc)); (yyval.exp)->val.andalso.left = (yyvsp[-2].exp); (yyval.exp)->val.andalso.right = (yyvsp[0].exp); }
#line 2432 "_build/parser.c"
    break;

  case 84: /* exp: exp COLON ty  */
#line 354 "src/parser.y"
                   { tlua_exp((yyval.exp), CONSTRAINT, (yyloc)); (yyval.exp)->val.constraint.exp = (yyvsp[-2].exp); (yyval.exp)->val.constraint.type = (yyvsp[0].type); }
#line 2438 "_build/parser.c"
    break;

  case 85: /* exp: app_exp  */
#line 355 "src/parser.y"
              { tlua_exp((yyval.exp), FLATAPP, (yyloc)); (yyval.exp)->val.flatapp = (yyvsp[0].exp_list); }
#line 2444 "_build/parser.c"
    break;

  case 86: /* exp: FN match  */
#line 356 "src/parser.y"
               { tlua_exp((yyval.exp), FN, (yyloc)); (yyval.exp)->val.fn = (yyvsp[0].match); }
#line 2450 "_build/parser.c"
    break;

  case 87: /* exp: CASE exp OF match  */
#line 357 "src/parser.y"
                        { tlua_exp((yyval.exp), CASE, (yyloc)); (yyval.exp)->val.case_.exp = (yyvsp[-2].exp); (yyval.exp)->val.case_.match = (yyvsp[0].match); }
#line 2456 "_build/parser.c"
    break;

  case 88: /* exp: WHILE exp DO exp  */
#line 358 "src/parser.y"
                       { tlua_exp((yyval.exp), WHILE, (yyloc)); (yyval.exp)->val.while_.cond = (yyvsp[-2].exp); (yyval.exp)->val.while_.body = (yyvsp[0].exp); }
#line 2462 "_build/parser.c"
    break;

  case 89: /* exp: IF exp THEN exp ELSE exp  */
#line 359 "src/parser.y"
                               { tlua_exp((yyval.exp), IF, (yyloc)); (yyval.exp)->val.if_.cond = (yyvsp[-4].exp); (yyval.exp)->val.if_.true_ = (yyvsp[-2].exp); (yyval.exp)->val.if_.false_ = (yyvsp[0].exp); }
#line 2468 "_build/parser.c"
    break;

  case 90: /* exp: RAISE exp  */
#line 360 "src/parser.y"
                { tlua_exp((yyval.exp), RAISE, (yyloc)); (yyval.exp)->val.raise = (yyvsp[0].exp); }
#line 2474 "_build/parser.c"
    break;

  case 91: /* app_exp: aexp  */
#line 362 "src/parser.y"
               { list_cons((yyval.exp_list), (yyvsp[0].exp), NULL); }
#line 2480 "_build/parser.c"
    break;

  case 92: /* app_exp: aexp app_exp  */
#line 363 "src/parser.y"
                       { list_cons((yyval.exp_list), (yyvsp[-1].exp), (yyvsp[0].exp_list)); }
#line 2486 "_build/parser.c"
    break;

  case 93: /* app_exp: longvid  */
#line 364 "src/parser.y"
                  { 
            tlua_exp *e;
            tlua_exp(e, VAR, (yyloc));
            e->val.var = (yyvsp[0].var);
            list_cons((yyval.exp_list), e, NULL);
        }
#line 2497 "_build/parser.c"
    break;

  case 94: /* app_exp: longvid app_exp  */
#line 370 "src/parser.y"
                          {
            tlua_exp *e;
            tlua_exp(e, VAR, (yyloc));
            e->val.var = (yyvsp[-1].var);
            list_cons((yyval.exp_list), e, (yyvsp[0].exp_list));
        }
#line 2508 "_build/parser.c"
    break;

  case 95: /* aexp: OP longvid  */
#line 377 "src/parser.y"
                  { tlua_exp((yyval.exp), VAR, (yyloc)); (yyval.exp)->val.var = (yyvsp[0].var); }
#line 2514 "_build/parser.c"
    break;

  case 96: /* aexp: const  */
#line 378 "src/parser.y"
             { tlua_exp((yyval.exp), CONST, (yyloc)); (yyval.exp)->val.const_ = (yyvsp[0].const_); }
#line 2520 "_build/parser.c"
    break;

  case 97: /* aexp: HASH field  */
#line 379 "src/parser.y"
                  { tlua_exp((yyval.exp), SELECTOR, (yyloc)); (yyval.exp)->val.sel = (yyvsp[0].field); }
#line 2526 "_build/parser.c"
    break;

  case 98: /* aexp: HASHLBRACKET exp_list RBRACKET  */
#line 380 "src/parser.y"
                                      { tlua_exp((yyval.exp), VECTOR, (yyloc)); (yyval.exp)->val.vector = (yyvsp[-1].exp_list); }
#line 2532 "_build/parser.c"
    break;

  case 99: /* aexp: HASHLBRACKET RBRACKET  */
#line 381 "src/parser.y"
                             { tlua_exp((yyval.exp), VECTOR, (yyloc)); (yyval.exp)->val.vector = NULL; }
#line 2538 "_build/parser.c"
    break;

  case 100: /* aexp: LBRACE elabels RBRACE  */
#line 382 "src/parser.y"
                             { tlua_exp((yyval.exp), RECORD, (yyloc)); (yyval.exp)->val.record = (yyvsp[-1].record); }
#line 2544 "_build/parser.c"
    break;

  case 101: /* aexp: LBRACE RBRACE  */
#line 383 "src/parser.y"
                     { tlua_exp((yyval.exp), RECORD, (yyloc)); (yyval.exp)->val.record = NULL; }
#line 2550 "_build/parser.c"
    break;

  case 102: /* aexp: LPAREN RPAREN  */
#line 384 "src/parser.y"
                     { tlua_exp((yyval.exp), RECORD, (yyloc)); (yyval.exp)->val.record = NULL; }
#line 2556 "_build/parser.c"
    break;

  case 103: /* aexp: LPAREN exp_ps RPAREN  */
#line 385 "src/parser.y"
                            {
        if ((yyvsp[-1].exp_list) && !(yyvsp[-1].exp_list)->cdr) {
            (yyval.exp) = (yyvsp[-1].exp_list)->car;
            (yyval.exp)->loc = (yyloc);
        } else {
            tlua_exp((yyval.exp), SEQ, (yyloc));
            (yyval.exp)->val.seq = (yyvsp[-1].exp_list);
        }
     }
#line 2570 "_build/parser.c"
    break;

  case 104: /* aexp: LPAREN exp_2c RPAREN  */
#line 394 "src/parser.y"
                            {
        if (!(yyvsp[-1].exp_list)->cdr) {
            (yyval.exp) = (yyvsp[-1].exp_list)->car;
            (yyval.exp)->loc = (yyloc);
        } else {
            tlua_exp *e;
            list(exp) *it;
            int n = 1;
            list(record_item) *r, *tmp;
            tlua_record_item *item;

            tlua_exp((yyval.exp), RECORD, (yyloc));
            r = (yyval.exp)->val.record = NULL;
            list_foreach(e, it, (yyvsp[-1].exp_list)) {
                tlua_record_item(item, e->loc);
                tlua_field(item->field, NUM); item->field->val.num = n;
                item->val = e;

                list_cons(tmp, item, NULL);
                if (r) r->cdr = tmp; else (yyval.exp)->val.record = tmp;
                r = tmp;
                n++;
            }
        }
     }
#line 2600 "_build/parser.c"
    break;

  case 105: /* aexp: LBRACKET exp_list RBRACKET  */
#line 419 "src/parser.y"
                                  { tlua_exp((yyval.exp), LIST, (yyloc)); (yyval.exp)->val.list = (yyvsp[-1].exp_list); }
#line 2606 "_build/parser.c"
    break;

  case 106: /* aexp: LBRACKET RBRACKET  */
#line 420 "src/parser.y"
                         { tlua_exp((yyval.exp), LIST, (yyloc)); (yyval.exp)->val.list = NULL; }
#line 2612 "_build/parser.c"
    break;

  case 107: /* aexp: LET decs IN exp_ps END  */
#line 421 "src/parser.y"
                              {
        tlua_exp((yyval.exp), LET, (yyloc));
        (yyval.exp)->val.let.decs = (yyvsp[-3].dec_list);
        if (!(yyvsp[-1].exp_list)->cdr)
            (yyval.exp)->val.let.body = (yyvsp[-1].exp_list)->car;
        else {
            tlua_exp((yyval.exp)->val.let.body, SEQ, (yylsp[-1]));
            (yyval.exp)->val.let.body->val.seq = (yyvsp[-1].exp_list);
        }
            
     }
#line 2628 "_build/parser.c"
    break;

  case 108: /* exp_2c: exp COMMA exp_2c  */
#line 433 "src/parser.y"
                          { list_cons((yyval.exp_list), (yyvsp[-2].exp), (yyvsp[0].exp_list)); }
#line 2634 "_build/parser.c"
    break;

  case 109: /* exp_2c: exp COMMA exp  */
#line 434 "src/parser.y"
                       {
           list(exp) *l;
           list_cons(l, (yyvsp[0].exp), NULL);
           list_cons((yyval.exp_list), (yyvsp[-2].exp), l);
       }
#line 2644 "_build/parser.c"
    break;

  case 110: /* exp_list: exp  */
#line 440 "src/parser.y"
               { list_cons((yyval.exp_list), (yyvsp[0].exp), NULL); }
#line 2650 "_build/parser.c"
    break;

  case 111: /* exp_list: exp COMMA exp_list  */
#line 441 "src/parser.y"
                              { list_cons((yyval.exp_list), (yyvsp[-2].exp), (yyvsp[0].exp_list)); }
#line 2656 "_build/parser.c"
    break;

  case 112: /* pat: cpat BAR barcpats  */
#line 445 "src/parser.y"
                        { tlua_pat((yyval.pat), OR, (yyloc)); list_cons((yyval.pat)->val.or_, (yyvsp[-2].pat), (yyvsp[0].pat_list)); }
#line 2662 "_build/parser.c"
    break;

  case 113: /* pat: cpat  */
#line 446 "src/parser.y"
                        { (yyval.pat) = (yyvsp[0].pat); }
#line 2668 "_build/parser.c"
    break;

  case 114: /* cpat: cpat AS cpat  */
#line 448 "src/parser.y"
                    { (yyval.pat) = NULL; }
#line 2674 "_build/parser.c"
    break;

  case 115: /* cpat: cpat COLON ty  */
#line 449 "src/parser.y"
                     { tlua_pat((yyval.pat), CONSTRAINT, (yyloc)); (yyval.pat)->val.constraint.pat = (yyvsp[-2].pat); (yyval.pat)->val.constraint.type = (yyvsp[0].type); }
#line 2680 "_build/parser.c"
    break;

  case 116: /* cpat: apats  */
#line 450 "src/parser.y"
             { tlua_pat((yyval.pat), FLATAPP, (yyloc)); (yyval.pat)->val.flatapp = (yyvsp[0].pat_list); }
#line 2686 "_build/parser.c"
    break;

  case 117: /* apats: apat  */
#line 452 "src/parser.y"
                   { list_cons((yyval.pat_list), (yyvsp[0].pat), NULL); }
#line 2692 "_build/parser.c"
    break;

  case 118: /* apats: apat apats  */
#line 453 "src/parser.y"
                   { list_cons((yyval.pat_list), (yyvsp[-1].pat), (yyvsp[0].pat_list)); }
#line 2698 "_build/parser.c"
    break;

  case 119: /* apat: longvidNoEqual  */
#line 455 "src/parser.y"
                      {
         tlua_pat((yyval.pat), VAR, (yyloc));
         (yyval.pat)->val.var.name = (yyvsp[0].var);
         (yyval.pat)->val.var.fixop = FIXOP_NONE;
     }
#line 2708 "_build/parser.c"
    break;

  case 120: /* apat: OP longvid  */
#line 460 "src/parser.y"
                  {
         tlua_pat((yyval.pat), VAR, (yyloc));
         (yyval.pat)->val.var.name = (yyvsp[0].var);
         (yyval.pat)->val.var.fixop = FIXOP_OP;
     }
#line 2718 "_build/parser.c"
    break;

  case 121: /* apat: const  */
#line 465 "src/parser.y"
             {
         if ((yyvsp[0].const_)->tag == CONST_REAL) {
             fprintf(stderr, "Real constants are not allowed in patterns\n");
         }
         tlua_pat((yyval.pat), CONST, (yyloc)); (yyval.pat)->val.const_ = (yyvsp[0].const_);
     }
#line 2729 "_build/parser.c"
    break;

  case 122: /* apat: WILD  */
#line 471 "src/parser.y"
            { tlua_pat((yyval.pat), WILD, (yyloc)); }
#line 2735 "_build/parser.c"
    break;

  case 123: /* apat: LPAREN pats RPAREN  */
#line 472 "src/parser.y"
                          { 
        if ((yyvsp[-1].pat_list) && (yyvsp[-1].pat_list)->cdr) {
            (yyval.pat) = (yyvsp[-1].pat_list)->car;
            (yyval.pat)->loc = (yyloc);
        } else {
            tlua_pat((yyval.pat), TUPLE, (yyloc));
            (yyval.pat)->val.tuple = (yyvsp[-1].pat_list);
        }
     }
#line 2749 "_build/parser.c"
    break;

  case 124: /* apat: LBRACKET pats RBRACKET  */
#line 481 "src/parser.y"
                              { tlua_pat((yyval.pat), LIST, (yyloc)); (yyval.pat)->val.list = (yyvsp[-1].pat_list); }
#line 2755 "_build/parser.c"
    break;

  case 125: /* apat: HASHLBRACKET pats RBRACKET  */
#line 482 "src/parser.y"
                                  { tlua_pat((yyval.pat), VECTOR, (yyloc)); (yyval.pat)->val.vector = (yyvsp[-1].pat_list); }
#line 2761 "_build/parser.c"
    break;

  case 126: /* apat: LBRACE RBRACE  */
#line 483 "src/parser.y"
                     { tlua_pat((yyval.pat), TUPLE, (yyloc)); (yyval.pat)->val.tuple = NULL; }
#line 2767 "_build/parser.c"
    break;

  case 127: /* apat: LBRACE patitems RBRACE  */
#line 484 "src/parser.y"
                              { tlua_pat((yyval.pat), RECORD, (yyloc)); (yyval.pat)->val.record = (yyvsp[-1].pat_record); }
#line 2773 "_build/parser.c"
    break;

  case 128: /* pats: %empty  */
#line 486 "src/parser.y"
              { (yyval.pat_list) = NULL; }
#line 2779 "_build/parser.c"
    break;

  case 129: /* pats: pat commapats  */
#line 487 "src/parser.y"
                     { list_cons((yyval.pat_list), (yyvsp[-1].pat), (yyvsp[0].pat_list)); }
#line 2785 "_build/parser.c"
    break;

  case 130: /* barcpats: cpat  */
#line 489 "src/parser.y"
                { list_cons((yyval.pat_list), (yyvsp[0].pat), NULL); }
#line 2791 "_build/parser.c"
    break;

  case 131: /* barcpats: cpat BAR barcpats  */
#line 490 "src/parser.y"
                             { list_cons((yyval.pat_list), (yyvsp[-2].pat), (yyvsp[0].pat_list)); }
#line 2797 "_build/parser.c"
    break;

  case 132: /* commapats: %empty  */
#line 492 "src/parser.y"
                   { (yyval.pat_list) = NULL; }
#line 2803 "_build/parser.c"
    break;

  case 133: /* commapats: COMMA pat commapats  */
#line 493 "src/parser.y"
                                { list_cons((yyval.pat_list), (yyvsp[-1].pat), (yyvsp[0].pat_list)); }
#line 2809 "_build/parser.c"
    break;

  case 134: /* patitems: patitem COMMA patitems  */
#line 495 "src/parser.y"
                                  {
            list(record_item) *p; list_cons(p, (yyvsp[-2].record_item), (yyvsp[0].pat_record).items); (yyvsp[0].pat_record).items = p;
            (yyval.pat_record) = (yyvsp[0].pat_record);
         }
#line 2818 "_build/parser.c"
    break;

  case 135: /* patitems: patitem  */
#line 499 "src/parser.y"
                   {
            (yyval.pat_record).flexible = 0;
            list_cons((yyval.pat_record).items, (yyvsp[0].record_item), NULL);
         }
#line 2827 "_build/parser.c"
    break;

  case 136: /* patitems: DOTDOTDOT  */
#line 503 "src/parser.y"
                     { 
            (yyval.pat_record).flexible = 1;
            (yyval.pat_record).items = NULL;
         }
#line 2836 "_build/parser.c"
    break;

  case 137: /* patitem: field EQUALOP pat  */
#line 508 "src/parser.y"
                            { tlua_record_item((yyval.record_item), (yyloc)); (yyval.record_item)->field = (yyvsp[-2].field); (yyval.record_item)->val = (yyvsp[0].pat); }
#line 2842 "_build/parser.c"
    break;

  case 159: /* const: REAL  */
#line 557 "src/parser.y"
               { tlua_const((yyval.const_), REAL, (yyloc)); (yyval.const_)->val.real = (yyvsp[0].real); }
#line 2848 "_build/parser.c"
    break;

  case 160: /* const: WORD  */
#line 558 "src/parser.y"
               { tlua_const((yyval.const_), WORD, (yyloc)); (yyval.const_)->val.word = (yyvsp[0].word); }
#line 2854 "_build/parser.c"
    break;

  case 161: /* const: INT  */
#line 559 "src/parser.y"
               { tlua_const((yyval.const_), INT, (yyloc)); (yyval.const_)->val.int_ = (yyvsp[0].integer).val; }
#line 2860 "_build/parser.c"
    break;

  case 162: /* const: STRING  */
#line 560 "src/parser.y"
               { tlua_const((yyval.const_), STRING, (yyloc)); (yyval.const_)->val.string.buf = (yyvsp[0].string).buf; (yyval.const_)->val.string.len = (yyvsp[0].string).len; }
#line 2866 "_build/parser.c"
    break;

  case 163: /* const: CHAR  */
#line 561 "src/parser.y"
               { tlua_const((yyval.const_), CHAR, (yyloc)); (yyval.const_)->val.char_ = (yyvsp[0].chr); }
#line 2872 "_build/parser.c"
    break;

  case 164: /* shortAlphanumId: SHORTALPHANUMID  */
#line 563 "src/parser.y"
                                  { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 2878 "_build/parser.c"
    break;

  case 165: /* shortSymId: SHORTSYMID  */
#line 564 "src/parser.y"
                                  { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 2884 "_build/parser.c"
    break;

  case 166: /* longAlphanumId: LONGALPHANUMID  */
#line 565 "src/parser.y"
                                  { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 2890 "_build/parser.c"
    break;

  case 167: /* longSymId: LONGSYMID  */
#line 566 "src/parser.y"
                                  { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 2896 "_build/parser.c"
    break;

  case 170: /* vidNoEqual: ASTERISK  */
#line 570 "src/parser.y"
                      { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = "*"; }
#line 2902 "_build/parser.c"
    break;

  case 172: /* vid: EQUALOP  */
#line 573 "src/parser.y"
              { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = "="; }
#line 2908 "_build/parser.c"
    break;

  case 177: /* longvid: EQUALOP  */
#line 580 "src/parser.y"
                  { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = "="; }
#line 2914 "_build/parser.c"
    break;

  case 180: /* tyvar: TYVARID  */
#line 586 "src/parser.y"
                { tlua_var((yyval.var), (yyloc)); (yyval.var)->name = (yyvsp[0].ident); }
#line 2920 "_build/parser.c"
    break;

  case 185: /* idField: shortAlphanumId  */
#line 594 "src/parser.y"
                          { tlua_field((yyval.field), ID); (yyval.field)->val.ident = (yyvsp[0].var)->name; }
#line 2926 "_build/parser.c"
    break;

  case 186: /* idField: shortSymId  */
#line 595 "src/parser.y"
                     { tlua_field((yyval.field), ID); (yyval.field)->val.ident = (yyvsp[0].var)->name; }
#line 2932 "_build/parser.c"
    break;

  case 187: /* idField: ASTERISK  */
#line 596 "src/parser.y"
                   { tlua_field((yyval.field), ID); (yyval.field)->val.ident = "*"; }
#line 2938 "_build/parser.c"
    break;

  case 192: /* vids: vid  */
#line 610 "src/parser.y"
           { list_cons((yyval.var_list), (yyvsp[0].var), NULL); }
#line 2944 "_build/parser.c"
    break;

  case 193: /* vids: vid vids  */
#line 611 "src/parser.y"
                { list_cons((yyval.var_list), (yyvsp[-1].var), (yyvsp[0].var_list)); }
#line 2950 "_build/parser.c"
    break;

  case 194: /* longstrids: longstrid  */
#line 616 "src/parser.y"
                       { list_cons((yyval.var_list), (yyvsp[0].var), NULL); }
#line 2956 "_build/parser.c"
    break;

  case 195: /* longstrids: longstrid longstrids  */
#line 617 "src/parser.y"
                                  { list_cons((yyval.var_list), (yyvsp[-1].var), (yyvsp[0].var_list)); }
#line 2962 "_build/parser.c"
    break;


#line 2966 "_build/parser.c"

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
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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

#line 619 "src/parser.y"


void tlua_yyerror(struct region *lloc, void *scanner, tlua_lexstate *lexstate, const char *msg)
{
    UNUSED(lloc);
    UNUSED(scanner);
    UNUSED(lexstate);
    fprintf(stderr, "Error: %s\n", msg);
}
