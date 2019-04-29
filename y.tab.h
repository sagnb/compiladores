/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OR = 258,
    AND = 259,
    NOT = 260,
    IDF = 261,
    NEGACAO = 262,
    ASPAS = 263,
    ATRIBUICAO = 264,
    SOMA = 265,
    SUBTRACAO = 266,
    MULTIPLICACAO = 267,
    DIVISAO = 268,
    RESTO = 269,
    ABRE_PARENTESES = 270,
    FECHA_PARENTESES = 271,
    ABRE_CHAVE = 272,
    FECHA_CHAVE = 273,
    ABRE_COLCHETE = 274,
    FECHA_COLCHETE = 275,
    PONTO_E_VIRGULA = 276,
    DOIS_PONTOS = 277,
    VIRGULA = 278,
    HASHMARK = 279,
    PONTO = 280,
    PIPE = 281,
    BARRA = 282,
    MAIOR = 283,
    MENOR = 284,
    MAIOR_IGUAL = 285,
    MENOR_IGUAL = 286,
    IGUAL = 287,
    DIFERENTE = 288,
    ESPACO = 289,
    BARRAT = 290,
    DIGITO = 291,
    NUMERAL = 292,
    LETRA = 293,
    FRAC_OPT = 294,
    NUM = 295,
    RES_BREAK = 296,
    RES_CASE = 297,
    RES_CHAR = 298,
    RES_DEFAULT = 299,
    RES_DO = 300,
    RES_DOUBLE = 301,
    RES_ELSE = 302,
    RES_FLOAT = 303,
    RES_FOR = 304,
    RES_GOTO = 305,
    RES_IF = 306,
    RES_INT = 307,
    RES_LONG = 308,
    RES_RETURN = 309,
    RES_SIZEOF = 310,
    RES_STATIC = 311,
    RES_STRUCT = 312,
    RES_TYPEDEF = 313,
    RES_VOID = 314,
    RES_WHILE = 315,
    NOME = 316,
    STRING = 317,
    ALGUMA_COISA = 318,
    RES_BOOL = 319
  };
#endif
/* Tokens.  */
#define OR 258
#define AND 259
#define NOT 260
#define IDF 261
#define NEGACAO 262
#define ASPAS 263
#define ATRIBUICAO 264
#define SOMA 265
#define SUBTRACAO 266
#define MULTIPLICACAO 267
#define DIVISAO 268
#define RESTO 269
#define ABRE_PARENTESES 270
#define FECHA_PARENTESES 271
#define ABRE_CHAVE 272
#define FECHA_CHAVE 273
#define ABRE_COLCHETE 274
#define FECHA_COLCHETE 275
#define PONTO_E_VIRGULA 276
#define DOIS_PONTOS 277
#define VIRGULA 278
#define HASHMARK 279
#define PONTO 280
#define PIPE 281
#define BARRA 282
#define MAIOR 283
#define MENOR 284
#define MAIOR_IGUAL 285
#define MENOR_IGUAL 286
#define IGUAL 287
#define DIFERENTE 288
#define ESPACO 289
#define BARRAT 290
#define DIGITO 291
#define NUMERAL 292
#define LETRA 293
#define FRAC_OPT 294
#define NUM 295
#define RES_BREAK 296
#define RES_CASE 297
#define RES_CHAR 298
#define RES_DEFAULT 299
#define RES_DO 300
#define RES_DOUBLE 301
#define RES_ELSE 302
#define RES_FLOAT 303
#define RES_FOR 304
#define RES_GOTO 305
#define RES_IF 306
#define RES_INT 307
#define RES_LONG 308
#define RES_RETURN 309
#define RES_SIZEOF 310
#define RES_STATIC 311
#define RES_STRUCT 312
#define RES_TYPEDEF 313
#define RES_VOID 314
#define RES_WHILE 315
#define NOME 316
#define STRING 317
#define ALGUMA_COISA 318
#define RES_BOOL 319

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "_Syntactic/syntactic.y" /* yacc.c:1921  */

	char* cadeia;
	struct _node * no;

#line 191 "y.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
