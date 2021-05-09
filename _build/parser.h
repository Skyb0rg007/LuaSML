/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
#line 2 "src/parser.y"

#include <tlua/config.h>
#include <tlua/alloc.h>
#include <tlua/region.h>
#include <tlua/ast.h>
#include <tlua/lexer.h>

#line 65 "_build/parser.h"

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
#line 40 "src/parser.y"

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

#line 200 "_build/parser.h"

};
typedef union TLUA_YYSTYPE TLUA_YYSTYPE;
# define TLUA_YYSTYPE_IS_TRIVIAL 1
# define TLUA_YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
typedef struct region TLUA_YYLTYPE;



int tlua_yyparse (void *scanner, tlua_lexstate *lexstate);

#endif /* !YY_TLUA_YY_BUILD_PARSER_H_INCLUDED  */
