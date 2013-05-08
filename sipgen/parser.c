/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_API = 258,
     TK_AUTOPYNAME = 259,
     TK_DEFDOCSTRING = 260,
     TK_DEFENCODING = 261,
     TK_PLUGIN = 262,
     TK_VIRTERRORHANDLER = 263,
     TK_DOCSTRING = 264,
     TK_DOC = 265,
     TK_EXPORTEDDOC = 266,
     TK_EXTRACT = 267,
     TK_MAKEFILE = 268,
     TK_ACCESSCODE = 269,
     TK_GETCODE = 270,
     TK_SETCODE = 271,
     TK_PREINITCODE = 272,
     TK_INITCODE = 273,
     TK_POSTINITCODE = 274,
     TK_UNITCODE = 275,
     TK_UNITPOSTINCLUDECODE = 276,
     TK_MODCODE = 277,
     TK_TYPECODE = 278,
     TK_PREPYCODE = 279,
     TK_COPYING = 280,
     TK_MAPPEDTYPE = 281,
     TK_CODELINE = 282,
     TK_IF = 283,
     TK_END = 284,
     TK_NAME_VALUE = 285,
     TK_PATH_VALUE = 286,
     TK_STRING_VALUE = 287,
     TK_VIRTUALCATCHERCODE = 288,
     TK_TRAVERSECODE = 289,
     TK_CLEARCODE = 290,
     TK_GETBUFFERCODE = 291,
     TK_RELEASEBUFFERCODE = 292,
     TK_READBUFFERCODE = 293,
     TK_WRITEBUFFERCODE = 294,
     TK_SEGCOUNTCODE = 295,
     TK_CHARBUFFERCODE = 296,
     TK_PICKLECODE = 297,
     TK_METHODCODE = 298,
     TK_INSTANCECODE = 299,
     TK_FROMTYPE = 300,
     TK_TOTYPE = 301,
     TK_TOSUBCLASS = 302,
     TK_INCLUDE = 303,
     TK_OPTINCLUDE = 304,
     TK_IMPORT = 305,
     TK_EXPHEADERCODE = 306,
     TK_MODHEADERCODE = 307,
     TK_TYPEHEADERCODE = 308,
     TK_MODULE = 309,
     TK_CMODULE = 310,
     TK_CONSMODULE = 311,
     TK_COMPOMODULE = 312,
     TK_CLASS = 313,
     TK_STRUCT = 314,
     TK_PUBLIC = 315,
     TK_PROTECTED = 316,
     TK_PRIVATE = 317,
     TK_SIGNALS = 318,
     TK_SIGNAL_METHOD = 319,
     TK_SLOTS = 320,
     TK_SLOT_METHOD = 321,
     TK_BOOL = 322,
     TK_SHORT = 323,
     TK_INT = 324,
     TK_LONG = 325,
     TK_FLOAT = 326,
     TK_DOUBLE = 327,
     TK_CHAR = 328,
     TK_WCHAR_T = 329,
     TK_VOID = 330,
     TK_PYOBJECT = 331,
     TK_PYTUPLE = 332,
     TK_PYLIST = 333,
     TK_PYDICT = 334,
     TK_PYCALLABLE = 335,
     TK_PYSLICE = 336,
     TK_PYTYPE = 337,
     TK_PYBUFFER = 338,
     TK_VIRTUAL = 339,
     TK_ENUM = 340,
     TK_SIGNED = 341,
     TK_UNSIGNED = 342,
     TK_SCOPE = 343,
     TK_LOGICAL_OR = 344,
     TK_CONST = 345,
     TK_STATIC = 346,
     TK_SIPSIGNAL = 347,
     TK_SIPSLOT = 348,
     TK_SIPANYSLOT = 349,
     TK_SIPRXCON = 350,
     TK_SIPRXDIS = 351,
     TK_SIPSLOTCON = 352,
     TK_SIPSLOTDIS = 353,
     TK_SIPSSIZET = 354,
     TK_NUMBER_VALUE = 355,
     TK_REAL_VALUE = 356,
     TK_TYPEDEF = 357,
     TK_NAMESPACE = 358,
     TK_TIMELINE = 359,
     TK_PLATFORMS = 360,
     TK_FEATURE = 361,
     TK_LICENSE = 362,
     TK_QCHAR_VALUE = 363,
     TK_TRUE_VALUE = 364,
     TK_FALSE_VALUE = 365,
     TK_NULL_VALUE = 366,
     TK_OPERATOR = 367,
     TK_THROW = 368,
     TK_QOBJECT = 369,
     TK_EXCEPTION = 370,
     TK_RAISECODE = 371,
     TK_VIRTERRORCODE = 372,
     TK_EXPLICIT = 373,
     TK_TEMPLATE = 374,
     TK_ELLIPSIS = 375,
     TK_DEFMETATYPE = 376,
     TK_DEFSUPERTYPE = 377,
     TK_PROPERTY = 378,
     TK_FORMAT = 379,
     TK_GET = 380,
     TK_ID = 381,
     TK_KWARGS = 382,
     TK_LANGUAGE = 383,
     TK_LICENSEE = 384,
     TK_NAME = 385,
     TK_OPTIONAL = 386,
     TK_ORDER = 387,
     TK_REMOVELEADING = 388,
     TK_SET = 389,
     TK_SIGNATURE = 390,
     TK_TIMESTAMP = 391,
     TK_TYPE = 392,
     TK_USEARGNAMES = 393,
     TK_ALLRAISEPYEXC = 394,
     TK_DEFERRORHANDLER = 395,
     TK_VERSION = 396
   };
#endif
/* Tokens.  */
#define TK_API 258
#define TK_AUTOPYNAME 259
#define TK_DEFDOCSTRING 260
#define TK_DEFENCODING 261
#define TK_PLUGIN 262
#define TK_VIRTERRORHANDLER 263
#define TK_DOCSTRING 264
#define TK_DOC 265
#define TK_EXPORTEDDOC 266
#define TK_EXTRACT 267
#define TK_MAKEFILE 268
#define TK_ACCESSCODE 269
#define TK_GETCODE 270
#define TK_SETCODE 271
#define TK_PREINITCODE 272
#define TK_INITCODE 273
#define TK_POSTINITCODE 274
#define TK_UNITCODE 275
#define TK_UNITPOSTINCLUDECODE 276
#define TK_MODCODE 277
#define TK_TYPECODE 278
#define TK_PREPYCODE 279
#define TK_COPYING 280
#define TK_MAPPEDTYPE 281
#define TK_CODELINE 282
#define TK_IF 283
#define TK_END 284
#define TK_NAME_VALUE 285
#define TK_PATH_VALUE 286
#define TK_STRING_VALUE 287
#define TK_VIRTUALCATCHERCODE 288
#define TK_TRAVERSECODE 289
#define TK_CLEARCODE 290
#define TK_GETBUFFERCODE 291
#define TK_RELEASEBUFFERCODE 292
#define TK_READBUFFERCODE 293
#define TK_WRITEBUFFERCODE 294
#define TK_SEGCOUNTCODE 295
#define TK_CHARBUFFERCODE 296
#define TK_PICKLECODE 297
#define TK_METHODCODE 298
#define TK_INSTANCECODE 299
#define TK_FROMTYPE 300
#define TK_TOTYPE 301
#define TK_TOSUBCLASS 302
#define TK_INCLUDE 303
#define TK_OPTINCLUDE 304
#define TK_IMPORT 305
#define TK_EXPHEADERCODE 306
#define TK_MODHEADERCODE 307
#define TK_TYPEHEADERCODE 308
#define TK_MODULE 309
#define TK_CMODULE 310
#define TK_CONSMODULE 311
#define TK_COMPOMODULE 312
#define TK_CLASS 313
#define TK_STRUCT 314
#define TK_PUBLIC 315
#define TK_PROTECTED 316
#define TK_PRIVATE 317
#define TK_SIGNALS 318
#define TK_SIGNAL_METHOD 319
#define TK_SLOTS 320
#define TK_SLOT_METHOD 321
#define TK_BOOL 322
#define TK_SHORT 323
#define TK_INT 324
#define TK_LONG 325
#define TK_FLOAT 326
#define TK_DOUBLE 327
#define TK_CHAR 328
#define TK_WCHAR_T 329
#define TK_VOID 330
#define TK_PYOBJECT 331
#define TK_PYTUPLE 332
#define TK_PYLIST 333
#define TK_PYDICT 334
#define TK_PYCALLABLE 335
#define TK_PYSLICE 336
#define TK_PYTYPE 337
#define TK_PYBUFFER 338
#define TK_VIRTUAL 339
#define TK_ENUM 340
#define TK_SIGNED 341
#define TK_UNSIGNED 342
#define TK_SCOPE 343
#define TK_LOGICAL_OR 344
#define TK_CONST 345
#define TK_STATIC 346
#define TK_SIPSIGNAL 347
#define TK_SIPSLOT 348
#define TK_SIPANYSLOT 349
#define TK_SIPRXCON 350
#define TK_SIPRXDIS 351
#define TK_SIPSLOTCON 352
#define TK_SIPSLOTDIS 353
#define TK_SIPSSIZET 354
#define TK_NUMBER_VALUE 355
#define TK_REAL_VALUE 356
#define TK_TYPEDEF 357
#define TK_NAMESPACE 358
#define TK_TIMELINE 359
#define TK_PLATFORMS 360
#define TK_FEATURE 361
#define TK_LICENSE 362
#define TK_QCHAR_VALUE 363
#define TK_TRUE_VALUE 364
#define TK_FALSE_VALUE 365
#define TK_NULL_VALUE 366
#define TK_OPERATOR 367
#define TK_THROW 368
#define TK_QOBJECT 369
#define TK_EXCEPTION 370
#define TK_RAISECODE 371
#define TK_VIRTERRORCODE 372
#define TK_EXPLICIT 373
#define TK_TEMPLATE 374
#define TK_ELLIPSIS 375
#define TK_DEFMETATYPE 376
#define TK_DEFSUPERTYPE 377
#define TK_PROPERTY 378
#define TK_FORMAT 379
#define TK_GET 380
#define TK_ID 381
#define TK_KWARGS 382
#define TK_LANGUAGE 383
#define TK_LICENSEE 384
#define TK_NAME 385
#define TK_OPTIONAL 386
#define TK_ORDER 387
#define TK_REMOVELEADING 388
#define TK_SET 389
#define TK_SIGNATURE 390
#define TK_TIMESTAMP 391
#define TK_TYPE 392
#define TK_USEARGNAMES 393
#define TK_ALLRAISEPYEXC 394
#define TK_DEFERRORHANDLER 395
#define TK_VERSION 396




/* Copy the first part of user declarations.  */
#line 19 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "sip.h"


#define MAX_NESTED_IF       10
#define MAX_NESTED_SCOPE    10

#define inMainModule()      (currentSpec->module == currentModule || currentModule->container != NULL)


static sipSpec *currentSpec;            /* The current spec being parsed. */
static stringList *neededQualifiers;    /* The list of required qualifiers. */
static stringList *excludedQualifiers;  /* The list of excluded qualifiers. */
static moduleDef *currentModule;        /* The current module being parsed. */
static mappedTypeDef *currentMappedType;    /* The current mapped type. */
static enumDef *currentEnum;            /* The current enum being parsed. */
static int sectionFlags;                /* The current section flags. */
static int currentOverIsVirt;           /* Set if the overload is virtual. */
static int currentCtorIsExplicit;       /* Set if the ctor is explicit. */
static int currentIsStatic;             /* Set if the current is static. */
static int currentIsSignal;             /* Set if the current is Q_SIGNAL. */
static int currentIsSlot;               /* Set if the current is Q_SLOT. */
static int currentIsTemplate;           /* Set if the current is a template. */
static char *previousFile;              /* The file just parsed. */
static parserContext currentContext;    /* The current context. */
static int skipStackPtr;                /* The skip stack pointer. */
static int skipStack[MAX_NESTED_IF];    /* Stack of skip flags. */
static classDef *scopeStack[MAX_NESTED_SCOPE];  /* The scope stack. */
static int sectFlagsStack[MAX_NESTED_SCOPE];    /* The section flags stack. */
static int currentScopeIdx;             /* The scope stack index. */
static int currentTimelineOrder;        /* The current timeline order. */
static classList *currentSupers;        /* The current super-class list. */
static KwArgs defaultKwArgs;            /* The default keyword arguments support. */
static int makeProtPublic;              /* Treat protected items as public. */
static int parsingCSignature;           /* An explicit C/C++ signature is being parsed. */


static const char *getPythonName(moduleDef *mod, optFlags *optflgs,
        const char *cname);
static classDef *findClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *fqname);
static classDef *findClassWithInterface(sipSpec *pt, ifaceFileDef *iff);
static classDef *newClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *snd,
        const char *virt_error_handler);
static void finishClass(sipSpec *, moduleDef *, classDef *, optFlags *);
static exceptionDef *findException(sipSpec *pt, scopedNameDef *fqname, int new);
static mappedTypeDef *newMappedType(sipSpec *,argDef *, optFlags *);
static enumDef *newEnum(sipSpec *pt, moduleDef *mod, mappedTypeDef *mt_scope,
        char *name, optFlags *of, int flags);
static void instantiateClassTemplate(sipSpec *pt, moduleDef *mod,
        classDef *scope, scopedNameDef *fqname, classTmplDef *tcd,
        templateDef *td, const char *pyname);
static void newTypedef(sipSpec *, moduleDef *, char *, argDef *, optFlags *);
static void newVar(sipSpec *pt, moduleDef *mod, char *name, int isstatic,
        argDef *type, optFlags *of, codeBlock *acode, codeBlock *gcode,
        codeBlock *scode, int section);
static void newCtor(moduleDef *, char *, int, signatureDef *, optFlags *,
        codeBlock *, throwArgs *, signatureDef *, int, codeBlock *);
static void newFunction(sipSpec *, moduleDef *, classDef *, mappedTypeDef *,
        int, int, int, int, int, char *, signatureDef *, int, int, optFlags *,
        codeBlock *, codeBlock *, throwArgs *, signatureDef *, codeBlock *);
static optFlag *findOptFlag(optFlags *flgs, const char *name);
static optFlag *getOptFlag(optFlags *flgs, const char *name, flagType ft);
static memberDef *findFunction(sipSpec *, moduleDef *, classDef *,
        mappedTypeDef *, const char *, int, int, int);
static void checkAttributes(sipSpec *, moduleDef *, classDef *,
        mappedTypeDef *, const char *, int);
static void newModule(FILE *fp, const char *filename);
static moduleDef *allocModule();
static void parseFile(FILE *fp, const char *name, moduleDef *prevmod,
        int optional);
static void handleEOF(void);
static void handleEOM(void);
static qualDef *findQualifier(const char *name);
static const char *getInt(const char *cp, int *ip);
static scopedNameDef *text2scopedName(ifaceFileDef *scope, char *text);
static scopedNameDef *scopeScopedName(ifaceFileDef *scope,
        scopedNameDef *name);
static void pushScope(classDef *);
static void popScope(void);
static classDef *currentScope(void);
static void newQualifier(moduleDef *, int, int, const char *, qualType);
static qualDef *allocQualifier(moduleDef *, int, int, const char *, qualType);
static void newImport(const char *filename);
static int timePeriod(const char *lname, const char *uname);
static int platOrFeature(char *,int);
static int notSkipping(void);
static void getHooks(optFlags *,char **,char **);
static int getTransfer(optFlags *optflgs);
static int getReleaseGIL(optFlags *optflgs);
static int getHoldGIL(optFlags *optflgs);
static int getDeprecated(optFlags *optflgs);
static int getAllowNone(optFlags *optflgs);
static const char *getVirtErrorHandler(optFlags *optflgs);
static const char *getDocType(optFlags *optflgs);
static const char *getDocValue(optFlags *optflgs);
static void templateSignature(signatureDef *sd, int result, classTmplDef *tcd, templateDef *td, classDef *ncd);
static void templateType(argDef *ad, classTmplDef *tcd, templateDef *td, classDef *ncd);
static int search_back(const char *end, const char *start, const char *target);
static char *type2string(argDef *ad);
static char *scopedNameToString(scopedNameDef *name);
static void addUsedFromCode(sipSpec *pt, ifaceFileList **used, const char *sname);
static int sameName(scopedNameDef *snd, const char *sname);
static int stringFind(stringList *sl, const char *s);
static void setModuleName(sipSpec *pt, moduleDef *mod, const char *fullname);
static int foundInScope(scopedNameDef *fq_name, scopedNameDef *rel_name);
static void defineClass(scopedNameDef *snd, classList *supers, optFlags *of);
static classDef *completeClass(scopedNameDef *snd, optFlags *of, int has_def);
static memberDef *instantiateTemplateMethods(memberDef *tmd, moduleDef *mod);
static void instantiateTemplateEnums(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void instantiateTemplateVars(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void instantiateTemplateTypedefs(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd);
static overDef *instantiateTemplateOverloads(sipSpec *pt, overDef *tod,
        memberDef *tmethods, memberDef *methods, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values);
static void resolveAnyTypedef(sipSpec *pt, argDef *ad);
static void addTypedef(sipSpec *pt, typedefDef *tdd);
static void addVariable(sipSpec *pt, varDef *vd);
static void applyTypeFlags(moduleDef *mod, argDef *ad, optFlags *flags);
static Format convertFormat(const char *format);
static argType convertEncoding(const char *encoding);
static apiVersionRangeDef *getAPIRange(optFlags *optflgs);
static apiVersionRangeDef *convertAPIRange(moduleDef *mod, nameDef *name,
        int from, int to);
static char *convertFeaturedString(char *fs);
static scopedNameDef *text2scopePart(char *text);
static KwArgs keywordArgs(moduleDef *mod, optFlags *optflgs, signatureDef *sd,
        int need_name);
static char *strip(char *s);
static int isEnabledFeature(const char *name);
static void addProperty(sipSpec *pt, moduleDef *mod, classDef *cd,
        const char *name, const char *get, const char *set,
        codeBlock *docstring);
static moduleDef *configureModule(sipSpec *pt, moduleDef *module,
        const char *filename, const char *name, int version, int c_module,
        KwArgs kwargs, int use_arg_names, int all_raise_py_exc,
        const char *def_error_handler, codeBlock *docstring);
static void addAutoPyName(moduleDef *mod, const char *remove_leading);
static KwArgs convertKwArgs(const char *kwargs);
static void checkAnnos(optFlags *annos, const char *valid[]);
static void checkNoAnnos(optFlags *annos, const char *msg);
static void appendCodeBlock(codeBlockList **headp, codeBlock *cb);
static void handleKeepReference(optFlags *optflgs, argDef *ad, moduleDef *mod);
static void mappedTypeAnnos(mappedTypeDef *mtd, optFlags *optflgs);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 176 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
{
    char            qchar;
    char            *text;
    long            number;
    double          real;
    argDef          memArg;
    signatureDef    signature;
    signatureDef    *optsignature;
    throwArgs       *throwlist;
    codeBlock       *codeb;
    valueDef        value;
    valueDef        *valp;
    optFlags        optflags;
    optFlag         flag;
    scopedNameDef   *scpvalp;
    fcallDef        fcall;
    int             boolean;
    exceptionDef    exceptionbase;
    classDef        *klass;
    apiCfg          api;
    autoPyNameCfg   autopyname;
    compModuleCfg   compmodule;
    consModuleCfg   consmodule;
    defDocstringCfg defdocstring;
    defEncodingCfg  defencoding;
    defMetatypeCfg  defmetatype;
    defSupertypeCfg defsupertype;
    exceptionCfg    exception;
    docstringCfg    docstring;
    extractCfg      extract;
    featureCfg      feature;
    licenseCfg      license;
    importCfg       import;
    includeCfg      include;
    moduleCfg       module;
    pluginCfg       plugin;
    propertyCfg     property;
    variableCfg     variable;
    vehCfg          veh;
    int             token;
}
/* Line 193 of yacc.c.  */
#line 577 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 590 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1568

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  164
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  235
/* YYNRULES -- Number of rules.  */
#define YYNRULES  551
/* YYNRULES -- Number of states.  */
#define YYNSTATES  961

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   396

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   149,     2,     2,     2,   162,   154,     2,
     142,   143,   152,   151,   144,   150,     2,   153,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   159,   148,
     157,   145,   158,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   160,     2,   161,   163,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   146,   155,   147,   156,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     100,   102,   104,   107,   109,   113,   115,   119,   123,   126,
     128,   132,   134,   138,   142,   145,   147,   151,   153,   157,
     161,   165,   167,   171,   173,   177,   181,   184,   187,   191,
     193,   197,   201,   205,   211,   212,   216,   221,   223,   226,
     228,   230,   232,   234,   237,   238,   244,   245,   252,   257,
     259,   262,   264,   266,   268,   270,   273,   276,   278,   280,
     282,   296,   297,   303,   304,   308,   310,   313,   314,   320,
     322,   325,   327,   330,   332,   336,   338,   342,   346,   347,
     353,   355,   358,   360,   365,   367,   370,   374,   379,   381,
     385,   387,   391,   392,   394,   398,   400,   404,   408,   412,
     416,   420,   423,   425,   429,   431,   435,   439,   442,   444,
     448,   450,   454,   458,   462,   464,   468,   470,   474,   478,
     479,   484,   486,   489,   491,   493,   495,   499,   501,   505,
     507,   511,   515,   516,   521,   523,   526,   528,   530,   532,
     536,   540,   541,   545,   549,   551,   555,   559,   563,   567,
     571,   575,   579,   583,   584,   589,   591,   594,   596,   598,
     600,   602,   604,   606,   607,   609,   612,   614,   618,   620,
     624,   628,   632,   635,   638,   640,   644,   646,   650,   654,
     655,   658,   659,   662,   663,   666,   669,   672,   675,   678,
     681,   684,   687,   690,   693,   696,   699,   702,   705,   708,
     711,   714,   717,   720,   723,   726,   729,   732,   735,   738,
     741,   745,   747,   751,   755,   759,   760,   762,   766,   768,
     772,   776,   777,   779,   783,   785,   789,   791,   795,   799,
     803,   808,   811,   813,   816,   817,   826,   827,   829,   830,
     832,   833,   835,   837,   840,   842,   844,   849,   850,   852,
     853,   856,   857,   860,   862,   866,   868,   870,   872,   874,
     876,   878,   879,   881,   883,   885,   887,   889,   891,   894,
     896,   900,   902,   904,   906,   908,   913,   915,   917,   919,
     921,   923,   925,   926,   928,   932,   938,   950,   951,   952,
     961,   962,   966,   971,   972,   973,   982,   983,   986,   988,
     992,   995,   996,   998,  1000,  1002,  1003,  1007,  1009,  1012,
    1014,  1016,  1018,  1020,  1022,  1024,  1026,  1028,  1030,  1032,
    1034,  1036,  1038,  1040,  1042,  1044,  1046,  1048,  1050,  1052,
    1054,  1056,  1058,  1060,  1062,  1065,  1068,  1072,  1076,  1080,
    1083,  1087,  1091,  1093,  1097,  1101,  1105,  1109,  1110,  1115,
    1117,  1120,  1122,  1124,  1126,  1128,  1130,  1131,  1133,  1145,
    1146,  1150,  1152,  1163,  1164,  1165,  1172,  1173,  1174,  1182,
    1183,  1185,  1200,  1208,  1223,  1237,  1239,  1241,  1243,  1245,
    1247,  1249,  1251,  1253,  1256,  1259,  1262,  1265,  1268,  1271,
    1274,  1277,  1280,  1283,  1287,  1291,  1293,  1296,  1299,  1301,
    1304,  1307,  1310,  1312,  1315,  1316,  1318,  1319,  1322,  1323,
    1327,  1329,  1333,  1335,  1339,  1341,  1347,  1349,  1351,  1352,
    1355,  1356,  1359,  1361,  1362,  1364,  1368,  1373,  1378,  1383,
    1387,  1391,  1398,  1405,  1409,  1412,  1413,  1417,  1418,  1422,
    1424,  1425,  1429,  1431,  1433,  1435,  1436,  1440,  1442,  1451,
    1452,  1456,  1458,  1461,  1463,  1465,  1468,  1471,  1474,  1479,
    1483,  1487,  1488,  1490,  1491,  1494,  1496,  1501,  1504,  1507,
    1509,  1511,  1514,  1516,  1518,  1521,  1524,  1528,  1530,  1532,
    1534,  1537,  1540,  1542,  1544,  1546,  1548,  1550,  1552,  1554,
    1556,  1558,  1560,  1562,  1564,  1566,  1568,  1572,  1573,  1578,
    1579,  1581
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     165,     0,    -1,   166,    -1,   165,   166,    -1,    -1,   167,
     168,    -1,   250,    -1,   236,    -1,   243,    -1,   178,    -1,
     272,    -1,   260,    -1,   264,    -1,   265,    -1,   186,    -1,
     216,    -1,   208,    -1,   212,    -1,   224,    -1,   170,    -1,
     174,    -1,   228,    -1,   232,    -1,   273,    -1,   274,    -1,
     286,    -1,   288,    -1,   289,    -1,   290,    -1,   291,    -1,
     292,    -1,   293,    -1,   294,    -1,   295,    -1,   305,    -1,
     309,    -1,   196,    -1,   198,    -1,   182,    -1,   169,    -1,
     220,    -1,   223,    -1,   204,    -1,   332,    -1,   338,    -1,
     335,    -1,   190,    -1,   331,    -1,   312,    -1,   366,    -1,
     387,    -1,   275,    -1,     5,   171,    -1,    32,    -1,   142,
     172,   143,    -1,   173,    -1,   172,   144,   173,    -1,   130,
     145,    32,    -1,     6,   175,    -1,    32,    -1,   142,   176,
     143,    -1,   177,    -1,   176,   144,   177,    -1,   130,   145,
      32,    -1,     7,   179,    -1,    30,    -1,   142,   180,   143,
      -1,   181,    -1,   180,   144,   181,    -1,   130,   145,    30,
      -1,     8,   183,   310,    -1,    30,    -1,   142,   184,   143,
      -1,   185,    -1,   184,   144,   185,    -1,   130,   145,    30,
      -1,     3,   187,    -1,    30,   100,    -1,   142,   188,   143,
      -1,   189,    -1,   188,   144,   189,    -1,   130,   145,   355,
      -1,   141,   145,   100,    -1,   115,   326,   191,   370,   192,
      -1,    -1,   142,   326,   143,    -1,   146,   193,   147,   148,
      -1,   194,    -1,   193,   194,    -1,   220,    -1,   223,    -1,
     195,    -1,   275,    -1,   116,   310,    -1,    -1,    26,   395,
     370,   197,   200,    -1,    -1,   337,    26,   395,   370,   199,
     200,    -1,   146,   201,   147,   148,    -1,   202,    -1,   201,
     202,    -1,   220,    -1,   223,    -1,   275,    -1,   287,    -1,
      45,   310,    -1,    46,   310,    -1,   284,    -1,   312,    -1,
     203,    -1,    91,   391,    30,   142,   376,   143,   368,   397,
     370,   363,   148,   304,   374,    -1,    -1,   103,    30,   205,
     206,   148,    -1,    -1,   146,   207,   147,    -1,   169,    -1,
     207,   169,    -1,    -1,   105,   209,   146,   210,   147,    -1,
     211,    -1,   210,   211,    -1,    30,    -1,   106,   213,    -1,
      30,    -1,   142,   214,   143,    -1,   215,    -1,   214,   144,
     215,    -1,   130,   145,   355,    -1,    -1,   104,   217,   146,
     218,   147,    -1,   219,    -1,   218,   219,    -1,    30,    -1,
      28,   142,   222,   143,    -1,    30,    -1,   149,    30,    -1,
     221,    89,    30,    -1,   221,    89,   149,    30,    -1,   221,
      -1,   315,   150,   315,    -1,    29,    -1,   107,   225,   370,
      -1,    -1,    32,    -1,   142,   226,   143,    -1,   227,    -1,
     226,   144,   227,    -1,   137,   145,    32,    -1,   129,   145,
      32,    -1,   135,   145,    32,    -1,   136,   145,    32,    -1,
     121,   229,    -1,   258,    -1,   142,   230,   143,    -1,   231,
      -1,   230,   144,   231,    -1,   130,   145,   258,    -1,   122,
     233,    -1,   258,    -1,   142,   234,   143,    -1,   235,    -1,
     234,   144,   235,    -1,   130,   145,   258,    -1,    56,   237,
     240,    -1,   258,    -1,   142,   238,   143,    -1,   239,    -1,
     238,   144,   239,    -1,   130,   145,   258,    -1,    -1,   146,
     241,   147,   148,    -1,   242,    -1,   241,   242,    -1,   220,
      -1,   223,    -1,   300,    -1,    57,   244,   247,    -1,   258,
      -1,   142,   245,   143,    -1,   246,    -1,   245,   144,   246,
      -1,   130,   145,   258,    -1,    -1,   146,   248,   147,   148,
      -1,   249,    -1,   248,   249,    -1,   220,    -1,   223,    -1,
     300,    -1,    54,   251,   255,    -1,    55,   258,   259,    -1,
      -1,   258,   252,   259,    -1,   142,   253,   143,    -1,   254,
      -1,   253,   144,   254,    -1,   127,   145,    32,    -1,   128,
     145,    32,    -1,   130,   145,   258,    -1,   138,   145,   328,
      -1,   139,   145,   328,    -1,   140,   145,    30,    -1,   141,
     145,   100,    -1,    -1,   146,   256,   147,   148,    -1,   257,
      -1,   256,   257,    -1,   220,    -1,   223,    -1,   296,    -1,
     300,    -1,    30,    -1,    31,    -1,    -1,   100,    -1,    48,
     261,    -1,    31,    -1,   142,   262,   143,    -1,   263,    -1,
     262,   144,   263,    -1,   130,   145,    31,    -1,   131,   145,
     328,    -1,    49,    31,    -1,    50,   266,    -1,    31,    -1,
     142,   267,   143,    -1,   268,    -1,   267,   144,   268,    -1,
     130,   145,    31,    -1,    -1,    14,   310,    -1,    -1,    15,
     310,    -1,    -1,    16,   310,    -1,    25,   310,    -1,    51,
     310,    -1,    52,   310,    -1,    53,   310,    -1,    34,   310,
      -1,    35,   310,    -1,    36,   310,    -1,    37,   310,    -1,
      38,   310,    -1,    39,   310,    -1,    40,   310,    -1,    41,
     310,    -1,    44,   310,    -1,    42,   310,    -1,    22,   310,
      -1,    23,   310,    -1,    17,   310,    -1,    18,   310,    -1,
      19,   310,    -1,    20,   310,    -1,    21,   310,    -1,    24,
     310,    -1,    10,   310,    -1,    11,   310,    -1,     4,   297,
      -1,   142,   298,   143,    -1,   299,    -1,   298,   144,   299,
      -1,   133,   145,    32,    -1,     9,   301,   310,    -1,    -1,
      32,    -1,   142,   302,   143,    -1,   303,    -1,   302,   144,
     303,    -1,   124,   145,    32,    -1,    -1,   300,    -1,    12,
     306,   310,    -1,    30,    -1,   142,   307,   143,    -1,   308,
      -1,   307,   144,   308,    -1,   126,   145,    30,    -1,   132,
     145,   100,    -1,    13,    31,   314,   310,    -1,   311,    29,
      -1,    27,    -1,   311,    27,    -1,    -1,    85,   315,   370,
     313,   146,   316,   147,   148,    -1,    -1,    31,    -1,    -1,
      30,    -1,    -1,   317,    -1,   318,    -1,   317,   318,    -1,
     220,    -1,   223,    -1,    30,   320,   370,   319,    -1,    -1,
     144,    -1,    -1,   145,   325,    -1,    -1,   145,   322,    -1,
     325,    -1,   322,   323,   325,    -1,   150,    -1,   151,    -1,
     152,    -1,   153,    -1,   154,    -1,   155,    -1,    -1,   149,
      -1,   156,    -1,   150,    -1,   151,    -1,   152,    -1,   154,
      -1,   324,   329,    -1,   327,    -1,   326,    88,   327,    -1,
      30,    -1,   109,    -1,   110,    -1,   326,    -1,   395,   142,
     330,   143,    -1,   101,    -1,   100,    -1,   328,    -1,   111,
      -1,    32,    -1,   108,    -1,    -1,   322,    -1,   330,   144,
     322,    -1,   102,   391,    30,   370,   148,    -1,   102,   391,
     142,   394,    30,   143,   142,   396,   143,   370,   148,    -1,
      -1,    -1,    59,   326,   333,   341,   370,   334,   345,   148,
      -1,    -1,   337,   336,   338,    -1,   119,   157,   396,   158,
      -1,    -1,    -1,    58,   326,   339,   341,   370,   340,   345,
     148,    -1,    -1,   159,   342,    -1,   343,    -1,   342,   144,
     343,    -1,   344,   326,    -1,    -1,    60,    -1,    61,    -1,
      62,    -1,    -1,   146,   346,   147,    -1,   347,    -1,   346,
     347,    -1,   220,    -1,   223,    -1,   204,    -1,   332,    -1,
     338,    -1,   190,    -1,   331,    -1,   312,    -1,   348,    -1,
     300,    -1,   287,    -1,   275,    -1,   276,    -1,   277,    -1,
     278,    -1,   279,    -1,   280,    -1,   281,    -1,   282,    -1,
     283,    -1,   284,    -1,   285,    -1,   358,    -1,   357,    -1,
     379,    -1,    47,   310,    -1,    46,   310,    -1,    60,   356,
     159,    -1,    61,   356,   159,    -1,    62,   356,   159,    -1,
      63,   159,    -1,   123,   349,   352,    -1,   142,   350,   143,
      -1,   351,    -1,   350,   144,   351,    -1,   125,   145,    30,
      -1,   130,   145,   355,    -1,   134,   145,    30,    -1,    -1,
     146,   353,   147,   148,    -1,   354,    -1,   353,   354,    -1,
     220,    -1,   223,    -1,   300,    -1,    30,    -1,    32,    -1,
      -1,    65,    -1,   365,   156,    30,   142,   143,   397,   369,
     370,   148,   374,   375,    -1,    -1,   118,   359,   360,    -1,
     360,    -1,    30,   142,   376,   143,   397,   370,   361,   148,
     304,   374,    -1,    -1,    -1,   160,   362,   142,   376,   143,
     161,    -1,    -1,    -1,   160,   364,   391,   142,   376,   143,
     161,    -1,    -1,    84,    -1,   391,    30,   142,   376,   143,
     368,   397,   369,   370,   363,   148,   304,   374,   375,    -1,
     391,   112,   145,   142,   391,   143,   148,    -1,   391,   112,
     367,   142,   376,   143,   368,   397,   369,   370,   363,   148,
     374,   375,    -1,   112,   391,   142,   376,   143,   368,   397,
     369,   370,   363,   148,   374,   375,    -1,   151,    -1,   150,
      -1,   152,    -1,   153,    -1,   162,    -1,   154,    -1,   155,
      -1,   163,    -1,   157,   157,    -1,   158,   158,    -1,   151,
     145,    -1,   150,   145,    -1,   152,   145,    -1,   153,   145,
      -1,   162,   145,    -1,   154,   145,    -1,   155,   145,    -1,
     163,   145,    -1,   157,   157,   145,    -1,   158,   158,   145,
      -1,   156,    -1,   142,   143,    -1,   160,   161,    -1,   157,
      -1,   157,   145,    -1,   145,   145,    -1,   149,   145,    -1,
     158,    -1,   158,   145,    -1,    -1,    90,    -1,    -1,   145,
     100,    -1,    -1,   153,   371,   153,    -1,   372,    -1,   371,
     144,   372,    -1,    30,    -1,    30,   145,   373,    -1,   258,
      -1,    30,   159,   259,   150,   259,    -1,    32,    -1,   100,
      -1,    -1,    43,   310,    -1,    -1,    33,   310,    -1,   377,
      -1,    -1,   378,    -1,   377,   144,   378,    -1,    92,   315,
     370,   321,    -1,    93,   315,   370,   321,    -1,    94,   315,
     370,   321,    -1,    95,   315,   370,    -1,    96,   315,   370,
      -1,    97,   142,   376,   143,   315,   370,    -1,    98,   142,
     376,   143,   315,   370,    -1,   114,   315,   370,    -1,   392,
     321,    -1,    -1,    64,   380,   382,    -1,    -1,    66,   381,
     382,    -1,   382,    -1,    -1,    91,   383,   384,    -1,   384,
      -1,   385,    -1,   387,    -1,    -1,    84,   386,   366,    -1,
     366,    -1,   391,    30,   370,   388,   148,   269,   270,   271,
      -1,    -1,   146,   389,   147,    -1,   390,    -1,   389,   390,
      -1,   220,    -1,   223,    -1,    14,   310,    -1,    15,   310,
      -1,    16,   310,    -1,    90,   395,   394,   393,    -1,   395,
     394,   393,    -1,   391,   315,   370,    -1,    -1,   154,    -1,
      -1,   394,   152,    -1,   326,    -1,   326,   157,   396,   158,
      -1,    59,   326,    -1,    87,    68,    -1,    68,    -1,    87,
      -1,    87,    69,    -1,    69,    -1,    70,    -1,    87,    70,
      -1,    70,    70,    -1,    87,    70,    70,    -1,    71,    -1,
      72,    -1,    67,    -1,    86,    73,    -1,    87,    73,    -1,
      73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,
      78,    -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,
      83,    -1,    99,    -1,   120,    -1,   391,    -1,   396,   144,
     391,    -1,    -1,   113,   142,   398,   143,    -1,    -1,   326,
      -1,   398,   144,   326,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   520,   520,   521,   524,   524,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     579,   580,   581,   582,   583,   584,   585,   586,   587,   588,
     589,   590,   603,   609,   614,   619,   620,   630,   637,   646,
     651,   656,   657,   667,   674,   682,   687,   692,   693,   703,
     710,   739,   744,   749,   750,   760,   767,   793,   801,   806,
     807,   818,   824,   832,   882,   886,   960,   965,   966,   977,
     980,   983,   997,  1013,  1018,  1018,  1037,  1037,  1098,  1112,
    1113,  1116,  1117,  1118,  1122,  1126,  1135,  1144,  1153,  1154,
    1157,  1171,  1171,  1208,  1209,  1212,  1213,  1216,  1216,  1245,
    1246,  1249,  1254,  1261,  1266,  1271,  1272,  1282,  1289,  1289,
    1315,  1316,  1319,  1325,  1338,  1341,  1344,  1347,  1352,  1353,
    1358,  1364,  1401,  1409,  1415,  1420,  1421,  1434,  1442,  1450,
    1458,  1468,  1479,  1484,  1489,  1490,  1500,  1507,  1518,  1523,
    1528,  1529,  1539,  1546,  1564,  1569,  1574,  1575,  1585,  1592,
    1596,  1601,  1602,  1612,  1615,  1618,  1632,  1650,  1655,  1660,
    1661,  1671,  1678,  1682,  1687,  1688,  1698,  1701,  1704,  1718,
    1729,  1739,  1739,  1751,  1756,  1757,  1773,  1784,  1801,  1812,
    1823,  1834,  1845,  1861,  1865,  1870,  1871,  1881,  1884,  1887,
    1890,  1904,  1905,  1921,  1924,  1927,  1936,  1942,  1947,  1948,
    1959,  1965,  1973,  1981,  1987,  1992,  1997,  1998,  2008,  2015,
    2018,  2023,  2026,  2031,  2034,  2039,  2045,  2051,  2057,  2062,
    2067,  2072,  2077,  2082,  2087,  2092,  2097,  2102,  2107,  2112,
    2118,  2123,  2129,  2135,  2141,  2147,  2153,  2158,  2164,  2170,
    2176,  2181,  2182,  2192,  2199,  2279,  2282,  2287,  2292,  2293,
    2303,  2310,  2313,  2316,  2325,  2331,  2336,  2337,  2348,  2354,
    2365,  2370,  2373,  2374,  2384,  2384,  2403,  2406,  2411,  2414,
    2419,  2420,  2423,  2424,  2427,  2428,  2429,  2465,  2466,  2469,
    2470,  2473,  2476,  2481,  2482,  2500,  2503,  2506,  2509,  2512,
    2515,  2520,  2523,  2526,  2529,  2532,  2535,  2538,  2543,  2557,
    2558,  2566,  2571,  2574,  2579,  2588,  2598,  2602,  2606,  2610,
    2614,  2618,  2624,  2629,  2635,  2653,  2672,  2708,  2714,  2708,
    2748,  2748,  2774,  2779,  2785,  2779,  2816,  2817,  2820,  2821,
    2824,  2868,  2871,  2874,  2877,  2882,  2885,  2890,  2891,  2894,
    2895,  2896,  2897,  2898,  2899,  2900,  2901,  2902,  2903,  2907,
    2911,  2915,  2926,  2937,  2948,  2959,  2970,  2981,  2992,  3003,
    3014,  3025,  3026,  3027,  3028,  3039,  3050,  3057,  3064,  3071,
    3080,  3093,  3098,  3099,  3111,  3118,  3125,  3134,  3138,  3143,
    3144,  3154,  3157,  3160,  3174,  3175,  3178,  3181,  3186,  3248,
    3248,  3249,  3252,  3297,  3300,  3300,  3311,  3314,  3314,  3326,
    3329,  3334,  3352,  3372,  3408,  3489,  3490,  3491,  3492,  3493,
    3494,  3495,  3496,  3497,  3498,  3499,  3500,  3501,  3502,  3503,
    3504,  3505,  3506,  3507,  3508,  3509,  3510,  3511,  3512,  3513,
    3514,  3515,  3516,  3517,  3520,  3523,  3528,  3531,  3539,  3542,
    3548,  3552,  3564,  3568,  3574,  3578,  3601,  3605,  3611,  3614,
    3619,  3622,  3627,  3675,  3680,  3686,  3713,  3724,  3735,  3746,
    3764,  3774,  3790,  3806,  3814,  3821,  3821,  3822,  3822,  3823,
    3827,  3827,  3828,  3832,  3833,  3837,  3837,  3838,  3841,  3893,
    3899,  3904,  3905,  3917,  3920,  3923,  3938,  3953,  3970,  3975,
    3989,  4080,  4083,  4091,  4094,  4099,  4107,  4118,  4133,  4137,
    4141,  4145,  4149,  4153,  4157,  4161,  4165,  4169,  4173,  4177,
    4181,  4185,  4189,  4193,  4197,  4201,  4205,  4209,  4213,  4217,
    4221,  4225,  4229,  4233,  4237,  4243,  4249,  4265,  4268,  4276,
    4282,  4289
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_API", "TK_AUTOPYNAME",
  "TK_DEFDOCSTRING", "TK_DEFENCODING", "TK_PLUGIN", "TK_VIRTERRORHANDLER",
  "TK_DOCSTRING", "TK_DOC", "TK_EXPORTEDDOC", "TK_EXTRACT", "TK_MAKEFILE",
  "TK_ACCESSCODE", "TK_GETCODE", "TK_SETCODE", "TK_PREINITCODE",
  "TK_INITCODE", "TK_POSTINITCODE", "TK_UNITCODE",
  "TK_UNITPOSTINCLUDECODE", "TK_MODCODE", "TK_TYPECODE", "TK_PREPYCODE",
  "TK_COPYING", "TK_MAPPEDTYPE", "TK_CODELINE", "TK_IF", "TK_END",
  "TK_NAME_VALUE", "TK_PATH_VALUE", "TK_STRING_VALUE",
  "TK_VIRTUALCATCHERCODE", "TK_TRAVERSECODE", "TK_CLEARCODE",
  "TK_GETBUFFERCODE", "TK_RELEASEBUFFERCODE", "TK_READBUFFERCODE",
  "TK_WRITEBUFFERCODE", "TK_SEGCOUNTCODE", "TK_CHARBUFFERCODE",
  "TK_PICKLECODE", "TK_METHODCODE", "TK_INSTANCECODE", "TK_FROMTYPE",
  "TK_TOTYPE", "TK_TOSUBCLASS", "TK_INCLUDE", "TK_OPTINCLUDE", "TK_IMPORT",
  "TK_EXPHEADERCODE", "TK_MODHEADERCODE", "TK_TYPEHEADERCODE", "TK_MODULE",
  "TK_CMODULE", "TK_CONSMODULE", "TK_COMPOMODULE", "TK_CLASS", "TK_STRUCT",
  "TK_PUBLIC", "TK_PROTECTED", "TK_PRIVATE", "TK_SIGNALS",
  "TK_SIGNAL_METHOD", "TK_SLOTS", "TK_SLOT_METHOD", "TK_BOOL", "TK_SHORT",
  "TK_INT", "TK_LONG", "TK_FLOAT", "TK_DOUBLE", "TK_CHAR", "TK_WCHAR_T",
  "TK_VOID", "TK_PYOBJECT", "TK_PYTUPLE", "TK_PYLIST", "TK_PYDICT",
  "TK_PYCALLABLE", "TK_PYSLICE", "TK_PYTYPE", "TK_PYBUFFER", "TK_VIRTUAL",
  "TK_ENUM", "TK_SIGNED", "TK_UNSIGNED", "TK_SCOPE", "TK_LOGICAL_OR",
  "TK_CONST", "TK_STATIC", "TK_SIPSIGNAL", "TK_SIPSLOT", "TK_SIPANYSLOT",
  "TK_SIPRXCON", "TK_SIPRXDIS", "TK_SIPSLOTCON", "TK_SIPSLOTDIS",
  "TK_SIPSSIZET", "TK_NUMBER_VALUE", "TK_REAL_VALUE", "TK_TYPEDEF",
  "TK_NAMESPACE", "TK_TIMELINE", "TK_PLATFORMS", "TK_FEATURE",
  "TK_LICENSE", "TK_QCHAR_VALUE", "TK_TRUE_VALUE", "TK_FALSE_VALUE",
  "TK_NULL_VALUE", "TK_OPERATOR", "TK_THROW", "TK_QOBJECT", "TK_EXCEPTION",
  "TK_RAISECODE", "TK_VIRTERRORCODE", "TK_EXPLICIT", "TK_TEMPLATE",
  "TK_ELLIPSIS", "TK_DEFMETATYPE", "TK_DEFSUPERTYPE", "TK_PROPERTY",
  "TK_FORMAT", "TK_GET", "TK_ID", "TK_KWARGS", "TK_LANGUAGE",
  "TK_LICENSEE", "TK_NAME", "TK_OPTIONAL", "TK_ORDER", "TK_REMOVELEADING",
  "TK_SET", "TK_SIGNATURE", "TK_TIMESTAMP", "TK_TYPE", "TK_USEARGNAMES",
  "TK_ALLRAISEPYEXC", "TK_DEFERRORHANDLER", "TK_VERSION", "'('", "')'",
  "','", "'='", "'{'", "'}'", "';'", "'!'", "'-'", "'+'", "'*'", "'/'",
  "'&'", "'|'", "'~'", "'<'", "'>'", "':'", "'['", "']'", "'%'", "'^'",
  "$accept", "specification", "statement", "@1", "modstatement",
  "nsstatement", "defdocstring", "defdocstring_args",
  "defdocstring_arg_list", "defdocstring_arg", "defencoding",
  "defencoding_args", "defencoding_arg_list", "defencoding_arg", "plugin",
  "plugin_args", "plugin_arg_list", "plugin_arg", "virterrorhandler",
  "veh_args", "veh_arg_list", "veh_arg", "api", "api_args", "api_arg_list",
  "api_arg", "exception", "baseexception", "exception_body",
  "exception_body_directives", "exception_body_directive", "raisecode",
  "mappedtype", "@2", "mappedtypetmpl", "@3", "mtdefinition", "mtbody",
  "mtline", "mtfunction", "namespace", "@4", "optnsbody", "nsbody",
  "platforms", "@5", "platformlist", "platform", "feature", "feature_args",
  "feature_arg_list", "feature_arg", "timeline", "@6", "qualifierlist",
  "qualifiername", "ifstart", "oredqualifiers", "qualifiers", "ifend",
  "license", "license_args", "license_arg_list", "license_arg",
  "defmetatype", "defmetatype_args", "defmetatype_arg_list",
  "defmetatype_arg", "defsupertype", "defsupertype_args",
  "defsupertype_arg_list", "defsupertype_arg", "consmodule",
  "consmodule_args", "consmodule_arg_list", "consmodule_arg",
  "consmodule_body", "consmodule_body_directives",
  "consmodule_body_directive", "compmodule", "compmodule_args",
  "compmodule_arg_list", "compmodule_arg", "compmodule_body",
  "compmodule_body_directives", "compmodule_body_directive", "module",
  "module_args", "@7", "module_arg_list", "module_arg", "module_body",
  "module_body_directives", "module_body_directive", "dottedname",
  "optnumber", "include", "include_args", "include_arg_list",
  "include_arg", "optinclude", "import", "import_args", "import_arg_list",
  "import_arg", "optaccesscode", "optgetcode", "optsetcode", "copying",
  "exphdrcode", "modhdrcode", "typehdrcode", "travcode", "clearcode",
  "getbufcode", "releasebufcode", "readbufcode", "writebufcode",
  "segcountcode", "charbufcode", "instancecode", "picklecode", "modcode",
  "typecode", "preinitcode", "initcode", "postinitcode", "unitcode",
  "unitpostinccode", "prepycode", "doc", "exporteddoc", "autopyname",
  "autopyname_args", "autopyname_arg_list", "autopyname_arg", "docstring",
  "docstring_args", "docstring_arg_list", "docstring_arg", "optdocstring",
  "extract", "extract_args", "extract_arg_list", "extract_arg", "makefile",
  "codeblock", "codelines", "enum", "@8", "optfilename", "optname",
  "optenumbody", "enumbody", "enumline", "optcomma", "optenumassign",
  "optassign", "expr", "binop", "optunop", "value", "scopedname",
  "scopepart", "bool_value", "simplevalue", "exprlist", "typedef",
  "struct", "@9", "@10", "classtmpl", "@11", "template", "class", "@12",
  "@13", "superclasses", "superlist", "superclass", "class_access",
  "optclassbody", "classbody", "classline", "property", "property_args",
  "property_arg_list", "property_arg", "property_body",
  "property_body_directives", "property_body_directive", "name_or_string",
  "optslot", "dtor", "ctor", "@14", "simplector", "optctorsig", "@15",
  "optsig", "@16", "optvirtual", "function", "operatorname", "optconst",
  "optabstract", "optflags", "flaglist", "flag", "flagvalue", "methodcode",
  "virtualcatchercode", "arglist", "rawarglist", "argvalue", "varmember",
  "@17", "@18", "simple_varmem", "@19", "varmem", "member", "@20",
  "variable", "variable_body", "variable_body_directives",
  "variable_body_directive", "cpptype", "argtype", "optref", "deref",
  "basetype", "cpptypelist", "optexceptions", "exceptionlist", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,    40,    41,    44,    61,   123,   125,    59,    33,
      45,    43,    42,    47,    38,   124,   126,    60,    62,    58,
      91,    93,    37,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   164,   165,   165,   167,   166,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   170,   171,   171,   172,   172,   173,   174,   175,
     175,   176,   176,   177,   178,   179,   179,   180,   180,   181,
     182,   183,   183,   184,   184,   185,   186,   187,   187,   188,
     188,   189,   189,   190,   191,   191,   192,   193,   193,   194,
     194,   194,   194,   195,   197,   196,   199,   198,   200,   201,
     201,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     203,   205,   204,   206,   206,   207,   207,   209,   208,   210,
     210,   211,   212,   213,   213,   214,   214,   215,   217,   216,
     218,   218,   219,   220,   221,   221,   221,   221,   222,   222,
     223,   224,   225,   225,   225,   226,   226,   227,   227,   227,
     227,   228,   229,   229,   230,   230,   231,   232,   233,   233,
     234,   234,   235,   236,   237,   237,   238,   238,   239,   240,
     240,   241,   241,   242,   242,   242,   243,   244,   244,   245,
     245,   246,   247,   247,   248,   248,   249,   249,   249,   250,
     250,   252,   251,   251,   253,   253,   254,   254,   254,   254,
     254,   254,   254,   255,   255,   256,   256,   257,   257,   257,
     257,   258,   258,   259,   259,   260,   261,   261,   262,   262,
     263,   263,   264,   265,   266,   266,   267,   267,   268,   269,
     269,   270,   270,   271,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   298,   299,   300,   301,   301,   301,   302,   302,
     303,   304,   304,   305,   306,   306,   307,   307,   308,   308,
     309,   310,   311,   311,   313,   312,   314,   314,   315,   315,
     316,   316,   317,   317,   318,   318,   318,   319,   319,   320,
     320,   321,   321,   322,   322,   323,   323,   323,   323,   323,
     323,   324,   324,   324,   324,   324,   324,   324,   325,   326,
     326,   327,   328,   328,   329,   329,   329,   329,   329,   329,
     329,   329,   330,   330,   330,   331,   331,   333,   334,   332,
     336,   335,   337,   339,   340,   338,   341,   341,   342,   342,
     343,   344,   344,   344,   344,   345,   345,   346,   346,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     348,   349,   350,   350,   351,   351,   351,   352,   352,   353,
     353,   354,   354,   354,   355,   355,   356,   356,   357,   359,
     358,   358,   360,   361,   362,   361,   363,   364,   363,   365,
     365,   366,   366,   366,   366,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   368,   368,   369,   369,   370,   370,
     371,   371,   372,   372,   373,   373,   373,   373,   374,   374,
     375,   375,   376,   377,   377,   377,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   380,   379,   381,   379,   379,
     383,   382,   382,   384,   384,   386,   385,   385,   387,   388,
     388,   389,   389,   390,   390,   390,   390,   390,   391,   391,
     392,   393,   393,   394,   394,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   396,   396,   397,   397,   398,
     398,   398
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     1,     3,     3,     2,     1,
       3,     1,     3,     3,     2,     1,     3,     1,     3,     3,
       3,     1,     3,     1,     3,     3,     2,     2,     3,     1,
       3,     3,     3,     5,     0,     3,     4,     1,     2,     1,
       1,     1,     1,     2,     0,     5,     0,     6,     4,     1,
       2,     1,     1,     1,     1,     2,     2,     1,     1,     1,
      13,     0,     5,     0,     3,     1,     2,     0,     5,     1,
       2,     1,     2,     1,     3,     1,     3,     3,     0,     5,
       1,     2,     1,     4,     1,     2,     3,     4,     1,     3,
       1,     3,     0,     1,     3,     1,     3,     3,     3,     3,
       3,     2,     1,     3,     1,     3,     3,     2,     1,     3,
       1,     3,     3,     3,     1,     3,     1,     3,     3,     0,
       4,     1,     2,     1,     1,     1,     3,     1,     3,     1,
       3,     3,     0,     4,     1,     2,     1,     1,     1,     3,
       3,     0,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     0,     4,     1,     2,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     1,     3,     1,     3,
       3,     3,     2,     2,     1,     3,     1,     3,     3,     0,
       2,     0,     2,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     1,     3,     3,     3,     0,     1,     3,     1,     3,
       3,     0,     1,     3,     1,     3,     1,     3,     3,     3,
       4,     2,     1,     2,     0,     8,     0,     1,     0,     1,
       0,     1,     1,     2,     1,     1,     4,     0,     1,     0,
       2,     0,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     1,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     1,     0,     1,     3,     5,    11,     0,     0,     8,
       0,     3,     4,     0,     0,     8,     0,     2,     1,     3,
       2,     0,     1,     1,     1,     0,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     3,     3,     2,
       3,     3,     1,     3,     3,     3,     3,     0,     4,     1,
       2,     1,     1,     1,     1,     1,     0,     1,    11,     0,
       3,     1,    10,     0,     0,     6,     0,     0,     7,     0,
       1,    14,     7,    14,    13,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     1,     2,     2,     1,     2,
       2,     2,     1,     2,     0,     1,     0,     2,     0,     3,
       1,     3,     1,     3,     1,     5,     1,     1,     0,     2,
       0,     2,     1,     0,     1,     3,     4,     4,     4,     3,
       3,     6,     6,     3,     2,     0,     3,     0,     3,     1,
       0,     3,     1,     1,     1,     0,     3,     1,     8,     0,
       3,     1,     2,     1,     1,     2,     2,     2,     4,     3,
       3,     0,     1,     0,     2,     1,     4,     2,     2,     1,
       1,     2,     1,     1,     2,     2,     3,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     4,     0,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     4,     2,     0,     1,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,   321,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   529,
     519,   522,   523,   527,   528,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   288,     0,   520,     0,
     543,     0,     0,   128,   117,     0,   142,     0,     0,     0,
     544,     0,     0,     5,    39,    19,    20,     9,    38,    14,
      46,    36,    37,    42,    16,    17,    15,    40,    41,    18,
      21,    22,     7,     8,     6,    11,    12,    13,    10,    23,
      24,    51,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    48,   515,   319,    47,    43,    45,   340,
      44,    49,    50,     0,   513,     0,     0,    76,    53,     0,
      52,    59,     0,    58,    65,     0,    64,    71,     0,     0,
     282,   257,     0,   258,   274,     0,     0,   286,   251,   252,
     253,   254,   255,   249,   256,   235,     0,   458,   288,   216,
       0,   215,   222,   224,     0,   223,   236,   237,   238,   211,
     212,     0,   203,   191,   213,     0,   169,   164,     0,   182,
     177,   343,   337,   525,   289,   458,   530,   518,   521,   524,
     531,   513,     0,   111,     0,     0,   123,     0,   122,   143,
       0,   458,     0,    84,     0,     0,   151,   152,     0,   157,
     158,     0,     0,     0,     0,   458,     0,   511,    77,     0,
       0,     0,    79,     0,     0,    55,     0,     0,    61,     0,
       0,    67,     0,     0,    73,    70,   283,   281,     0,     0,
       0,   276,   273,   287,     0,   517,     0,    94,   134,     0,
     138,     0,     0,     0,     0,     0,   218,     0,     0,   226,
       0,     0,     0,     0,     0,     0,     0,     0,   194,     0,
     189,   213,   214,   190,     0,     0,   166,     0,   163,     0,
       0,   179,     0,   176,   346,   346,   284,   526,   511,   458,
     513,   113,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     0,   145,   141,   473,     0,   458,   545,     0,     0,
       0,   154,     0,     0,   160,   320,     0,   458,   341,   473,
     499,     0,     0,     0,   426,   425,   427,   428,   430,   431,
     445,   448,   452,     0,   429,   432,     0,   514,   512,   509,
       0,     0,    78,     0,     0,    54,     0,     0,    60,     0,
       0,    66,     0,     0,    72,     0,     0,     0,   275,     0,
     280,   462,     0,   460,     0,   135,     0,   133,   288,     0,
       0,   217,     0,     0,   225,     0,     0,     0,     0,     0,
       0,     0,     0,   193,     0,     0,   265,   207,   208,     0,
     205,   209,   210,   192,     0,   165,     0,   173,   174,     0,
     171,   175,     0,   178,     0,   186,   187,     0,   184,   188,
     351,   458,   458,     0,   508,     0,     0,     0,     0,   132,
       0,   130,   121,     0,   119,     0,   124,     0,     0,     0,
       0,     0,   144,     0,   288,   288,   288,   288,   288,     0,
       0,   288,     0,   472,   474,   288,   301,     0,     0,     0,
     342,     0,   153,     0,     0,   159,     0,   516,    96,     0,
       0,     0,   446,     0,   450,   451,   436,   435,   437,   438,
     440,   441,   449,   433,   453,   434,   447,   439,   442,   473,
     404,   405,    81,    82,    80,    57,    56,    63,    62,    69,
      68,    75,    74,   278,   279,   277,     0,     0,   459,     0,
      95,   136,     0,   139,   220,   322,   323,   221,   219,   228,
     227,   196,   197,   198,   199,   200,   201,   202,   195,     0,
     259,   266,     0,     0,     0,   206,   168,   167,     0,   172,
     181,   180,     0,   185,   352,   353,   354,   347,   348,     0,
     344,   338,   290,   335,     0,   115,     0,   340,   112,   129,
     131,   118,   120,   127,   126,   148,   149,   150,   147,   146,
     458,   458,   458,   458,   458,   473,   473,   458,   454,     0,
     458,   311,   484,    85,     0,    83,   546,   156,   155,   162,
     161,     0,   454,     0,     0,     0,   503,   504,     0,   501,
     229,     0,   443,   444,     0,   211,   466,   467,   464,   463,
     461,     0,     0,     0,     0,     0,     0,    99,   109,   101,
     102,   103,   107,   104,   108,   137,     0,     0,   261,     0,
       0,   268,   264,   204,   170,   183,   351,   350,   355,   355,
     299,   294,   295,     0,   291,   292,     0,   114,   116,   301,
     301,   301,   479,   480,     0,     0,   483,   455,   547,   475,
     510,   312,   314,   315,   316,   317,   313,   302,     0,   303,
       0,     0,    87,    91,    89,    90,    92,    97,   547,   505,
     506,   507,   500,   502,     0,   231,     0,   454,   213,   250,
     247,   105,   106,     0,     0,   100,     0,   260,     0,     0,
     267,     0,   349,   419,     0,     0,   311,   458,     0,   293,
       0,   476,   477,   478,   288,   288,     0,   456,   305,   306,
     307,   308,   309,   310,   311,   330,   327,   326,   331,   329,
     324,   328,   318,     0,    93,     0,    88,   456,   230,     0,
     233,   422,   547,     0,     0,    98,   263,   262,   270,   269,
     321,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   406,   406,   406,     0,   485,   487,   495,   490,
     409,     0,   364,   361,   359,   360,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   369,   368,   366,
     365,   362,   363,   419,   357,   367,   382,   381,   411,     0,
     497,   383,   489,   492,   493,   494,   345,   339,   300,   297,
     285,     0,   458,   458,   549,     0,   458,   304,   311,    86,
     458,   232,     0,   498,   456,   213,   473,   473,   239,   240,
     241,   242,   243,   244,   245,   246,   248,   385,   384,   407,
       0,     0,     0,   389,     0,     0,     0,     0,     0,     0,
     397,   356,   358,     0,   298,   296,   458,   481,   482,   550,
       0,   457,   416,   333,     0,   416,   234,   458,   465,     0,
       0,   386,   387,   388,   495,   486,   488,   496,     0,   491,
       0,   410,     0,     0,     0,     0,   392,     0,   390,     0,
       0,   548,     0,   417,     0,   325,   311,     0,   416,   454,
     547,     0,     0,     0,     0,   391,     0,   401,   402,   403,
       0,   399,     0,   336,   551,     0,   468,   334,   271,     0,
     547,   458,   394,   395,   396,   393,     0,   400,   547,     0,
       0,   470,   272,   468,   468,   458,   413,   398,   456,   473,
     469,     0,   424,   470,   470,   416,   414,     0,   458,     0,
     471,   421,   423,     0,     0,   271,     0,     0,   271,   473,
     468,   468,   418,   468,     0,   412,   470,   110,     0,   408,
     415
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    73,    74,    75,   130,   224,   225,
      76,   133,   227,   228,    77,   136,   230,   231,    78,   139,
     233,   234,    79,   127,   221,   222,    80,   306,   575,   661,
     662,   663,    81,   364,    82,   581,   500,   606,   607,   608,
      83,   291,   418,   546,    84,   195,   423,   424,    85,   198,
     295,   296,    86,   194,   420,   421,    87,   250,   251,    88,
      89,   201,   301,   302,    90,   206,   310,   311,    91,   209,
     313,   314,    92,   176,   275,   276,   278,   399,   400,    93,
     179,   280,   281,   283,   407,   408,    94,   172,   271,   267,
     268,   270,   389,   390,   173,   273,    95,   161,   255,   256,
      96,    97,   165,   258,   259,   675,   730,   813,    98,    99,
     100,   101,   767,   768,   769,   770,   771,   772,   773,   774,
     612,   776,   102,   613,   103,   104,   105,   106,   107,   108,
     109,   110,   391,   520,   617,   618,   922,   523,   620,   621,
     923,   111,   146,   240,   241,   112,   141,   142,   113,   413,
     244,   185,   633,   634,   635,   845,   697,   572,   657,   714,
     658,   659,   114,   115,   507,   722,   854,   116,   117,   285,
     629,   118,   214,   547,   120,   284,   628,   411,   537,   538,
     539,   694,   783,   784,   785,   840,   875,   876,   878,   900,
     901,   482,   830,   786,   787,   838,   788,   937,   944,   884,
     905,   789,   790,   336,   648,   806,   247,   362,   363,   599,
     921,   932,   442,   443,   444,   791,   834,   835,   792,   837,
     793,   794,   836,   795,   461,   588,   589,   445,   446,   339,
     217,   124,   308,   707,   850
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -733
static const yytype_int16 yypact[] =
{
    -733,   121,  -733,   978,  -733,  -733,    28,    51,    56,    65,
      75,    98,    98,    81,   118,    98,    98,    98,    98,    98,
      98,    98,    98,  1448,   -13,  -733,  -733,    22,   130,    31,
      98,    98,    98,    67,   254,    71,    73,   157,   157,  -733,
    -733,  -733,   127,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,   192,   171,   355,  1448,
    -733,  1413,   210,  -733,  -733,    82,    57,  1413,   157,   113,
    -733,    77,    79,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
    -733,  -733,  -733,  -733,    34,  -733,  -733,  -733,  -733,   229,
    -733,  -733,  -733,    60,  -733,   189,    55,  -733,  -733,   172,
    -733,  -733,   227,  -733,  -733,   240,  -733,  -733,   242,    98,
    -733,  -733,   128,  -733,  -733,   107,    98,   328,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,   157,   222,    25,  -733,
     182,  -733,  -733,  -733,   260,  -733,  -733,  -733,  -733,  -733,
    -733,   208,   250,  -733,   306,   278,   268,  -733,   292,   280,
    -733,   350,    66,  -733,  -733,   222,  -733,  -733,  -733,   318,
    -733,  -733,    83,  -733,   304,   325,  -733,   323,  -733,  -733,
     196,   222,   320,    29,  1413,   359,  -733,  -733,   364,  -733,
    -733,   157,  1413,  1448,   440,    74,   211,   167,  -733,   367,
     371,   186,  -733,   377,   198,  -733,   378,   201,  -733,   381,
     207,  -733,   382,   235,  -733,  -733,  -733,  -733,   385,   386,
     256,  -733,  -733,  -733,    98,   350,   472,  -733,   383,   502,
     445,   394,   388,   395,   396,   286,  -733,   397,   288,  -733,
     398,   400,   402,   403,   404,   406,   408,   293,  -733,   258,
    -733,   306,  -733,  -733,   409,   298,  -733,   243,  -733,   410,
     300,  -733,   243,  -733,   380,   380,  -733,  -733,   167,   222,
    -733,   411,   520,   528,   414,   305,  -733,   415,   416,   417,
     418,   308,  -733,  -733,  1136,   157,   222,  -733,    50,   419,
     312,  -733,   420,   316,  -733,  -733,   110,   222,  -733,  1136,
     421,   423,   114,   425,   429,   430,   431,   434,   435,   436,
    -733,     1,   103,   407,   437,   438,   442,  -733,  -733,  -733,
     307,   485,  -733,    55,   554,  -733,   172,   555,  -733,   227,
     558,  -733,   240,   564,  -733,   242,   565,   496,  -733,   107,
    -733,   452,   -25,  -733,   453,  -733,    26,  -733,   192,   567,
     245,  -733,   182,   569,  -733,   260,   570,   572,   254,   245,
     245,   571,   505,  -733,   208,   464,    84,  -733,  -733,    43,
    -733,  -733,  -733,  -733,   254,  -733,   278,  -733,  -733,    32,
    -733,  -733,   254,  -733,   292,  -733,  -733,    39,  -733,  -733,
     255,   222,   222,   461,  -733,   460,    24,   738,   462,  -733,
      36,  -733,  -733,    54,  -733,   307,  -733,   323,   577,   579,
     580,   581,  -733,   196,   192,   192,   192,   192,   192,   473,
     474,   192,   471,   475,  -733,   192,   476,    93,   478,  1413,
    -733,   254,  -733,   359,   254,  -733,   364,  -733,  -733,   477,
     277,   469,  -733,  1413,  -733,  -733,  -733,  -733,  -733,  -733,
    -733,  -733,  -733,   480,  -733,   481,  -733,  -733,  -733,  1136,
    -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,   135,   472,  -733,   237,
    -733,  -733,   588,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,   489,
    -733,  -733,   504,    98,   483,  -733,  -733,  -733,   487,  -733,
    -733,  -733,   488,  -733,  -733,  -733,  -733,   494,  -733,   157,
    -733,  -733,   374,  -733,   497,  -733,   405,  -733,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
     222,   222,   222,   222,   222,  1136,  1136,   222,   549,  1136,
     222,   147,  -733,  -733,   115,  -733,  -733,  -733,  -733,  -733,
    -733,   453,   549,    98,    98,    98,  -733,  -733,    64,  -733,
     628,   500,  -733,  -733,   501,   486,  -733,  -733,  -733,  -733,
    -733,    98,    98,    98,    98,  1413,    41,  -733,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,   506,   322,  -733,   509,
     324,  -733,  -733,  -733,  -733,  -733,   255,   350,   510,   510,
     512,  -733,  -733,   503,   374,  -733,   513,  -733,  -733,   476,
     476,   476,  -733,  -733,   515,   516,  -733,  -733,   547,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,  -733,   266,  1195,  -733,
      98,    53,  -733,  -733,  -733,  -733,  -733,  -733,   547,  -733,
    -733,  -733,  -733,  -733,    98,   646,   517,   549,   306,  -733,
    -733,  -733,  -733,   633,   518,  -733,   632,  -733,   489,   635,
    -733,   504,  -733,  1078,   521,   522,   147,   222,   523,  -733,
    1413,  -733,  -733,  -733,   192,   192,   526,   527,  -733,  -733,
    -733,  -733,  -733,  -733,   147,  -733,  -733,  -733,  -733,  -733,
      96,  -733,  -733,   531,  -733,   530,  -733,   527,  -733,    98,
     658,  -733,   547,   525,   534,  -733,  -733,  -733,  -733,  -733,
     537,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,   615,   615,   615,   524,  -733,  -733,   529,  -733,
    -733,   539,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
    -733,  -733,  -733,   854,  -733,  -733,  -733,  -733,  -733,   533,
    -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,   538,
    -733,   326,   222,   222,   157,   584,   222,  -733,   233,  -733,
     222,  -733,    98,  -733,   527,   306,  1136,  1136,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
     535,   536,   540,  -733,  1249,  1249,  1359,  1304,   656,   170,
     541,  -733,  -733,   660,  -733,  -733,   222,  -733,  -733,   350,
     353,  -733,   532,   266,   357,   532,  -733,   222,  -733,   550,
     553,  -733,  -733,  -733,  -733,  -733,  -733,  -733,    70,  -733,
     537,  -733,   552,   556,   557,   362,  -733,   243,  -733,   561,
     559,  -733,   157,  -733,   560,  -733,   147,   562,   532,   549,
     547,   563,   670,   307,   674,  -733,   170,  -733,  -733,  -733,
      48,  -733,   566,  -733,   350,  1413,   663,   266,   702,   568,
     547,   222,  -733,  -733,  -733,  -733,   573,  -733,   547,   576,
      98,   679,  -733,   663,   663,   222,   583,  -733,   527,  1136,
    -733,    98,  -733,   679,   679,   532,  -733,   574,   222,   582,
    -733,  -733,  -733,   575,   578,   702,   592,   585,   702,  1136,
     663,   663,  -733,   663,   598,  -733,   679,  -733,   586,  -733,
    -733
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -733,  -733,   712,  -733,  -733,  -366,  -733,  -733,  -733,   368,
    -733,  -733,  -733,   366,  -733,  -733,  -733,   372,  -733,  -733,
    -733,   373,  -733,  -733,  -733,   376,  -620,  -733,  -733,  -733,
      87,  -733,  -733,  -733,  -733,  -733,   145,  -733,   138,  -733,
    -594,  -733,  -733,  -733,  -733,  -733,  -733,   327,  -733,  -733,
    -733,   330,  -733,  -733,  -733,   329,  -254,  -733,  -733,  -248,
    -733,  -733,  -733,   294,  -733,  -733,  -733,   299,  -733,  -733,
    -733,   289,  -733,  -733,  -733,   358,  -733,  -733,   352,  -733,
    -733,  -733,   349,  -733,  -733,   348,  -733,  -733,  -733,  -733,
     375,  -733,  -733,   369,     3,  -269,  -733,  -733,  -733,   389,
    -733,  -733,  -733,  -733,   387,  -733,  -733,  -733,  -733,  -733,
    -733,  -456,  -733,  -733,  -733,  -733,  -733,  -733,  -733,  -733,
    -569,  -733,  -733,  -555,  -733,  -733,  -733,  -733,  -733,  -733,
    -733,  -733,  -733,  -733,  -733,    72,  -247,  -733,  -733,    80,
    -670,  -733,  -733,  -733,   413,  -733,   -12,  -733,  -459,  -733,
    -733,  -127,  -733,  -733,   129,  -733,  -733,  -229,  -694,  -733,
    -733,  -581,   -26,   587,  -335,  -733,  -733,  -554,  -553,  -733,
    -733,  -733,  -733,   761,  -190,  -733,  -733,   490,  -733,   139,
    -733,   141,  -733,   -10,  -733,  -733,  -733,  -122,  -733,  -733,
    -124,  -400,  -244,  -733,  -733,  -733,   -61,  -733,  -733,  -732,
    -733,  -733,    10,  -733,  -546,  -678,  -169,  -733,   282,  -733,
    -677,  -676,  -302,  -733,   213,  -733,  -733,  -733,  -316,  -733,
     -57,  -733,  -733,    23,  -733,  -733,   195,    -2,  -733,   498,
    -128,    -9,  -179,  -641,  -733
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -518
static const yytype_int16 yytable[] =
{
     143,   123,   393,   148,   149,   150,   151,   152,   153,   154,
     155,   181,   182,   121,   157,   387,   286,   459,   166,   167,
     168,   388,   392,   397,   318,   553,   122,   727,   405,   398,
     401,   252,   303,   316,   406,   409,   668,   174,   177,   180,
     614,   386,   203,   611,   514,   515,   320,   385,   386,   810,
     191,   545,   386,   159,   544,   248,   501,   386,   125,   192,
      24,    25,   163,   288,   601,   202,   419,    24,    25,    24,
      25,    24,    25,   762,   207,   210,    24,    25,   583,   584,
     585,    24,    25,   128,   422,   602,   603,   604,   131,   199,
     215,   814,    24,    25,    32,   134,  -517,   169,   170,   763,
     891,   169,   170,   169,   170,   137,    32,   169,   170,   169,
     170,   144,   196,   289,   853,   798,   521,   211,   666,   497,
     415,     4,   211,   887,   775,   140,    56,   235,   498,   158,
     245,   732,   605,   807,   242,   387,   857,   448,   777,   780,
     781,   388,   392,    24,    25,   397,   472,   614,   458,   147,
     611,   398,   401,   405,   211,   236,   909,   237,   473,   406,
     409,   162,   416,   762,   160,   595,   170,   596,    32,   660,
     126,   305,   216,   164,   249,   502,   337,   594,  -517,   528,
     638,   211,   216,   549,   211,   219,   532,    26,   684,   763,
     524,   212,   907,   129,   449,   916,   220,   183,   132,   200,
     725,   551,   307,   943,   317,   666,   586,   135,   450,   171,
     307,   672,   587,   175,   775,   178,   319,   138,  -517,   205,
    -517,   208,   184,   145,   197,   290,   522,   246,   777,   780,
     781,   660,   360,   238,   779,   597,   573,   766,  -515,   239,
     193,   503,   540,   541,   186,   609,   933,   934,   474,   911,
     938,   610,   386,   212,   449,   213,   463,   941,   942,   464,
     601,   475,   385,   644,   645,    24,    25,   386,   457,   925,
     204,    24,    25,   955,   956,   950,   957,   928,   953,   447,
     959,   602,   603,   604,   169,   170,    24,    25,   631,   218,
      32,   583,   584,   585,   632,   872,   651,   652,   653,   654,
     873,   655,   223,   656,   874,    24,    25,   560,   561,   562,
     563,   564,   253,   254,   567,   534,   535,   536,   570,   337,
     664,   338,    56,   721,   779,   297,   665,   766,   605,   342,
     343,   298,   299,   300,   586,   260,   261,   480,   262,   481,
     587,   345,   346,   910,   348,   349,   263,   264,   265,   266,
     351,   352,   609,   321,   505,   506,   322,   226,   610,   243,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     229,   333,   232,   334,   335,   246,  -332,  -332,   354,   355,
     631,   513,   651,   652,   653,   654,   632,   655,   287,   656,
     257,   639,   640,   641,   642,   643,   269,   526,   646,   358,
     359,   650,    24,    25,   630,   530,   272,   664,   274,   733,
     701,   702,   703,   665,   277,   123,   708,   709,   710,   711,
     712,   713,   279,   187,   188,   189,   282,   121,   190,   371,
     372,   374,   375,    24,    25,    26,   383,   384,   211,   764,
     122,   395,   396,   403,   404,   765,   778,   576,   426,   427,
     292,   432,   433,   294,   577,   452,   453,   579,    32,   455,
     456,   591,   304,    37,    38,   687,   688,   690,   691,   846,
     449,   293,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   309,
      56,    57,    58,   913,   312,    59,   881,   882,    37,   598,
     885,   886,   361,   782,    60,   895,   896,    61,    62,   831,
     832,   622,   340,   627,   859,   860,   341,    67,   865,   866,
      68,   801,   344,   347,    69,    70,   350,   353,   799,   764,
     356,   357,   365,  -289,   366,   765,   778,   367,   368,   410,
     369,   370,   373,   376,   123,   377,   858,   378,   379,   380,
     419,   381,   637,   382,   394,   402,   121,   417,   422,   425,
     428,   429,   430,   431,   451,   454,   462,   460,   476,   122,
     465,   669,   670,   671,   466,   467,   468,   802,   803,   469,
     470,   471,   477,   478,   479,   483,   485,   487,   489,   679,
     680,   681,   682,   782,   491,   493,   494,   496,   504,   499,
     509,   516,   511,   683,   512,   517,   519,   542,   543,   555,
     548,   556,   557,   558,   568,   565,   566,   590,   615,   569,
     582,   571,   616,   897,   574,   592,   593,   939,   619,   898,
     899,   623,   720,   847,   848,   624,   625,   852,   626,   647,
     636,   855,   674,   676,   677,   678,   897,   954,   724,   723,
     698,   686,   898,   899,   689,   700,   693,   696,   704,   705,
     706,   729,   728,   734,   736,   731,   735,   738,   804,   796,
     797,   800,   805,   808,   812,   815,   816,   880,   809,   817,
     829,   839,   844,   833,   851,  -420,   870,   877,   888,   843,
     879,   123,   883,   889,   861,   862,   890,   892,   307,   863,
     912,   893,   894,   902,   914,   319,   920,   903,   906,   918,
     908,   386,   931,     5,   486,   488,   924,   811,   929,   484,
     949,   927,   945,   948,   490,   947,   667,   559,   492,   818,
     819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
     951,   958,   926,   936,   685,   580,   952,   960,   726,   550,
     552,   529,   578,   531,   527,   533,   935,   554,   525,   518,
     737,   508,   510,   699,   119,   692,    24,    25,    26,   946,
     695,   739,   495,   842,   915,   412,   917,   871,   849,   600,
     869,   123,   649,   673,     0,     0,   414,     0,     0,     0,
       0,    32,     0,     0,     0,     0,    37,    38,   315,     0,
     856,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,    56,    57,    58,     0,     0,    59,     0,
       0,     0,   123,   123,   868,   123,     0,    60,     0,     0,
      61,    62,     0,     0,     0,     0,   867,     0,     0,     0,
      67,     0,     0,    68,     0,     0,   904,    69,    70,     0,
       0,     0,     0,   386,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   601,     0,     0,
       0,     0,    24,    25,   740,     0,     0,     0,   741,   742,
     743,   744,   745,   746,   747,   748,   749,     0,   602,     0,
     750,   751,     0,   919,     0,     0,     0,    32,   930,     0,
       0,     0,    37,    38,   752,   753,   754,   755,   756,   940,
     757,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   758,    56,
      57,    58,     0,     0,    59,   759,     0,     0,     0,     0,
       0,     0,     0,    60,     0,     0,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,    68,
       0,     0,   760,     0,    70,     0,     0,   761,     0,     0,
       0,     6,     0,     7,     8,     9,    10,     0,    11,    12,
      13,    14,     0,     0,     0,    15,    16,    17,    18,    19,
      20,   841,    21,    22,    23,     0,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,    56,    57,    58,     0,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
      61,    62,    63,    64,    65,    66,     0,   386,     0,     0,
      67,     0,     0,    68,     0,     0,     0,    69,    70,    71,
      72,   601,     0,     0,     0,     0,    24,    25,   740,     0,
       0,     0,   741,   742,   743,   744,   745,   746,   747,   748,
     749,     0,   602,     0,   750,   751,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,    37,    38,   752,   753,
     754,   755,   756,     0,   757,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,   758,    56,    57,    58,    26,     0,    59,   759,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,     0,    68,     0,   156,   760,     0,    70,     0,
       0,   761,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       0,     0,    57,    58,     0,    26,    59,   715,   434,   435,
     436,   437,   438,   439,   440,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     441,     0,     0,     0,   156,     0,    70,     0,     0,     0,
       0,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    26,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,   716,   717,     0,     0,     0,
       0,     0,     0,   718,   505,   506,   719,     0,   156,     0,
       0,     0,     0,     0,     0,    70,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   864,    26,    57,    58,     0,     0,    59,
     759,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,     0,   156,     0,     0,     0,     0,     0,    70,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   864,    26,
      57,    58,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,   156,     0,
       0,     0,     0,     0,    70,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    26,     0,    57,    58,     0,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,   156,     0,     0,     0,     0,     0,    26,    70,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     0,    57,
      58,     0,     0,    59,     0,     0,     0,   156,     0,     0,
       0,     0,    60,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,    70,    57,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70
};

static const yytype_int16 yycheck[] =
{
      12,     3,   271,    15,    16,    17,    18,    19,    20,    21,
      22,    37,    38,     3,    23,   269,   185,   319,    30,    31,
      32,   269,   269,   277,   214,   425,     3,   668,   282,   277,
     277,   158,   201,   212,   282,   282,   582,    34,    35,    36,
     499,     9,    68,   499,   379,   380,   215,     4,     9,   727,
      59,   417,     9,    31,    30,    30,    30,     9,    30,    61,
      28,    29,    31,   191,    23,    67,    30,    28,    29,    28,
      29,    28,    29,   693,    71,    72,    28,    29,    14,    15,
      16,    28,    29,    32,    30,    44,    45,    46,    32,    32,
      30,   732,    28,    29,    53,    30,    30,    30,    31,   693,
      30,    30,    31,    30,    31,    30,    53,    30,    31,    30,
      31,    30,    30,    30,   808,   696,    32,    88,   574,   144,
     289,     0,    88,   855,   693,    27,    85,   139,   153,   142,
     156,   677,    91,   714,   146,   389,   814,   306,   693,   693,
     693,   389,   389,    28,    29,   399,   145,   606,   317,    31,
     606,   399,   399,   407,    88,    27,   888,    29,   157,   407,
     407,    31,   290,   783,   142,    30,    31,    32,    53,   116,
     142,   142,   112,   142,   149,   149,   152,   479,   112,   147,
     546,    88,   112,   147,    88,   130,   147,    30,   147,   783,
     147,   157,   886,   142,   144,   147,   141,    70,   142,   142,
     147,   147,   204,   935,   213,   661,   460,   142,   158,   142,
     212,   147,   460,   142,   783,   142,   142,   142,   152,   142,
     154,   142,    30,   142,   142,   142,   142,   153,   783,   783,
     783,   116,   244,   126,   693,   100,   143,   693,   142,   132,
      30,   368,   411,   412,    73,   499,   923,   924,   145,   890,
     928,   499,     9,   157,   144,    26,   142,   933,   934,   145,
      23,   158,     4,   565,   566,    28,    29,     9,   158,   910,
     157,    28,    29,   950,   951,   945,   953,   918,   948,   305,
     956,    44,    45,    46,    30,    31,    28,    29,   542,   100,
      53,    14,    15,    16,   542,   125,   149,   150,   151,   152,
     130,   154,   130,   156,   134,    28,    29,   434,   435,   436,
     437,   438,   130,   131,   441,    60,    61,    62,   445,   152,
     574,   154,    85,   658,   783,   129,   574,   783,    91,   143,
     144,   135,   136,   137,   588,   127,   128,    30,   130,    32,
     588,   143,   144,   889,   143,   144,   138,   139,   140,   141,
     143,   144,   606,   142,   109,   110,   145,   130,   606,    31,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     130,   160,   130,   162,   163,   153,   143,   144,   143,   144,
     634,   378,   149,   150,   151,   152,   634,   154,    70,   156,
     130,   560,   561,   562,   563,   564,   146,   394,   567,   143,
     144,   570,    28,    29,    30,   402,   100,   661,   130,   678,
     639,   640,   641,   661,   146,   417,   150,   151,   152,   153,
     154,   155,   130,    68,    69,    70,   146,   417,    73,   143,
     144,   143,   144,    28,    29,    30,   143,   144,    88,   693,
     417,   143,   144,   143,   144,   693,   693,   449,   143,   144,
     146,   143,   144,   130,   451,   143,   144,   454,    53,   143,
     144,   463,   142,    58,    59,   143,   144,   143,   144,   143,
     144,   146,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,   130,
      85,    86,    87,   893,   130,    90,   143,   144,    58,   496,
     143,   144,    30,   693,    99,   143,   144,   102,   103,   753,
     754,   523,   145,   539,   816,   817,   145,   112,   834,   835,
     115,   700,   145,   145,   119,   120,   145,   145,   697,   783,
     145,   145,    30,   150,    89,   783,   783,   143,   150,   159,
     145,   145,   145,   145,   546,   145,   815,   145,   145,   145,
      30,   145,   147,   145,   145,   145,   546,   146,    30,   145,
     145,   145,   145,   145,   145,   145,   143,   146,   161,   546,
     145,   583,   584,   585,   145,   145,   145,   704,   705,   145,
     145,   145,   145,   145,   142,   100,    32,    32,    30,   601,
     602,   603,   604,   783,    30,    30,   100,   145,    31,   146,
      31,    30,    32,   605,    32,   100,   142,   146,   148,    32,
     148,    32,    32,    32,   143,   142,   142,   148,    30,   144,
     143,   145,   133,   877,   146,   145,   145,   929,   124,   877,
     877,   148,   658,   802,   803,   148,   148,   806,   144,    90,
     143,   810,    14,   143,   143,   159,   900,   949,   660,   658,
     147,   145,   900,   900,   145,   142,   146,   145,   143,   143,
     113,    15,   674,    30,    32,   148,   148,    32,   142,   148,
     148,   148,   145,   142,    16,   150,   142,   846,   148,   142,
      65,   142,   144,   159,   100,   156,    30,   146,   857,   156,
      30,   693,   160,   143,   159,   159,   143,   145,   700,   159,
      30,   145,   145,   142,    30,   142,    43,   148,   148,   143,
     148,     9,    33,     1,   346,   349,   148,   729,   142,   343,
     142,   148,   148,   148,   352,   143,   581,   433,   355,   741,
     742,   743,   744,   745,   746,   747,   748,   749,   750,   751,
     148,   143,   911,   160,   606,   456,   161,   161,   661,   420,
     423,   399,   453,   404,   396,   407,   925,   427,   389,   384,
     688,   372,   375,   634,     3,   626,    28,    29,    30,   938,
     629,   691,   359,   783,   896,   285,   900,   838,   804,   497,
     837,   783,   569,   588,    -1,    -1,   288,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    59,   211,    -1,
     812,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    85,    86,    87,    -1,    -1,    90,    -1,
      -1,    -1,   834,   835,   836,   837,    -1,    99,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,   836,    -1,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,   882,   119,   120,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    -1,
      46,    47,    -1,   905,    -1,    -1,    -1,    53,   920,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,   931,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
      -1,    -1,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,
      -1,     3,    -1,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,   147,    24,    25,    26,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    85,    86,    87,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
     102,   103,   104,   105,   106,   107,    -1,     9,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,   119,   120,   121,
     122,    23,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    30,    -1,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,    -1,    59,   118,    -1,   120,    -1,
      -1,   123,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    30,    90,    32,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,    -1,    59,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    30,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,   108,   109,   110,   111,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    30,    86,    87,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    59,    -1,    -1,    -1,    -1,    -1,   120,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    30,
      86,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    59,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    30,    -1,    86,    87,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    59,    -1,    -1,    -1,    -1,    -1,    30,   120,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    -1,    -1,    90,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,   120,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   165,   166,   167,     0,   166,     3,     5,     6,     7,
       8,    10,    11,    12,    13,    17,    18,    19,    20,    21,
      22,    24,    25,    26,    28,    29,    30,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    85,    86,    87,    90,
      99,   102,   103,   104,   105,   106,   107,   112,   115,   119,
     120,   121,   122,   168,   169,   170,   174,   178,   182,   186,
     190,   196,   198,   204,   208,   212,   216,   220,   223,   224,
     228,   232,   236,   243,   250,   260,   264,   265,   272,   273,
     274,   275,   286,   288,   289,   290,   291,   292,   293,   294,
     295,   305,   309,   312,   326,   327,   331,   332,   335,   337,
     338,   366,   387,   391,   395,    30,   142,   187,    32,   142,
     171,    32,   142,   175,    30,   142,   179,    30,   142,   183,
      27,   310,   311,   310,    30,   142,   306,    31,   310,   310,
     310,   310,   310,   310,   310,   310,    59,   395,   142,    31,
     142,   261,    31,    31,   142,   266,   310,   310,   310,    30,
      31,   142,   251,   258,   258,   142,   237,   258,   142,   244,
     258,   326,   326,    70,    30,   315,    73,    68,    69,    70,
      73,   395,   391,    30,   217,   209,    30,   142,   213,    32,
     142,   225,   391,   326,   157,   142,   229,   258,   142,   233,
     258,    88,   157,    26,   336,    30,   112,   394,   100,   130,
     141,   188,   189,   130,   172,   173,   130,   176,   177,   130,
     180,   181,   130,   184,   185,   310,    27,    29,   126,   132,
     307,   308,   310,    31,   314,   326,   153,   370,    30,   149,
     221,   222,   315,   130,   131,   262,   263,   130,   267,   268,
     127,   128,   130,   138,   139,   140,   141,   253,   254,   146,
     255,   252,   100,   259,   130,   238,   239,   146,   240,   130,
     245,   246,   146,   247,   339,   333,   370,    70,   394,    30,
     142,   205,   146,   146,   130,   214,   215,   129,   135,   136,
     137,   226,   227,   370,   142,   142,   191,   391,   396,   130,
     230,   231,   130,   234,   235,   327,   396,   395,   338,   142,
     370,   142,   145,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   160,   162,   163,   367,   152,   154,   393,
     145,   145,   143,   144,   145,   143,   144,   145,   143,   144,
     145,   143,   144,   145,   143,   144,   145,   145,   143,   144,
     310,    30,   371,   372,   197,    30,    89,   143,   150,   145,
     145,   143,   144,   145,   143,   144,   145,   145,   145,   145,
     145,   145,   145,   143,   144,     4,     9,   220,   223,   256,
     257,   296,   300,   259,   145,   143,   144,   220,   223,   241,
     242,   300,   145,   143,   144,   220,   223,   248,   249,   300,
     159,   341,   341,   313,   393,   370,   394,   146,   206,    30,
     218,   219,    30,   210,   211,   145,   143,   144,   145,   145,
     145,   145,   143,   144,    92,    93,    94,    95,    96,    97,
      98,   114,   376,   377,   378,   391,   392,   326,   370,   144,
     158,   145,   143,   144,   145,   143,   144,   158,   370,   376,
     146,   388,   143,   142,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   157,   145,   158,   161,   145,   145,   142,
      30,    32,   355,   100,   189,    32,   173,    32,   177,    30,
     181,    30,   185,    30,   100,   308,   145,   144,   153,   146,
     200,    30,   149,   315,    31,   109,   110,   328,   263,    31,
     268,    32,    32,   258,   328,   328,    30,   100,   254,   142,
     297,    32,   142,   301,   147,   257,   258,   239,   147,   242,
     258,   246,   147,   249,    60,    61,    62,   342,   343,   344,
     370,   370,   146,   148,    30,   169,   207,   337,   148,   147,
     219,   147,   211,   355,   215,    32,    32,    32,    32,   227,
     315,   315,   315,   315,   315,   142,   142,   315,   143,   144,
     315,   145,   321,   143,   146,   192,   391,   258,   231,   258,
     235,   199,   143,    14,    15,    16,   220,   223,   389,   390,
     148,   391,   145,   145,   376,    30,    32,   100,   258,   373,
     372,    23,    44,    45,    46,    91,   201,   202,   203,   220,
     223,   275,   284,   287,   312,    30,   133,   298,   299,   124,
     302,   303,   310,   148,   148,   148,   144,   326,   340,   334,
      30,   220,   223,   316,   317,   318,   143,   147,   169,   370,
     370,   370,   370,   370,   376,   376,   370,    90,   368,   378,
     370,   149,   150,   151,   152,   154,   156,   322,   324,   325,
     116,   193,   194,   195,   220,   223,   275,   200,   368,   310,
     310,   310,   147,   390,    14,   269,   143,   143,   159,   310,
     310,   310,   310,   391,   147,   202,   145,   143,   144,   145,
     143,   144,   343,   146,   345,   345,   145,   320,   147,   318,
     142,   321,   321,   321,   143,   143,   113,   397,   150,   151,
     152,   153,   154,   155,   323,    32,   100,   101,   108,   111,
     326,   328,   329,   395,   310,   147,   194,   397,   310,    15,
     270,   148,   368,   259,    30,   148,    32,   299,    32,   303,
      30,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      46,    47,    60,    61,    62,    63,    64,    66,    84,    91,
     118,   123,   190,   204,   220,   223,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   287,   300,   312,
     331,   332,   338,   346,   347,   348,   357,   358,   360,   365,
     366,   379,   382,   384,   385,   387,   148,   148,   325,   370,
     148,   396,   315,   315,   142,   145,   369,   325,   142,   148,
     369,   310,    16,   271,   397,   150,   142,   142,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,    65,
     356,   356,   356,   159,   380,   381,   386,   383,   359,   142,
     349,   147,   347,   156,   144,   319,   143,   370,   370,   326,
     398,   100,   370,   322,   330,   370,   310,   369,   259,   376,
     376,   159,   159,   159,    84,   382,   382,   366,   391,   384,
      30,   360,   125,   130,   134,   350,   351,   146,   352,    30,
     370,   143,   144,   160,   363,   143,   144,   363,   370,   143,
     143,    30,   145,   145,   145,   143,   144,   220,   223,   300,
     353,   354,   142,   148,   326,   364,   148,   322,   148,   363,
     368,   397,    30,   355,    30,   351,   147,   354,   143,   391,
      43,   374,   300,   304,   148,   397,   370,   148,   397,   142,
     310,    33,   375,   374,   374,   370,   160,   361,   369,   376,
     310,   375,   375,   363,   362,   148,   370,   143,   148,   142,
     304,   148,   161,   304,   376,   374,   374,   374,   143,   375,
     161
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 524 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /*
             * We don't do these in parserEOF() because the parser is reading
             * ahead and that would be too early.
             */

            if (previousFile != NULL)
            {
                handleEOF();

                if (currentContext.prevmod != NULL)
                    handleEOM();

                free(previousFile);
                previousFile = NULL;
            }
    }
    break;

  case 51:
#line 590 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope == NULL)
                    yyerror("%TypeHeaderCode can only be used in a namespace, class or mapped type");

                appendCodeBlock(&scope->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 52:
#line 603 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                currentModule->defdocstring = convertFormat((yyvsp[(2) - (2)].defdocstring).name);
        }
    break;

  case 53:
#line 609 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.defdocstring).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 54:
#line 614 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defdocstring) = (yyvsp[(2) - (3)].defdocstring);
        }
    break;

  case 56:
#line 620 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defdocstring) = (yyvsp[(1) - (3)].defdocstring);

            switch ((yyvsp[(3) - (3)].defdocstring).token)
            {
            case TK_NAME: (yyval.defdocstring).name = (yyvsp[(3) - (3)].defdocstring).name; break;
            }
        }
    break;

  case 57:
#line 630 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defdocstring).token = TK_NAME;

            (yyval.defdocstring).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 58:
#line 637 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if ((currentModule->encoding = convertEncoding((yyvsp[(2) - (2)].defencoding).name)) == no_type)
                    yyerror("The %DefaultEncoding name must be one of \"ASCII\", \"Latin-1\", \"UTF-8\" or \"None\"");
            }
        }
    break;

  case 59:
#line 646 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.defencoding).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 60:
#line 651 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defencoding) = (yyvsp[(2) - (3)].defencoding);
        }
    break;

  case 62:
#line 657 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defencoding) = (yyvsp[(1) - (3)].defencoding);

            switch ((yyvsp[(3) - (3)].defencoding).token)
            {
            case TK_NAME: (yyval.defencoding).name = (yyvsp[(3) - (3)].defencoding).name; break;
            }
        }
    break;

  case 63:
#line 667 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defencoding).token = TK_NAME;

            (yyval.defencoding).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 64:
#line 674 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* Note that %Plugin is internal in SIP v4. */

            if (notSkipping())
                appendString(&currentSpec->plugins, (yyvsp[(2) - (2)].plugin).name);
        }
    break;

  case 65:
#line 682 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.plugin).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 66:
#line 687 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.plugin) = (yyvsp[(2) - (3)].plugin);
        }
    break;

  case 68:
#line 693 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.plugin) = (yyvsp[(1) - (3)].plugin);

            switch ((yyvsp[(3) - (3)].plugin).token)
            {
            case TK_NAME: (yyval.plugin).name = (yyvsp[(3) - (3)].plugin).name; break;
            }
        }
    break;

  case 69:
#line 703 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.plugin).token = TK_NAME;

            (yyval.plugin).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 70:
#line 710 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if ((yyvsp[(2) - (3)].veh).name == NULL)
                yyerror("%VirtualErrorHandler must have a 'name' argument");

            if (notSkipping())
            {
                virtErrorHandler *veh, **tailp;

                /* Check there isn't already a handler with the same name. */
                for (tailp = &currentSpec->errorhandlers; (veh = *tailp) != NULL; tailp = &veh->next)
                    if (strcmp(veh->name, (yyvsp[(2) - (3)].veh).name) == 0)
                        break;

                if (veh != NULL)
                    yyerror("A virtual error handler with that name has already been defined");

                veh = sipMalloc(sizeof (virtErrorHandler));

                veh->name = (yyvsp[(2) - (3)].veh).name;
                appendCodeBlock(&veh->code, (yyvsp[(3) - (3)].codeb));
                veh->mod = currentModule;
                veh->index = currentModule->nrvirterrorhandlers++;
                veh->next = NULL;

                *tailp = veh;
            }
        }
    break;

  case 71:
#line 739 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.veh).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 72:
#line 744 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.veh) = (yyvsp[(2) - (3)].veh);
        }
    break;

  case 74:
#line 750 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.veh) = (yyvsp[(1) - (3)].veh);

            switch ((yyvsp[(3) - (3)].veh).token)
            {
            case TK_NAME: (yyval.veh).name = (yyvsp[(3) - (3)].veh).name; break;
            }
        }
    break;

  case 75:
#line 760 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.veh).token = TK_NAME;

            (yyval.veh).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 76:
#line 767 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                apiVersionRangeDef *avd;

                if (findAPI(currentSpec, (yyvsp[(2) - (2)].api).name) != NULL)
                    yyerror("The API name in the %API directive has already been defined");

                if ((yyvsp[(2) - (2)].api).version < 1)
                    yyerror("The version number in the %API directive must be greater than or equal to 1");

                avd = sipMalloc(sizeof (apiVersionRangeDef));

                avd->api_name = cacheName(currentSpec, (yyvsp[(2) - (2)].api).name);
                avd->from = (yyvsp[(2) - (2)].api).version;
                avd->to = -1;

                avd->next = currentModule->api_versions;
                currentModule->api_versions = avd;

                if (inMainModule())
                    setIsUsedName(avd->api_name);
            }
        }
    break;

  case 77:
#line 793 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            deprecated("%API name and version number should be specified using the 'name' and 'version' arguments");

            (yyval.api).name = (yyvsp[(1) - (2)].text);
            (yyval.api).version = (yyvsp[(2) - (2)].number);
        }
    break;

  case 78:
#line 801 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.api) = (yyvsp[(2) - (3)].api);
        }
    break;

  case 80:
#line 807 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.api) = (yyvsp[(1) - (3)].api);

            switch ((yyvsp[(3) - (3)].api).token)
            {
            case TK_NAME: (yyval.api).name = (yyvsp[(3) - (3)].api).name; break;
            case TK_VERSION: (yyval.api).version = (yyvsp[(3) - (3)].api).version; break;
            }
        }
    break;

  case 81:
#line 818 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.api).token = TK_NAME;

            (yyval.api).name = (yyvsp[(3) - (3)].text);
            (yyval.api).version = 0;
        }
    break;

  case 82:
#line 824 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.api).token = TK_VERSION;

            (yyval.api).name = NULL;
            (yyval.api).version = (yyvsp[(3) - (3)].number);
        }
    break;

  case 83:
#line 832 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "Default",
                    "PyName",
                    NULL
                };

                exceptionDef *xd;
                const char *pyname;

                checkAnnos(&(yyvsp[(4) - (5)].optflags), annos);

                if (currentSpec->genc)
                    yyerror("%Exception not allowed in a C module");

                if ((yyvsp[(5) - (5)].exception).raise_code == NULL)
                    yyerror("%Exception must have a %RaiseCode sub-directive");

                pyname = getPythonName(currentModule, &(yyvsp[(4) - (5)].optflags), scopedNameTail((yyvsp[(2) - (5)].scpvalp)));

                checkAttributes(currentSpec, currentModule, NULL, NULL,
                        pyname, FALSE);

                xd = findException(currentSpec, (yyvsp[(2) - (5)].scpvalp), TRUE);

                if (xd->cd != NULL)
                    yyerror("%Exception name has already been seen as a class name - it must be defined before being used");

                if (xd->iff->module != NULL)
                    yyerror("The %Exception has already been defined");

                /* Complete the definition. */
                xd->iff->module = currentModule;
                appendCodeBlock(&xd->iff->hdrcode, (yyvsp[(5) - (5)].exception).type_header_code);
                xd->pyname = pyname;
                xd->bibase = (yyvsp[(3) - (5)].exceptionbase).bibase;
                xd->base = (yyvsp[(3) - (5)].exceptionbase).base;
                appendCodeBlock(&xd->raisecode, (yyvsp[(5) - (5)].exception).raise_code);

                if (getOptFlag(&(yyvsp[(4) - (5)].optflags), "Default", bool_flag) != NULL)
                    currentModule->defexception = xd;

                if (xd->bibase != NULL || xd->base != NULL)
                    xd->exceptionnr = currentModule->nrexceptions++;
            }
        }
    break;

  case 84:
#line 882 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.exceptionbase).bibase = NULL;
            (yyval.exceptionbase).base = NULL;
        }
    break;

  case 85:
#line 886 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            exceptionDef *xd;

            (yyval.exceptionbase).bibase = NULL;
            (yyval.exceptionbase).base = NULL;

            /* See if it is a defined exception. */
            for (xd = currentSpec->exceptions; xd != NULL; xd = xd->next)
                if (compareScopedNames(xd->iff->fqcname, (yyvsp[(2) - (3)].scpvalp)) == 0)
                {
                    (yyval.exceptionbase).base = xd;
                    break;
                }

            if (xd == NULL && (yyvsp[(2) - (3)].scpvalp)->next == NULL && strncmp((yyvsp[(2) - (3)].scpvalp)->name, "SIP_", 4) == 0)
            {
                /* See if it is a builtin exception. */

                static char *builtins[] = {
                    "Exception",
                    "StopIteration",
                    "StandardError",
                    "ArithmeticError",
                    "LookupError",
                    "AssertionError",
                    "AttributeError",
                    "EOFError",
                    "FloatingPointError",
                    "EnvironmentError",
                    "IOError",
                    "OSError",
                    "ImportError",
                    "IndexError",
                    "KeyError",
                    "KeyboardInterrupt",
                    "MemoryError",
                    "NameError",
                    "OverflowError",
                    "RuntimeError",
                    "NotImplementedError",
                    "SyntaxError",
                    "IndentationError",
                    "TabError",
                    "ReferenceError",
                    "SystemError",
                    "SystemExit",
                    "TypeError",
                    "UnboundLocalError",
                    "UnicodeError",
                    "UnicodeEncodeError",
                    "UnicodeDecodeError",
                    "UnicodeTranslateError",
                    "ValueError",
                    "ZeroDivisionError",
                    "WindowsError",
                    "VMSError",
                    NULL
                };

                char **cp;

                for (cp = builtins; *cp != NULL; ++cp)
                    if (strcmp((yyvsp[(2) - (3)].scpvalp)->name + 4, *cp) == 0)
                    {
                        (yyval.exceptionbase).bibase = *cp;
                        break;
                    }
            }

            if ((yyval.exceptionbase).bibase == NULL && (yyval.exceptionbase).base == NULL)
                yyerror("Unknown exception base type");
        }
    break;

  case 86:
#line 960 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.exception) = (yyvsp[(2) - (4)].exception);
        }
    break;

  case 88:
#line 966 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.exception) = (yyvsp[(1) - (2)].exception);

            switch ((yyvsp[(2) - (2)].exception).token)
            {
            case TK_RAISECODE: (yyval.exception).raise_code = (yyvsp[(2) - (2)].exception).raise_code; break;
            case TK_TYPEHEADERCODE: (yyval.exception).type_header_code = (yyvsp[(2) - (2)].exception).type_header_code; break;
            }
        }
    break;

  case 89:
#line 977 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.exception).token = TK_IF;
        }
    break;

  case 90:
#line 980 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.exception).token = TK_END;
        }
    break;

  case 91:
#line 983 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.exception).token = TK_RAISECODE;
                (yyval.exception).raise_code = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.exception).token = 0;
                (yyval.exception).raise_code = NULL;
            }

            (yyval.exception).type_header_code = NULL;
        }
    break;

  case 92:
#line 997 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.exception).token = TK_TYPEHEADERCODE;
                (yyval.exception).type_header_code = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.exception).token = 0;
                (yyval.exception).type_header_code = NULL;
            }

            (yyval.exception).raise_code = NULL;
        }
    break;

  case 93:
#line 1013 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 94:
#line 1018 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "AllowNone",
                    "API",
                    "DocType",
                    "NoRelease",
                    "PyName",
                    NULL
                };

                checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

                currentMappedType = newMappedType(currentSpec, &(yyvsp[(2) - (3)].memArg), &(yyvsp[(3) - (3)].optflags));
            }
        }
    break;

  case 96:
#line 1037 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                static const char *annos[] = {
                    "AllowNone",
                    "DocType",
                    "NoRelease",
                    NULL
                };

                int a;
                mappedTypeTmplDef *mtt;
                ifaceFileDef *iff;

                checkAnnos(&(yyvsp[(4) - (4)].optflags), annos);

                if (currentSpec->genc)
                    yyerror("%MappedType templates not allowed in a C module");

                /*
                 * Check the template arguments are basic types or simple
                 * names.
                 */
                for (a = 0; a < (yyvsp[(1) - (4)].signature).nrArgs; ++a)
                {
                    argDef *ad = &(yyvsp[(1) - (4)].signature).args[a];

                    if (ad->atype == defined_type && ad->u.snd->next != NULL)
                        yyerror("%MappedType template arguments must be simple names");
                }

                if ((yyvsp[(3) - (4)].memArg).atype != template_type)
                    yyerror("%MappedType template must map a template type");

                /* Check a template hasn't already been provided. */
                for (mtt = currentSpec->mappedtypetemplates; mtt != NULL; mtt = mtt->next)
                    if (compareScopedNames(mtt->mt->type.u.td->fqname, (yyvsp[(3) - (4)].memArg).u.td->fqname) == 0 && sameTemplateSignature(&mtt->mt->type.u.td->types, &(yyvsp[(3) - (4)].memArg).u.td->types, TRUE))
                        yyerror("%MappedType template for this type has already been defined");

                (yyvsp[(3) - (4)].memArg).nrderefs = 0;
                (yyvsp[(3) - (4)].memArg).argflags = 0;

                mtt = sipMalloc(sizeof (mappedTypeTmplDef));

                mtt->sig = (yyvsp[(1) - (4)].signature);
                mtt->mt = allocMappedType(currentSpec, &(yyvsp[(3) - (4)].memArg));
                mappedTypeAnnos(mtt->mt, &(yyvsp[(4) - (4)].optflags));
                mtt->next = currentSpec->mappedtypetemplates;

                currentSpec->mappedtypetemplates = mtt;

                currentMappedType = mtt->mt;

                /* Create a dummy interface file. */
                iff = sipMalloc(sizeof (ifaceFileDef));
                iff->hdrcode = NULL;
                mtt->mt->iff = iff;
            }
        }
    break;

  case 98:
#line 1098 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convfromcode == NULL)
                    yyerror("%MappedType must have a %ConvertFromTypeCode directive");

                if (currentMappedType->convtocode == NULL)
                    yyerror("%MappedType must have a %ConvertToTypeCode directive");

                currentMappedType = NULL;
            }
        }
    break;

  case 103:
#line 1118 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 104:
#line 1122 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentMappedType->typecode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 105:
#line 1126 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convfromcode != NULL)
                    yyerror("%MappedType has more than one %ConvertFromTypeCode directive");

                appendCodeBlock(&currentMappedType->convfromcode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 106:
#line 1135 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->convtocode != NULL)
                    yyerror("%MappedType has more than one %ConvertToTypeCode directive");

                appendCodeBlock(&currentMappedType->convtocode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 107:
#line 1144 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (currentMappedType->instancecode != NULL)
                    yyerror("%MappedType has more than one %InstanceCode directive");

                appendCodeBlock(&currentMappedType->instancecode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 110:
#line 1157 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                applyTypeFlags(currentModule, &(yyvsp[(2) - (13)].memArg), &(yyvsp[(9) - (13)].optflags));

                (yyvsp[(5) - (13)].signature).result = (yyvsp[(2) - (13)].memArg);

                newFunction(currentSpec, currentModule, NULL,
                        currentMappedType, 0, TRUE, FALSE, FALSE, FALSE, (yyvsp[(3) - (13)].text),
                        &(yyvsp[(5) - (13)].signature), (yyvsp[(7) - (13)].number), FALSE, &(yyvsp[(9) - (13)].optflags), (yyvsp[(13) - (13)].codeb), NULL, (yyvsp[(8) - (13)].throwlist), (yyvsp[(10) - (13)].optsignature), (yyvsp[(12) - (13)].codeb));
            }
        }
    break;

  case 111:
#line 1171 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("namespace definition not allowed in a C module");

            if (notSkipping())
            {
                classDef *ns, *c_scope;
                ifaceFileDef *scope;

                if ((c_scope = currentScope()) != NULL)
                    scope = c_scope->iff;
                else
                    scope = NULL;

                ns = newClass(currentSpec, namespace_iface, NULL,
                        text2scopedName(scope, (yyvsp[(2) - (2)].text)), NULL);

                pushScope(ns);

                sectionFlags = 0;
            }
        }
    break;

  case 112:
#line 1192 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (inMainModule())
                {
                    classDef *ns = currentScope();

                    setIsUsedName(ns->iff->name);
                    setIsUsedName(ns->pyname);
                }

                popScope();
            }
        }
    break;

  case 117:
#line 1216 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == platform_qualifier)
                        yyerror("%Platforms has already been defined for this module");
            }
        }
    break;

  case 118:
#line 1226 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;
                int nrneeded;

                /* Check that exactly one platform in the set was requested. */
                nrneeded = 0;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == platform_qualifier && selectedQualifier(neededQualifiers, qd))
                        ++nrneeded;

                if (nrneeded > 1)
                    yyerror("No more than one of these %Platforms must be specified with the -t flag");
            }
        }
    break;

  case 121:
#line 1249 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            newQualifier(currentModule,-1,-1,(yyvsp[(1) - (1)].text),platform_qualifier);
        }
    break;

  case 122:
#line 1254 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                newQualifier(currentModule, -1, -1, (yyvsp[(2) - (2)].feature).name,
                        feature_qualifier);
        }
    break;

  case 123:
#line 1261 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.feature).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 124:
#line 1266 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.feature) = (yyvsp[(2) - (3)].feature);
        }
    break;

  case 126:
#line 1272 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.feature) = (yyvsp[(1) - (3)].feature);

            switch ((yyvsp[(3) - (3)].feature).token)
            {
            case TK_NAME: (yyval.feature).name = (yyvsp[(3) - (3)].feature).name; break;
            }
        }
    break;

  case 127:
#line 1282 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.feature).token = TK_NAME;

            (yyval.feature).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 128:
#line 1289 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            currentTimelineOrder = 0;
        }
    break;

  case 129:
#line 1292 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                qualDef *qd;
                int nrneeded;

                /*
                 * Check that exactly one time slot in the set was requested.
                 */
                nrneeded = 0;

                for (qd = currentModule->qualifiers; qd != NULL; qd = qd->next)
                    if (qd->qtype == time_qualifier && selectedQualifier(neededQualifiers, qd))
                        ++nrneeded;

                if (nrneeded > 1)
                    yyerror("At most one of this %Timeline must be specified with the -t flag");

                currentModule->nrtimelines++;
            }
        }
    break;

  case 132:
#line 1319 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            newQualifier(currentModule, currentModule->nrtimelines,
                    currentTimelineOrder++, (yyvsp[(1) - (1)].text), time_qualifier);
        }
    break;

  case 133:
#line 1325 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (skipStackPtr >= MAX_NESTED_IF)
                yyerror("Internal error: increase the value of MAX_NESTED_IF");

            /* Nested %Ifs are implicit logical ands. */

            if (skipStackPtr > 0)
                (yyvsp[(3) - (4)].boolean) = ((yyvsp[(3) - (4)].boolean) && skipStack[skipStackPtr - 1]);

            skipStack[skipStackPtr++] = (yyvsp[(3) - (4)].boolean);
        }
    break;

  case 134:
#line 1338 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.boolean) = platOrFeature((yyvsp[(1) - (1)].text),FALSE);
        }
    break;

  case 135:
#line 1341 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.boolean) = platOrFeature((yyvsp[(2) - (2)].text),TRUE);
        }
    break;

  case 136:
#line 1344 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.boolean) = (platOrFeature((yyvsp[(3) - (3)].text),FALSE) || (yyvsp[(1) - (3)].boolean));
        }
    break;

  case 137:
#line 1347 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.boolean) = (platOrFeature((yyvsp[(4) - (4)].text),TRUE) || (yyvsp[(1) - (4)].boolean));
        }
    break;

  case 139:
#line 1353 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.boolean) = timePeriod((yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        }
    break;

  case 140:
#line 1358 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (skipStackPtr-- <= 0)
                yyerror("Too many %End directives");
        }
    break;

  case 141:
#line 1364 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            optFlag *of;

            if ((yyvsp[(3) - (3)].optflags).nrFlags != 0)
                deprecated("%License annotations are deprecated, use arguments instead");

            if ((yyvsp[(2) - (3)].license).type == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Type", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).type = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).licensee == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Licensee", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).licensee = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).signature == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Signature", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).signature = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).timestamp == NULL)
                if ((of = getOptFlag(&(yyvsp[(3) - (3)].optflags), "Timestamp", string_flag)) != NULL)
                    (yyvsp[(2) - (3)].license).timestamp = of->fvalue.sval;

            if ((yyvsp[(2) - (3)].license).type == NULL)
                yyerror("%License must have a 'type' argument");

            if (notSkipping())
            {
                currentModule->license = sipMalloc(sizeof (licenseDef));

                currentModule->license->type = (yyvsp[(2) - (3)].license).type;
                currentModule->license->licensee = (yyvsp[(2) - (3)].license).licensee;
                currentModule->license->sig = (yyvsp[(2) - (3)].license).signature;
                currentModule->license->timestamp = (yyvsp[(2) - (3)].license).timestamp;
            }
        }
    break;

  case 142:
#line 1401 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 143:
#line 1409 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.license).type = (yyvsp[(1) - (1)].text);
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 144:
#line 1415 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.license) = (yyvsp[(2) - (3)].license);
        }
    break;

  case 146:
#line 1421 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.license) = (yyvsp[(1) - (3)].license);

            switch ((yyvsp[(3) - (3)].license).token)
            {
            case TK_TYPE: (yyval.license).type = (yyvsp[(3) - (3)].license).type; break;
            case TK_LICENSEE: (yyval.license).licensee = (yyvsp[(3) - (3)].license).licensee; break;
            case TK_SIGNATURE: (yyval.license).signature = (yyvsp[(3) - (3)].license).signature; break;
            case TK_TIMESTAMP: (yyval.license).timestamp = (yyvsp[(3) - (3)].license).timestamp; break;
            }
        }
    break;

  case 147:
#line 1434 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.license).token = TK_NAME;

            (yyval.license).type = (yyvsp[(3) - (3)].text);
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 148:
#line 1442 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.license).token = TK_LICENSEE;

            (yyval.license).type = NULL;
            (yyval.license).licensee = (yyvsp[(3) - (3)].text);
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = NULL;
        }
    break;

  case 149:
#line 1450 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.license).token = TK_SIGNATURE;

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = (yyvsp[(3) - (3)].text);
            (yyval.license).timestamp = NULL;
        }
    break;

  case 150:
#line 1458 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.license).token = TK_TIMESTAMP;

            (yyval.license).type = NULL;
            (yyval.license).licensee = NULL;
            (yyval.license).signature = NULL;
            (yyval.license).timestamp = (yyvsp[(3) - (3)].text);
        }
    break;

  case 151:
#line 1468 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defmetatype != NULL)
                    yyerror("%DefaultMetatype has already been defined for this module");

                currentModule->defmetatype = cacheName(currentSpec, (yyvsp[(2) - (2)].defmetatype).name);
            }
        }
    break;

  case 152:
#line 1479 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.defmetatype).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 153:
#line 1484 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defmetatype) = (yyvsp[(2) - (3)].defmetatype);
        }
    break;

  case 155:
#line 1490 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defmetatype) = (yyvsp[(1) - (3)].defmetatype);

            switch ((yyvsp[(3) - (3)].defmetatype).token)
            {
            case TK_NAME: (yyval.defmetatype).name = (yyvsp[(3) - (3)].defmetatype).name; break;
            }
        }
    break;

  case 156:
#line 1500 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defmetatype).token = TK_NAME;

            (yyval.defmetatype).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 157:
#line 1507 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                if (currentModule->defsupertype != NULL)
                    yyerror("%DefaultSupertype has already been defined for this module");

                currentModule->defsupertype = cacheName(currentSpec, (yyvsp[(2) - (2)].defsupertype).name);
            }
        }
    break;

  case 158:
#line 1518 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.defsupertype).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 159:
#line 1523 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defsupertype) = (yyvsp[(2) - (3)].defsupertype);
        }
    break;

  case 161:
#line 1529 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defsupertype) = (yyvsp[(1) - (3)].defsupertype);

            switch ((yyvsp[(3) - (3)].defsupertype).token)
            {
            case TK_NAME: (yyval.defsupertype).name = (yyvsp[(3) - (3)].defsupertype).name; break;
            }
        }
    break;

  case 162:
#line 1539 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.defsupertype).token = TK_NAME;

            (yyval.defsupertype).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 163:
#line 1546 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                /* Make sure this is the first mention of a module. */
                if (currentSpec->module != currentModule)
                    yyerror("A %ConsolidatedModule cannot be %Imported");

                if (currentModule->fullname != NULL)
                    yyerror("%ConsolidatedModule must appear before any %Module or %CModule directive");

                setModuleName(currentSpec, currentModule, (yyvsp[(2) - (3)].consmodule).name);
                appendCodeBlock(&currentModule->docstring, (yyvsp[(3) - (3)].consmodule).docstring);

                setIsConsolidated(currentModule);
            }
        }
    break;

  case 164:
#line 1564 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.consmodule).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 165:
#line 1569 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(2) - (3)].consmodule);
        }
    break;

  case 167:
#line 1575 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(1) - (3)].consmodule);

            switch ((yyvsp[(3) - (3)].consmodule).token)
            {
            case TK_NAME: (yyval.consmodule).name = (yyvsp[(3) - (3)].consmodule).name; break;
            }
        }
    break;

  case 168:
#line 1585 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.consmodule).token = TK_NAME;

            (yyval.consmodule).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 169:
#line 1592 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.consmodule).token = 0;
            (yyval.consmodule).docstring = NULL;
        }
    break;

  case 170:
#line 1596 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(2) - (4)].consmodule);
        }
    break;

  case 172:
#line 1602 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.consmodule) = (yyvsp[(1) - (2)].consmodule);

            switch ((yyvsp[(2) - (2)].consmodule).token)
            {
            case TK_DOCSTRING: (yyval.consmodule).docstring = (yyvsp[(2) - (2)].consmodule).docstring; break;
            }
        }
    break;

  case 173:
#line 1612 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.consmodule).token = TK_IF;
        }
    break;

  case 174:
#line 1615 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.consmodule).token = TK_END;
        }
    break;

  case 175:
#line 1618 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.consmodule).token = TK_DOCSTRING;
                (yyval.consmodule).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.consmodule).token = 0;
                (yyval.consmodule).docstring = NULL;
            }
        }
    break;

  case 176:
#line 1632 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                /* Make sure this is the first mention of a module. */
                if (currentSpec->module != currentModule)
                    yyerror("A %CompositeModule cannot be %Imported");

                if (currentModule->fullname != NULL)
                    yyerror("%CompositeModule must appear before any %Module directive");

                setModuleName(currentSpec, currentModule, (yyvsp[(2) - (3)].compmodule).name);
                appendCodeBlock(&currentModule->docstring, (yyvsp[(3) - (3)].compmodule).docstring);

                setIsComposite(currentModule);
            }
        }
    break;

  case 177:
#line 1650 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.compmodule).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 178:
#line 1655 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(2) - (3)].compmodule);
        }
    break;

  case 180:
#line 1661 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(1) - (3)].compmodule);

            switch ((yyvsp[(3) - (3)].compmodule).token)
            {
            case TK_NAME: (yyval.compmodule).name = (yyvsp[(3) - (3)].compmodule).name; break;
            }
        }
    break;

  case 181:
#line 1671 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.compmodule).token = TK_NAME;

            (yyval.compmodule).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 182:
#line 1678 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.compmodule).token = 0;
            (yyval.compmodule).docstring = NULL;
        }
    break;

  case 183:
#line 1682 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(2) - (4)].compmodule);
        }
    break;

  case 185:
#line 1688 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.compmodule) = (yyvsp[(1) - (2)].compmodule);

            switch ((yyvsp[(2) - (2)].compmodule).token)
            {
            case TK_DOCSTRING: (yyval.compmodule).docstring = (yyvsp[(2) - (2)].compmodule).docstring; break;
            }
        }
    break;

  case 186:
#line 1698 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.compmodule).token = TK_IF;
        }
    break;

  case 187:
#line 1701 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.compmodule).token = TK_END;
        }
    break;

  case 188:
#line 1704 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.compmodule).token = TK_DOCSTRING;
                (yyval.compmodule).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.compmodule).token = 0;
                (yyval.compmodule).docstring = NULL;
            }
        }
    break;

  case 189:
#line 1718 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if ((yyvsp[(2) - (3)].module).name == NULL)
                yyerror("%Module must have a 'name' argument");

            if (notSkipping())
                currentModule = configureModule(currentSpec, currentModule,
                        currentContext.filename, (yyvsp[(2) - (3)].module).name, (yyvsp[(2) - (3)].module).version,
                        (yyvsp[(2) - (3)].module).c_module, (yyvsp[(2) - (3)].module).kwargs, (yyvsp[(2) - (3)].module).use_arg_names,
                        (yyvsp[(2) - (3)].module).all_raise_py_exc, (yyvsp[(2) - (3)].module).def_error_handler,
                        (yyvsp[(3) - (3)].module).docstring);
        }
    break;

  case 190:
#line 1729 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            deprecated("%CModule is deprecated, use %Module and the 'language' argument instead");

            if (notSkipping())
                currentModule = configureModule(currentSpec, currentModule,
                        currentContext.filename, (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].number), TRUE, defaultKwArgs,
                        FALSE, FALSE, NULL, NULL);
        }
    break;

  case 191:
#line 1739 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {resetLexerState();}
    break;

  case 192:
#line 1739 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if ((yyvsp[(3) - (3)].number) >= 0)
                deprecated("%Module version number should be specified using the 'version' argument");

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = (yyvsp[(1) - (3)].text);
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).def_error_handler = NULL;
            (yyval.module).version = (yyvsp[(3) - (3)].number);
        }
    break;

  case 193:
#line 1751 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module) = (yyvsp[(2) - (3)].module);
        }
    break;

  case 195:
#line 1757 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module) = (yyvsp[(1) - (3)].module);

            switch ((yyvsp[(3) - (3)].module).token)
            {
            case TK_KWARGS: (yyval.module).kwargs = (yyvsp[(3) - (3)].module).kwargs; break;
            case TK_LANGUAGE: (yyval.module).c_module = (yyvsp[(3) - (3)].module).c_module; break;
            case TK_NAME: (yyval.module).name = (yyvsp[(3) - (3)].module).name; break;
            case TK_USEARGNAMES: (yyval.module).use_arg_names = (yyvsp[(3) - (3)].module).use_arg_names; break;
            case TK_ALLRAISEPYEXC: (yyval.module).all_raise_py_exc = (yyvsp[(3) - (3)].module).all_raise_py_exc; break;
            case TK_DEFERRORHANDLER: (yyval.module).def_error_handler = (yyvsp[(3) - (3)].module).def_error_handler; break;
            case TK_VERSION: (yyval.module).version = (yyvsp[(3) - (3)].module).version; break;
            }
        }
    break;

  case 196:
#line 1773 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module).token = TK_KWARGS;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = convertKwArgs((yyvsp[(3) - (3)].text));
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).def_error_handler = NULL;
            (yyval.module).version = -1;
        }
    break;

  case 197:
#line 1784 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module).token = TK_LANGUAGE;

            if (strcmp((yyvsp[(3) - (3)].text), "C++") == 0)
                (yyval.module).c_module = FALSE;
            else if (strcmp((yyvsp[(3) - (3)].text), "C") == 0)
                (yyval.module).c_module = TRUE;
            else
                yyerror("%Module 'language' argument must be either \"C++\" or \"C\"");

            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).def_error_handler = NULL;
            (yyval.module).version = -1;
        }
    break;

  case 198:
#line 1801 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module).token = TK_NAME;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = (yyvsp[(3) - (3)].text);
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).def_error_handler = NULL;
            (yyval.module).version = -1;
        }
    break;

  case 199:
#line 1812 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module).token = TK_USEARGNAMES;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = (yyvsp[(3) - (3)].boolean);
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).def_error_handler = NULL;
            (yyval.module).version = -1;
        }
    break;

  case 200:
#line 1823 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module).token = TK_ALLRAISEPYEXC;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).all_raise_py_exc = (yyvsp[(3) - (3)].boolean);
            (yyval.module).def_error_handler = NULL;
            (yyval.module).version = -1;
        }
    break;

  case 201:
#line 1834 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module).token = TK_DEFERRORHANDLER;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).def_error_handler = (yyvsp[(3) - (3)].text);
            (yyval.module).version = -1;
        }
    break;

  case 202:
#line 1845 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if ((yyvsp[(3) - (3)].number) < 0)
                yyerror("%Module 'version' argument cannot be negative");

            (yyval.module).token = TK_VERSION;

            (yyval.module).c_module = FALSE;
            (yyval.module).kwargs = defaultKwArgs;
            (yyval.module).name = NULL;
            (yyval.module).use_arg_names = FALSE;
            (yyval.module).all_raise_py_exc = FALSE;
            (yyval.module).def_error_handler = NULL;
            (yyval.module).version = (yyvsp[(3) - (3)].number);
        }
    break;

  case 203:
#line 1861 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module).token = 0;
            (yyval.module).docstring = NULL;
        }
    break;

  case 204:
#line 1865 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module) = (yyvsp[(2) - (4)].module);
        }
    break;

  case 206:
#line 1871 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module) = (yyvsp[(1) - (2)].module);

            switch ((yyvsp[(2) - (2)].module).token)
            {
            case TK_DOCSTRING: (yyval.module).docstring = (yyvsp[(2) - (2)].module).docstring; break;
            }
        }
    break;

  case 207:
#line 1881 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module).token = TK_IF;
        }
    break;

  case 208:
#line 1884 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module).token = TK_END;
        }
    break;

  case 209:
#line 1887 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.module).token = TK_AUTOPYNAME;
        }
    break;

  case 210:
#line 1890 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.module).token = TK_DOCSTRING;
                (yyval.module).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.module).token = 0;
                (yyval.module).docstring = NULL;
            }
        }
    break;

  case 212:
#line 1905 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /*
             * The grammar design is a bit broken and this is the easiest way
             * to allow periods in names.
             */

            char *cp;

            for (cp = (yyvsp[(1) - (1)].text); *cp != '\0'; ++cp)
                if (*cp != '.' && *cp != '_' && !isalnum(*cp))
                    yyerror("Invalid character in name");

            (yyval.text) = (yyvsp[(1) - (1)].text);
        }
    break;

  case 213:
#line 1921 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.number) = -1;
        }
    break;

  case 215:
#line 1927 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if ((yyvsp[(2) - (2)].include).name == NULL)
                yyerror("%Include must have a 'name' argument");

            if (notSkipping())
                parseFile(NULL, (yyvsp[(2) - (2)].include).name, NULL, (yyvsp[(2) - (2)].include).optional);
        }
    break;

  case 216:
#line 1936 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.include).name = (yyvsp[(1) - (1)].text);
            (yyval.include).optional = FALSE;
        }
    break;

  case 217:
#line 1942 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.include) = (yyvsp[(2) - (3)].include);
        }
    break;

  case 219:
#line 1948 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.include) = (yyvsp[(1) - (3)].include);

            switch ((yyvsp[(3) - (3)].include).token)
            {
            case TK_NAME: (yyval.include).name = (yyvsp[(3) - (3)].include).name; break;
            case TK_OPTIONAL: (yyval.include).optional = (yyvsp[(3) - (3)].include).optional; break;
            }
        }
    break;

  case 220:
#line 1959 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.include).token = TK_NAME;

            (yyval.include).name = (yyvsp[(3) - (3)].text);
            (yyval.include).optional = FALSE;
        }
    break;

  case 221:
#line 1965 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.include).token = TK_OPTIONAL;

            (yyval.include).name = NULL;
            (yyval.include).optional = (yyvsp[(3) - (3)].boolean);
        }
    break;

  case 222:
#line 1973 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            deprecated("%OptionalInclude is deprecated, use %Include and the 'optional' argument instead");

            if (notSkipping())
                parseFile(NULL, (yyvsp[(2) - (2)].text), NULL, TRUE);
        }
    break;

  case 223:
#line 1981 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                newImport((yyvsp[(2) - (2)].import).name);
        }
    break;

  case 224:
#line 1987 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.import).name = (yyvsp[(1) - (1)].text);
        }
    break;

  case 225:
#line 1992 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.import) = (yyvsp[(2) - (3)].import);
        }
    break;

  case 227:
#line 1998 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.import) = (yyvsp[(1) - (3)].import);

            switch ((yyvsp[(3) - (3)].import).token)
            {
            case TK_NAME: (yyval.import).name = (yyvsp[(3) - (3)].import).name; break;
            }
        }
    break;

  case 228:
#line 2008 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.import).token = TK_NAME;

            (yyval.import).name = (yyvsp[(3) - (3)].text);
        }
    break;

  case 229:
#line 2015 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 230:
#line 2018 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 231:
#line 2023 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 232:
#line 2026 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 233:
#line 2031 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 234:
#line 2034 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 235:
#line 2039 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->copying, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 236:
#line 2045 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentSpec->exphdrcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 237:
#line 2051 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->hdrcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 238:
#line 2057 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 239:
#line 2062 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 240:
#line 2067 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 241:
#line 2072 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 242:
#line 2077 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 243:
#line 2082 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 244:
#line 2087 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 245:
#line 2092 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 246:
#line 2097 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 247:
#line 2102 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 248:
#line 2107 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 249:
#line 2112 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->cppcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 250:
#line 2118 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 251:
#line 2123 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->preinitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 252:
#line 2129 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->initcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 253:
#line 2135 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->postinitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 254:
#line 2141 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitcode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 255:
#line 2147 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentModule->unitpostinccode, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 256:
#line 2153 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* Deprecated. */
        }
    break;

  case 257:
#line 2158 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping() && inMainModule())
                appendCodeBlock(&currentSpec->docs, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 258:
#line 2164 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentSpec->docs, (yyvsp[(2) - (2)].codeb));
        }
    break;

  case 259:
#line 2170 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                addAutoPyName(currentModule, (yyvsp[(2) - (2)].autopyname).remove_leading);
        }
    break;

  case 260:
#line 2176 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.autopyname) = (yyvsp[(2) - (3)].autopyname);
        }
    break;

  case 262:
#line 2182 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.autopyname) = (yyvsp[(1) - (3)].autopyname);

            switch ((yyvsp[(3) - (3)].autopyname).token)
            {
            case TK_REMOVELEADING: (yyval.autopyname).remove_leading = (yyvsp[(3) - (3)].autopyname).remove_leading; break;
            }
        }
    break;

  case 263:
#line 2192 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.autopyname).token = TK_REMOVELEADING;

            (yyval.autopyname).remove_leading = (yyvsp[(3) - (3)].text);
        }
    break;

  case 264:
#line 2199 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(3) - (3)].codeb);

            /* Format the docstring. */
            if ((yyvsp[(2) - (3)].docstring).format == deindented)
            {
                const char *cp;
                char *dp;
                int min_indent, indent, skipping;

                /* Find the common indent. */
                min_indent = -1;
                indent = 0;
                skipping = FALSE;

                for (cp = (yyval.codeb)->frag; *cp != '\0'; ++cp)
                {
                    if (skipping)
                    {
                        /*
                         * We have handled the indent and are just looking for
                         * the end of the line.
                         */
                        if (*cp == '\n')
                            skipping = FALSE;
                    }
                    else
                    {
                        if (*cp == ' ')
                        {
                            ++indent;
                        }
                        else if (*cp != '\n')
                        {
                            if (min_indent < 0 || min_indent > indent)
                                min_indent = indent;

                            /* Ignore the remaining characters of the line. */
                            skipping = TRUE;
                        }
                    }
                }

                /* In case the last line doesn't have a trailing newline. */
                if (min_indent < 0 || min_indent > indent)
                    min_indent = indent;

                /*
                 * Go through the text again removing the common indentation.
                 */
                dp = cp = (yyval.codeb)->frag;

                while (*cp != '\0')
                {
                    const char *start = cp;
                    int non_blank = FALSE;

                    /* Find the end of the line. */
                    while (*cp != '\n' && *cp != '\0')
                        if (*cp++ != ' ')
                            non_blank = TRUE;

                    /* Find where we are copying from. */
                    if (non_blank)
                    {
                        start += min_indent;

                        while (*start != '\n' && *start != '\0')
                            *dp++ = *start++;
                    }

                    if (*cp == '\n')
                        *dp++ = *cp++;
                }

                *dp = '\0';
            }
        }
    break;

  case 265:
#line 2279 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.docstring).format = currentModule->defdocstring;
        }
    break;

  case 266:
#line 2282 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.docstring).format = convertFormat((yyvsp[(1) - (1)].text));
        }
    break;

  case 267:
#line 2287 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.docstring) = (yyvsp[(2) - (3)].docstring);
        }
    break;

  case 269:
#line 2293 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.docstring) = (yyvsp[(1) - (3)].docstring);

            switch ((yyvsp[(3) - (3)].docstring).token)
            {
            case TK_FORMAT: (yyval.docstring).format = (yyvsp[(3) - (3)].docstring).format; break;
            }
        }
    break;

  case 270:
#line 2303 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.docstring).token = TK_FORMAT;

            (yyval.docstring).format = convertFormat((yyvsp[(3) - (3)].text));
        }
    break;

  case 271:
#line 2310 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 273:
#line 2316 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if ((yyvsp[(2) - (3)].extract).id == NULL)
                yyerror("%Extract must have an 'id' argument");

            if (notSkipping())
                addExtractPart(currentSpec, (yyvsp[(2) - (3)].extract).id, (yyvsp[(2) - (3)].extract).order, (yyvsp[(3) - (3)].codeb));
        }
    break;

  case 274:
#line 2325 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            resetLexerState();

            (yyval.extract).id = (yyvsp[(1) - (1)].text);
            (yyval.extract).order = -1;
        }
    break;

  case 275:
#line 2331 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.extract) = (yyvsp[(2) - (3)].extract);
        }
    break;

  case 277:
#line 2337 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.extract) = (yyvsp[(1) - (3)].extract);

            switch ((yyvsp[(3) - (3)].extract).token)
            {
            case TK_ID: (yyval.extract).id = (yyvsp[(3) - (3)].extract).id; break;
            case TK_ORDER: (yyval.extract).order = (yyvsp[(3) - (3)].extract).order; break;
            }
        }
    break;

  case 278:
#line 2348 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.extract).token = TK_ID;

            (yyval.extract).id = (yyvsp[(3) - (3)].text);
            (yyval.extract).order = -1;
        }
    break;

  case 279:
#line 2354 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.extract).token = TK_ORDER;

            if ((yyvsp[(3) - (3)].number) < 0)
                yyerror("The 'order' of an %Extract directive must not be negative");

            (yyval.extract).id = NULL;
            (yyval.extract).order = (yyvsp[(3) - (3)].number);
        }
    break;

  case 280:
#line 2365 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* Deprecated. */
        }
    break;

  case 283:
#line 2374 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(1) - (2)].codeb);

            append(&(yyval.codeb)->frag, (yyvsp[(2) - (2)].codeb)->frag);

            free((yyvsp[(2) - (2)].codeb)->frag);
            free((yyvsp[(2) - (2)].codeb));
        }
    break;

  case 284:
#line 2384 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "PyName",
                    NULL
                };

                checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

                if (sectionFlags != 0 && (sectionFlags & ~(SECT_IS_PUBLIC | SECT_IS_PROT)) != 0)
                    yyerror("Class enums must be in the public or protected sections");

                currentEnum = newEnum(currentSpec, currentModule,
                        currentMappedType, (yyvsp[(2) - (3)].text), &(yyvsp[(3) - (3)].optflags), sectionFlags);
            }
        }
    break;

  case 286:
#line 2403 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.text) = NULL;
        }
    break;

  case 287:
#line 2406 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.text) = (yyvsp[(1) - (1)].text);
        }
    break;

  case 288:
#line 2411 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.text) = NULL;
        }
    break;

  case 289:
#line 2414 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.text) = (yyvsp[(1) - (1)].text);
        }
    break;

  case 296:
#line 2429 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "PyName",
                    NULL
                };

                enumMemberDef *emd, **tail;

                checkAnnos(&(yyvsp[(3) - (4)].optflags), annos);

                /* Note that we don't use the assigned value. */
                emd = sipMalloc(sizeof (enumMemberDef));

                emd -> pyname = cacheName(currentSpec,
                        getPythonName(currentModule, &(yyvsp[(3) - (4)].optflags), (yyvsp[(1) - (4)].text)));
                emd -> cname = (yyvsp[(1) - (4)].text);
                emd -> ed = currentEnum;
                emd -> next = NULL;

                checkAttributes(currentSpec, currentModule, emd->ed->ecd,
                        emd->ed->emtd, emd->pyname->text, FALSE);

                /* Append to preserve the order. */
                for (tail = &currentEnum->members; *tail != NULL; tail = &(*tail)->next)
                    ;

                *tail = emd;

                if (inMainModule())
                    setIsUsedName(emd -> pyname);
            }
        }
    break;

  case 301:
#line 2473 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.valp) = NULL;
        }
    break;

  case 302:
#line 2476 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.valp) = (yyvsp[(2) - (2)].valp);
        }
    break;

  case 304:
#line 2482 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            valueDef *vd;
 
            if ((yyvsp[(1) - (3)].valp) -> vtype == string_value || (yyvsp[(3) - (3)].valp) -> vtype == string_value)
                yyerror("Invalid binary operator for string");
 
            /* Find the last value in the existing expression. */
 
            for (vd = (yyvsp[(1) - (3)].valp); vd -> next != NULL; vd = vd -> next)
                ;
 
            vd -> vbinop = (yyvsp[(2) - (3)].qchar);
            vd -> next = (yyvsp[(3) - (3)].valp);

            (yyval.valp) = (yyvsp[(1) - (3)].valp);
        }
    break;

  case 305:
#line 2500 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '-';
        }
    break;

  case 306:
#line 2503 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '+';
        }
    break;

  case 307:
#line 2506 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '*';
        }
    break;

  case 308:
#line 2509 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '/';
        }
    break;

  case 309:
#line 2512 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '&';
        }
    break;

  case 310:
#line 2515 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '|';
        }
    break;

  case 311:
#line 2520 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '\0';
        }
    break;

  case 312:
#line 2523 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '!';
        }
    break;

  case 313:
#line 2526 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '~';
        }
    break;

  case 314:
#line 2529 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '-';
        }
    break;

  case 315:
#line 2532 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '+';
        }
    break;

  case 316:
#line 2535 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '*';
        }
    break;

  case 317:
#line 2538 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.qchar) = '&';
        }
    break;

  case 318:
#line 2543 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if ((yyvsp[(1) - (2)].qchar) != '\0' && (yyvsp[(2) - (2)].value).vtype == string_value)
                yyerror("Invalid unary operator for string");
 
            /* Convert the value to a simple expression on the heap. */
            (yyval.valp) = sipMalloc(sizeof (valueDef));
 
            *(yyval.valp) = (yyvsp[(2) - (2)].value);
            (yyval.valp)->vunop = (yyvsp[(1) - (2)].qchar);
            (yyval.valp)->vbinop = '\0';
            (yyval.valp)->next = NULL;
        }
    break;

  case 320:
#line 2558 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("Scoped names are not allowed in a C module");

            appendScopedName(&(yyvsp[(1) - (3)].scpvalp),(yyvsp[(3) - (3)].scpvalp));
        }
    break;

  case 321:
#line 2566 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.scpvalp) = text2scopePart((yyvsp[(1) - (1)].text));
        }
    break;

  case 322:
#line 2571 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 323:
#line 2574 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.boolean) = FALSE;
        }
    break;

  case 324:
#line 2579 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /*
             * We let the C++ compiler decide if the value is a valid one - no
             * point in building a full C++ parser here.
             */

            (yyval.value).vtype = scoped_value;
            (yyval.value).u.vscp = (yyvsp[(1) - (1)].scpvalp);
        }
    break;

  case 325:
#line 2588 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            fcallDef *fcd;

            fcd = sipMalloc(sizeof (fcallDef));
            *fcd = (yyvsp[(3) - (4)].fcall);
            fcd -> type = (yyvsp[(1) - (4)].memArg);

            (yyval.value).vtype = fcall_value;
            (yyval.value).u.fcd = fcd;
        }
    break;

  case 326:
#line 2598 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.value).vtype = real_value;
            (yyval.value).u.vreal = (yyvsp[(1) - (1)].real);
        }
    break;

  case 327:
#line 2602 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = (yyvsp[(1) - (1)].number);
        }
    break;

  case 328:
#line 2606 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = (yyvsp[(1) - (1)].boolean);
        }
    break;

  case 329:
#line 2610 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.value).vtype = numeric_value;
            (yyval.value).u.vnum = 0;
        }
    break;

  case 330:
#line 2614 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.value).vtype = string_value;
            (yyval.value).u.vstr = (yyvsp[(1) - (1)].text);
        }
    break;

  case 331:
#line 2618 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.value).vtype = qchar_value;
            (yyval.value).u.vqchar = (yyvsp[(1) - (1)].qchar);
        }
    break;

  case 332:
#line 2624 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* No values. */

            (yyval.fcall).nrArgs = 0;
        }
    break;

  case 333:
#line 2629 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* The single or first expression. */

            (yyval.fcall).args[0] = (yyvsp[(1) - (1)].valp);
            (yyval.fcall).nrArgs = 1;
        }
    break;

  case 334:
#line 2635 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* Check that it wasn't ...(,expression...). */

            if ((yyval.fcall).nrArgs == 0)
                yyerror("First argument to function call is missing");

            /* Check there is room. */

            if ((yyvsp[(1) - (3)].fcall).nrArgs == MAX_NR_ARGS)
                yyerror("Too many arguments to function call");

            (yyval.fcall) = (yyvsp[(1) - (3)].fcall);

            (yyval.fcall).args[(yyval.fcall).nrArgs] = (yyvsp[(3) - (3)].valp);
            (yyval.fcall).nrArgs++;
        }
    break;

  case 335:
#line 2653 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Capsule",
                    "DocType",
                    "Encoding",
                    "NoTypeName",
                    "PyInt",
                    "PyName",
                    NULL
                };

                checkAnnos(&(yyvsp[(4) - (5)].optflags), annos);

                applyTypeFlags(currentModule, &(yyvsp[(2) - (5)].memArg), &(yyvsp[(4) - (5)].optflags));
                newTypedef(currentSpec, currentModule, (yyvsp[(3) - (5)].text), &(yyvsp[(2) - (5)].memArg), &(yyvsp[(4) - (5)].optflags));
            }
        }
    break;

  case 336:
#line 2672 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "DocType",
                    "Encoding",
                    "NoTypeName",
                    "PyInt",
                    "PyName",
                    NULL
                };

                signatureDef *sig;
                argDef ftype;

                checkAnnos(&(yyvsp[(10) - (11)].optflags), annos);

                applyTypeFlags(currentModule, &(yyvsp[(2) - (11)].memArg), &(yyvsp[(10) - (11)].optflags));

                memset(&ftype, 0, sizeof (argDef));

                /* Create the full signature on the heap. */
                sig = sipMalloc(sizeof (signatureDef));
                *sig = (yyvsp[(8) - (11)].signature);
                sig->result = (yyvsp[(2) - (11)].memArg);

                /* Create the full type. */
                ftype.atype = function_type;
                ftype.nrderefs = (yyvsp[(4) - (11)].number);
                ftype.u.sa = sig;

                newTypedef(currentSpec, currentModule, (yyvsp[(5) - (11)].text), &ftype, &(yyvsp[(10) - (11)].optflags));
            }
        }
    break;

  case 337:
#line 2708 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (currentSpec -> genc && (yyvsp[(2) - (2)].scpvalp)->next != NULL)
                yyerror("Namespaces not allowed in a C module");

            if (notSkipping())
                currentSupers = NULL;
        }
    break;

  case 338:
#line 2714 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Abstract",
                    "AllowNone",
                    "API",
                    "DelayDtor",
                    "Deprecated",
                    "External",
                    "Metatype",
                    "NoDefaultCtors",
                    "PyName",
                    "PyQt4Flags",
                    "PyQt4NoQMetaObject",
                    "Supertype",
                    "VirtualErrorHandler",
                    NULL
                };

                checkAnnos(&(yyvsp[(5) - (5)].optflags), annos);

                if (currentSpec->genc && currentSupers != NULL)
                    yyerror("Super-classes not allowed in a C module struct");

                defineClass((yyvsp[(2) - (5)].scpvalp), currentSupers, &(yyvsp[(5) - (5)].optflags));
                sectionFlags = SECT_IS_PUBLIC;
            }
        }
    break;

  case 339:
#line 2742 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                completeClass((yyvsp[(2) - (8)].scpvalp), &(yyvsp[(5) - (8)].optflags), (yyvsp[(7) - (8)].boolean));
        }
    break;

  case 340:
#line 2748 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {currentIsTemplate = TRUE;}
    break;

  case 341:
#line 2748 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Class templates not allowed in a C module");

            if (notSkipping())
            {
                classTmplDef *tcd;

                /*
                 * Make sure there is room for the extra class name argument.
                 */
                if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                    yyerror("Internal error - increase the value of MAX_NR_ARGS");

                tcd = sipMalloc(sizeof (classTmplDef));
                tcd->sig = (yyvsp[(1) - (3)].signature);
                tcd->cd = (yyvsp[(3) - (3)].klass);
                tcd->next = currentSpec->classtemplates;

                currentSpec->classtemplates = tcd;
            }

            currentIsTemplate = FALSE;
        }
    break;

  case 342:
#line 2774 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.signature) = (yyvsp[(3) - (4)].signature);
        }
    break;

  case 343:
#line 2779 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Class definition not allowed in a C module");

            if (notSkipping())
                currentSupers = NULL;
        }
    break;

  case 344:
#line 2785 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "Abstract",
                    "AllowNone",
                    "API",
                    "DelayDtor",
                    "Deprecated",
                    "External",
                    "Metatype",
                    "NoDefaultCtors",
                    "PyName",
                    "PyQt4Flags",
                    "PyQt4NoQMetaObject",
                    "Supertype",
                    "VirtualErrorHandler",
                    NULL
                };

                checkAnnos(&(yyvsp[(5) - (5)].optflags), annos);

                defineClass((yyvsp[(2) - (5)].scpvalp), currentSupers, &(yyvsp[(5) - (5)].optflags));
                sectionFlags = SECT_IS_PRIVATE;
            }
        }
    break;

  case 345:
#line 2810 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                (yyval.klass) = completeClass((yyvsp[(2) - (8)].scpvalp), &(yyvsp[(5) - (8)].optflags), (yyvsp[(7) - (8)].boolean));
        }
    break;

  case 350:
#line 2824 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping() && (yyvsp[(1) - (2)].token) == TK_PUBLIC)
            {
                argDef ad;
                classDef *super;
                scopedNameDef *snd = (yyvsp[(2) - (2)].scpvalp);

                /*
                 * This is a hack to allow typedef'ed classes to be used before
                 * we have resolved the typedef definitions.  Unlike elsewhere,
                 * we require that the typedef is defined before being used.
                 */
                for (;;)
                {
                    ad.atype = no_type;
                    ad.argflags = 0;
                    ad.nrderefs = 0;
                    ad.original_type = NULL;

                    searchTypedefs(currentSpec, snd, &ad);

                    if (ad.atype != defined_type)
                        break;

                    if (ad.nrderefs != 0 || isConstArg(&ad) || isReference(&ad))
                        break;

                    snd = ad.u.snd;
                }

                if (ad.atype != no_type)
                    yyerror("Super-class list contains an invalid type");

                /*
                 * Note that passing NULL as the API is a bug.  Instead we
                 * should pass the API of the sub-class being defined,
                 * otherwise we cannot create sub-classes of versioned classes.
                 */
                super = findClass(currentSpec, class_iface, NULL, snd);
                appendToClassList(&currentSupers, super);
            }
        }
    break;

  case 351:
#line 2868 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
        (yyval.token) = TK_PUBLIC;
        }
    break;

  case 352:
#line 2871 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
        (yyval.token) = TK_PUBLIC;
        }
    break;

  case 353:
#line 2874 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
        (yyval.token) = TK_PROTECTED;
        }
    break;

  case 354:
#line 2877 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
        (yyval.token) = TK_PRIVATE;
        }
    break;

  case 355:
#line 2882 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.boolean) = FALSE;
        }
    break;

  case 356:
#line 2885 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.boolean) = TRUE;
        }
    break;

  case 368:
#line 2903 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->docstring, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 369:
#line 2907 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->cppcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 370:
#line 2911 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
                appendCodeBlock(&currentScope()->iff->hdrcode, (yyvsp[(1) - (1)].codeb));
        }
    break;

  case 371:
#line 2915 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->travcode != NULL)
                    yyerror("%GCTraverseCode already given for class");

                appendCodeBlock(&scope->travcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 372:
#line 2926 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->clearcode != NULL)
                    yyerror("%GCClearCode already given for class");

                appendCodeBlock(&scope->clearcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 373:
#line 2937 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->getbufcode != NULL)
                    yyerror("%BIGetBufferCode already given for class");

                appendCodeBlock(&scope->getbufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 374:
#line 2948 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->releasebufcode != NULL)
                    yyerror("%BIReleaseBufferCode already given for class");

                appendCodeBlock(&scope->releasebufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 375:
#line 2959 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->readbufcode != NULL)
                    yyerror("%BIGetReadBufferCode already given for class");

                appendCodeBlock(&scope->readbufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 376:
#line 2970 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->writebufcode != NULL)
                    yyerror("%BIGetWriteBufferCode already given for class");

                appendCodeBlock(&scope->writebufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 377:
#line 2981 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->segcountcode != NULL)
                    yyerror("%BIGetSegCountCode already given for class");

                appendCodeBlock(&scope->segcountcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 378:
#line 2992 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->charbufcode != NULL)
                    yyerror("%BIGetCharBufferCode already given for class");

                appendCodeBlock(&scope->charbufcode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 379:
#line 3003 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->instancecode != NULL)
                    yyerror("%InstanceCode already given for class");

                appendCodeBlock(&scope->instancecode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 380:
#line 3014 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->picklecode != NULL)
                    yyerror("%PickleCode already given for class");

                appendCodeBlock(&scope->picklecode, (yyvsp[(1) - (1)].codeb));
            }
        }
    break;

  case 384:
#line 3028 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtosubcode != NULL)
                    yyerror("Class has more than one %ConvertToSubClassCode directive");

                appendCodeBlock(&scope->convtosubcode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 385:
#line 3039 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *scope = currentScope();

                if (scope->convtocode != NULL)
                    yyerror("Class has more than one %ConvertToTypeCode directive");

                appendCodeBlock(&scope->convtocode, (yyvsp[(2) - (2)].codeb));
            }
        }
    break;

  case 386:
#line 3050 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("public section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PUBLIC | (yyvsp[(2) - (3)].number);
        }
    break;

  case 387:
#line 3057 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("protected section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PROT | (yyvsp[(2) - (3)].number);
        }
    break;

  case 388:
#line 3064 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("private section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_PRIVATE | (yyvsp[(2) - (3)].number);
        }
    break;

  case 389:
#line 3071 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("signals section not allowed in a C module");

            if (notSkipping())
                sectionFlags = SECT_IS_SIGNAL;
        }
    break;

  case 390:
#line 3080 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if ((yyvsp[(2) - (3)].property).name == NULL)
                yyerror("A %Property directive must have a 'name' argument");

            if ((yyvsp[(2) - (3)].property).get == NULL)
                yyerror("A %Property directive must have a 'get' argument");

            if (notSkipping())
                addProperty(currentSpec, currentModule, currentScope(),
                        (yyvsp[(2) - (3)].property).name, (yyvsp[(2) - (3)].property).get, (yyvsp[(2) - (3)].property).set, (yyvsp[(3) - (3)].property).docstring);
        }
    break;

  case 391:
#line 3093 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.property) = (yyvsp[(2) - (3)].property);
        }
    break;

  case 393:
#line 3099 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.property) = (yyvsp[(1) - (3)].property);

            switch ((yyvsp[(3) - (3)].property).token)
            {
            case TK_GET: (yyval.property).get = (yyvsp[(3) - (3)].property).get; break;
            case TK_NAME: (yyval.property).name = (yyvsp[(3) - (3)].property).name; break;
            case TK_SET: (yyval.property).set = (yyvsp[(3) - (3)].property).set; break;
            }
        }
    break;

  case 394:
#line 3111 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.property).token = TK_GET;

            (yyval.property).get = (yyvsp[(3) - (3)].text);
            (yyval.property).name = NULL;
            (yyval.property).set = NULL;
        }
    break;

  case 395:
#line 3118 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.property).token = TK_NAME;

            (yyval.property).get = NULL;
            (yyval.property).name = (yyvsp[(3) - (3)].text);
            (yyval.property).set = NULL;
        }
    break;

  case 396:
#line 3125 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.property).token = TK_SET;

            (yyval.property).get = NULL;
            (yyval.property).name = NULL;
            (yyval.property).set = (yyvsp[(3) - (3)].text);
        }
    break;

  case 397:
#line 3134 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.property).token = 0;
            (yyval.property).docstring = NULL;
        }
    break;

  case 398:
#line 3138 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.property) = (yyvsp[(2) - (4)].property);
        }
    break;

  case 400:
#line 3144 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.property) = (yyvsp[(1) - (2)].property);

            switch ((yyvsp[(2) - (2)].property).token)
            {
            case TK_DOCSTRING: (yyval.property).docstring = (yyvsp[(2) - (2)].property).docstring; break;
            }
        }
    break;

  case 401:
#line 3154 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.property).token = TK_IF;
        }
    break;

  case 402:
#line 3157 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.property).token = TK_END;
        }
    break;

  case 403:
#line 3160 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.property).token = TK_DOCSTRING;
                (yyval.property).docstring = (yyvsp[(1) - (1)].codeb);
            }
            else
            {
                (yyval.property).token = 0;
                (yyval.property).docstring = NULL;
            }
        }
    break;

  case 406:
#line 3178 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 407:
#line 3181 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.number) = SECT_IS_SLOT;
        }
    break;

  case 408:
#line 3186 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* Note that we allow non-virtual dtors in C modules. */

            if (notSkipping())
            {
                const char *annos[] = {
                    "HoldGIL",
                    "ReleaseGIL",
                    NULL
                };

                classDef *cd = currentScope();

                checkAnnos(&(yyvsp[(8) - (11)].optflags), annos);

                if (strcmp(classBaseName(cd),(yyvsp[(3) - (11)].text)) != 0)
                    yyerror("Destructor doesn't have the same name as its class");

                if (isDtor(cd))
                    yyerror("Destructor has already been defined");

                if (currentSpec -> genc && (yyvsp[(10) - (11)].codeb) == NULL)
                    yyerror("Destructor in C modules must include %MethodCode");

                appendCodeBlock(&cd->dealloccode, (yyvsp[(10) - (11)].codeb));
                appendCodeBlock(&cd->dtorcode, (yyvsp[(11) - (11)].codeb));
                cd -> dtorexceptions = (yyvsp[(6) - (11)].throwlist);

                /*
                 * Note that we don't apply the protected/public hack to dtors
                 * as it (I think) may change the behaviour of the wrapped API.
                 */
                cd->classflags |= sectionFlags;

                if ((yyvsp[(7) - (11)].number))
                {
                    if (!(yyvsp[(1) - (11)].number))
                        yyerror("Abstract destructor must be virtual");

                    setIsAbstractClass(cd);
                }

                /*
                 * The class has a shadow if we have a virtual dtor or some
                 * dtor code.
                 */
                if ((yyvsp[(1) - (11)].number) || (yyvsp[(11) - (11)].codeb) != NULL)
                {
                    if (currentSpec -> genc)
                        yyerror("Virtual destructor or %VirtualCatcherCode not allowed in a C module");

                    setHasShadow(cd);
                }

                if (getReleaseGIL(&(yyvsp[(8) - (11)].optflags)))
                    setIsReleaseGILDtor(cd);
                else if (getHoldGIL(&(yyvsp[(8) - (11)].optflags)))
                    setIsHoldGILDtor(cd);
            }
        }
    break;

  case 409:
#line 3248 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {currentCtorIsExplicit = TRUE;}
    break;

  case 412:
#line 3252 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* Note that we allow ctors in C modules. */

            if (notSkipping())
            {
                const char *annos[] = {
                    "API",
                    "Default",
                    "Deprecated",
                    "HoldGIL",
                    "KeywordArgs",
                    "NoDerived",
                    "NoRaisesPyException",
                    "PostHook",
                    "PreHook",
                    "RaisesPyException",
                    "ReleaseGIL",
                    "Transfer",
                    NULL
                };

                checkAnnos(&(yyvsp[(6) - (10)].optflags), annos);

                if (currentSpec -> genc)
                {
                    if ((yyvsp[(10) - (10)].codeb) == NULL && (yyvsp[(3) - (10)].signature).nrArgs != 0)
                        yyerror("Constructors with arguments in C modules must include %MethodCode");

                    if (currentCtorIsExplicit)
                        yyerror("Explicit constructors not allowed in a C module");
                }

                if ((sectionFlags & (SECT_IS_PUBLIC | SECT_IS_PROT | SECT_IS_PRIVATE)) == 0)
                    yyerror("Constructor must be in the public, private or protected sections");

                newCtor(currentModule, (yyvsp[(1) - (10)].text), sectionFlags, &(yyvsp[(3) - (10)].signature), &(yyvsp[(6) - (10)].optflags), (yyvsp[(10) - (10)].codeb), (yyvsp[(5) - (10)].throwlist), (yyvsp[(7) - (10)].optsignature),
                        currentCtorIsExplicit, (yyvsp[(9) - (10)].codeb));
            }

            free((yyvsp[(1) - (10)].text));

            currentCtorIsExplicit = FALSE;
        }
    break;

  case 413:
#line 3297 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.optsignature) = NULL;
        }
    break;

  case 414:
#line 3300 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            parsingCSignature = TRUE;
        }
    break;

  case 415:
#line 3302 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.optsignature) = sipMalloc(sizeof (signatureDef));

            *(yyval.optsignature) = (yyvsp[(4) - (6)].signature);

            parsingCSignature = FALSE;
        }
    break;

  case 416:
#line 3311 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.optsignature) = NULL;
        }
    break;

  case 417:
#line 3314 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            parsingCSignature = TRUE;
        }
    break;

  case 418:
#line 3316 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.optsignature) = sipMalloc(sizeof (signatureDef));

            *(yyval.optsignature) = (yyvsp[(5) - (7)].signature);
            (yyval.optsignature)->result = (yyvsp[(3) - (7)].memArg);

            parsingCSignature = FALSE;
        }
    break;

  case 419:
#line 3326 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.number) = FALSE;
        }
    break;

  case 420:
#line 3329 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.number) = TRUE;
        }
    break;

  case 421:
#line 3334 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                applyTypeFlags(currentModule, &(yyvsp[(1) - (14)].memArg), &(yyvsp[(9) - (14)].optflags));

                (yyvsp[(4) - (14)].signature).result = (yyvsp[(1) - (14)].memArg);

                newFunction(currentSpec, currentModule, currentScope(), NULL,
                        sectionFlags, currentIsStatic, currentIsSignal,
                        currentIsSlot, currentOverIsVirt, (yyvsp[(2) - (14)].text), &(yyvsp[(4) - (14)].signature), (yyvsp[(6) - (14)].number), (yyvsp[(8) - (14)].number), &(yyvsp[(9) - (14)].optflags),
                        (yyvsp[(13) - (14)].codeb), (yyvsp[(14) - (14)].codeb), (yyvsp[(7) - (14)].throwlist), (yyvsp[(10) - (14)].optsignature), (yyvsp[(12) - (14)].codeb));
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 422:
#line 3352 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /*
             * It looks like an assignment operator (though we don't bother to
             * check the types) so make sure it is private.
             */
            if (notSkipping())
            {
                classDef *cd = currentScope();

                if (cd == NULL || !(sectionFlags & SECT_IS_PRIVATE))
                    yyerror("Assignment operators may only be defined as private");

                setCannotAssign(cd);
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 423:
#line 3372 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                classDef *cd = currentScope();

                /*
                 * If the scope is a namespace then make sure the operator is
                 * handled as a global.
                 */
                if (cd != NULL && cd->iff->type == namespace_iface)
                    cd = NULL;

                applyTypeFlags(currentModule, &(yyvsp[(1) - (14)].memArg), &(yyvsp[(10) - (14)].optflags));

                /* Handle the unary '+' and '-' operators. */
                if ((cd != NULL && (yyvsp[(5) - (14)].signature).nrArgs == 0) || (cd == NULL && (yyvsp[(5) - (14)].signature).nrArgs == 1))
                {
                    if (strcmp((yyvsp[(3) - (14)].text), "__add__") == 0)
                        (yyvsp[(3) - (14)].text) = "__pos__";
                    else if (strcmp((yyvsp[(3) - (14)].text), "__sub__") == 0)
                        (yyvsp[(3) - (14)].text) = "__neg__";
                }

                (yyvsp[(5) - (14)].signature).result = (yyvsp[(1) - (14)].memArg);

                newFunction(currentSpec, currentModule, cd, NULL,
                        sectionFlags, currentIsStatic, currentIsSignal,
                        currentIsSlot, currentOverIsVirt, (yyvsp[(3) - (14)].text), &(yyvsp[(5) - (14)].signature), (yyvsp[(7) - (14)].number), (yyvsp[(9) - (14)].number),
                        &(yyvsp[(10) - (14)].optflags), (yyvsp[(13) - (14)].codeb), (yyvsp[(14) - (14)].codeb), (yyvsp[(8) - (14)].throwlist), (yyvsp[(11) - (14)].optsignature), NULL);
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 424:
#line 3408 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                char *sname;
                classDef *scope = currentScope();

                if (scope == NULL || (yyvsp[(4) - (13)].signature).nrArgs != 0)
                    yyerror("Operator casts must be specified in a class and have no arguments");

                applyTypeFlags(currentModule, &(yyvsp[(2) - (13)].memArg), &(yyvsp[(9) - (13)].optflags));

                switch ((yyvsp[(2) - (13)].memArg).atype)
                {
                case defined_type:
                    sname = NULL;
                    break;

                case bool_type:
                case cbool_type:
                case byte_type:
                case sbyte_type:
                case ubyte_type:
                case short_type:
                case ushort_type:
                case int_type:
                case cint_type:
                case uint_type:
                    sname = "__int__";
                    break;

                case long_type:
                case ulong_type:
                case longlong_type:
                case ulonglong_type:
                    sname = "__long__";
                    break;

                case float_type:
                case cfloat_type:
                case double_type:
                case cdouble_type:
                    sname = "__float__";
                    break;

                default:
                    yyerror("Unsupported operator cast");
                }

                if (sname != NULL)
                {
                    (yyvsp[(4) - (13)].signature).result = (yyvsp[(2) - (13)].memArg);

                    newFunction(currentSpec, currentModule, scope, NULL,
                            sectionFlags, currentIsStatic, currentIsSignal,
                            currentIsSlot, currentOverIsVirt, sname, &(yyvsp[(4) - (13)].signature), (yyvsp[(6) - (13)].number),
                            (yyvsp[(8) - (13)].number), &(yyvsp[(9) - (13)].optflags), (yyvsp[(12) - (13)].codeb), (yyvsp[(13) - (13)].codeb), (yyvsp[(7) - (13)].throwlist), (yyvsp[(10) - (13)].optsignature), NULL);
                }
                else
                {
                    argList *al;

                    /* Check it doesn't already exist. */
                    for (al = scope->casts; al != NULL; al = al->next)
                        if (compareScopedNames((yyvsp[(2) - (13)].memArg).u.snd, al->arg.u.snd) == 0)
                            yyerror("This operator cast has already been specified in this class");

                    al = sipMalloc(sizeof (argList));
                    al->arg = (yyvsp[(2) - (13)].memArg);
                    al->next = scope->casts;

                    scope->casts = al;
                }
            }

            currentIsStatic = FALSE;
            currentIsSignal = FALSE;
            currentIsSlot = FALSE;
            currentOverIsVirt = FALSE;
        }
    break;

  case 425:
#line 3489 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__add__";}
    break;

  case 426:
#line 3490 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__sub__";}
    break;

  case 427:
#line 3491 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__mul__";}
    break;

  case 428:
#line 3492 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__div__";}
    break;

  case 429:
#line 3493 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__mod__";}
    break;

  case 430:
#line 3494 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__and__";}
    break;

  case 431:
#line 3495 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__or__";}
    break;

  case 432:
#line 3496 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__xor__";}
    break;

  case 433:
#line 3497 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__lshift__";}
    break;

  case 434:
#line 3498 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__rshift__";}
    break;

  case 435:
#line 3499 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__iadd__";}
    break;

  case 436:
#line 3500 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__isub__";}
    break;

  case 437:
#line 3501 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__imul__";}
    break;

  case 438:
#line 3502 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__idiv__";}
    break;

  case 439:
#line 3503 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__imod__";}
    break;

  case 440:
#line 3504 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__iand__";}
    break;

  case 441:
#line 3505 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__ior__";}
    break;

  case 442:
#line 3506 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__ixor__";}
    break;

  case 443:
#line 3507 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__ilshift__";}
    break;

  case 444:
#line 3508 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__irshift__";}
    break;

  case 445:
#line 3509 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__invert__";}
    break;

  case 446:
#line 3510 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__call__";}
    break;

  case 447:
#line 3511 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__getitem__";}
    break;

  case 448:
#line 3512 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__lt__";}
    break;

  case 449:
#line 3513 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__le__";}
    break;

  case 450:
#line 3514 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__eq__";}
    break;

  case 451:
#line 3515 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__ne__";}
    break;

  case 452:
#line 3516 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__gt__";}
    break;

  case 453:
#line 3517 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {(yyval.text) = "__ge__";}
    break;

  case 454:
#line 3520 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.number) = FALSE;
        }
    break;

  case 455:
#line 3523 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.number) = TRUE;
        }
    break;

  case 456:
#line 3528 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 457:
#line 3531 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if ((yyvsp[(2) - (2)].number) != 0)
                yyerror("Abstract virtual function '= 0' expected");

            (yyval.number) = TRUE;
        }
    break;

  case 458:
#line 3539 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.optflags).nrFlags = 0;
        }
    break;

  case 459:
#line 3542 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.optflags) = (yyvsp[(2) - (3)].optflags);
        }
    break;

  case 460:
#line 3548 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.optflags).flags[0] = (yyvsp[(1) - (1)].flag);
            (yyval.optflags).nrFlags = 1;
        }
    break;

  case 461:
#line 3552 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* Check there is room. */

            if ((yyvsp[(1) - (3)].optflags).nrFlags == MAX_NR_FLAGS)
                yyerror("Too many optional flags");

            (yyval.optflags) = (yyvsp[(1) - (3)].optflags);

            (yyval.optflags).flags[(yyval.optflags).nrFlags++] = (yyvsp[(3) - (3)].flag);
        }
    break;

  case 462:
#line 3564 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.flag).ftype = bool_flag;
            (yyval.flag).fname = (yyvsp[(1) - (1)].text);
        }
    break;

  case 463:
#line 3568 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.flag) = (yyvsp[(3) - (3)].flag);
            (yyval.flag).fname = (yyvsp[(1) - (3)].text);
        }
    break;

  case 464:
#line 3574 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.flag).ftype = (strchr((yyvsp[(1) - (1)].text), '.') != NULL) ? dotted_name_flag : name_flag;
            (yyval.flag).fvalue.sval = (yyvsp[(1) - (1)].text);
        }
    break;

  case 465:
#line 3578 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            apiVersionRangeDef *avd;
            int from, to;

            (yyval.flag).ftype = api_range_flag;

            /* Check that the API is known. */
            if ((avd = findAPI(currentSpec, (yyvsp[(1) - (5)].text))) == NULL)
                yyerror("unknown API name in API annotation");

            if (inMainModule())
                setIsUsedName(avd->api_name);

            /* Unbounded values are represented by 0. */
            if ((from = (yyvsp[(3) - (5)].number)) < 0)
                from = 0;

            if ((to = (yyvsp[(5) - (5)].number)) < 0)
                to = 0;

            (yyval.flag).fvalue.aval = convertAPIRange(currentModule, avd->api_name,
                    from, to);
        }
    break;

  case 466:
#line 3601 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.flag).ftype = string_flag;
            (yyval.flag).fvalue.sval = convertFeaturedString((yyvsp[(1) - (1)].text));
        }
    break;

  case 467:
#line 3605 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.flag).ftype = integer_flag;
            (yyval.flag).fvalue.ival = (yyvsp[(1) - (1)].number);
        }
    break;

  case 468:
#line 3611 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 469:
#line 3614 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 470:
#line 3619 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = NULL;
        }
    break;

  case 471:
#line 3622 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.codeb) = (yyvsp[(2) - (2)].codeb);
        }
    break;

  case 472:
#line 3627 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            int a, nrrxcon, nrrxdis, nrslotcon, nrslotdis, nrarray, nrarraysize;

            nrrxcon = nrrxdis = nrslotcon = nrslotdis = nrarray = nrarraysize = 0;

            for (a = 0; a < (yyvsp[(1) - (1)].signature).nrArgs; ++a)
            {
                argDef *ad = &(yyvsp[(1) - (1)].signature).args[a];

                switch (ad -> atype)
                {
                case rxcon_type:
                    ++nrrxcon;
                    break;

                case rxdis_type:
                    ++nrrxdis;
                    break;

                case slotcon_type:
                    ++nrslotcon;
                    break;

                case slotdis_type:
                    ++nrslotdis;
                    break;
                }

                if (isArray(ad))
                    ++nrarray;

                if (isArraySize(ad))
                    ++nrarraysize;
            }

            if (nrrxcon != nrslotcon || nrrxcon > 1)
                yyerror("SIP_RXOBJ_CON and SIP_SLOT_CON must both be given and at most once");

            if (nrrxdis != nrslotdis || nrrxdis > 1)
                yyerror("SIP_RXOBJ_DIS and SIP_SLOT_DIS must both be given and at most once");

            if (nrarray != nrarraysize || nrarray > 1)
                yyerror("/Array/ and /ArraySize/ must both be given and at most once");

            (yyval.signature) = (yyvsp[(1) - (1)].signature);
        }
    break;

  case 473:
#line 3675 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* No arguments. */

            (yyval.signature).nrArgs = 0;
        }
    break;

  case 474:
#line 3680 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* The single or first argument. */

            (yyval.signature).args[0] = (yyvsp[(1) - (1)].memArg);
            (yyval.signature).nrArgs = 1;
        }
    break;

  case 475:
#line 3686 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* Check that it wasn't ...(,arg...). */
            if ((yyvsp[(1) - (3)].signature).nrArgs == 0)
                yyerror("First argument of the list is missing");

            /* Check there is nothing after an ellipsis. */
            if ((yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].atype == ellipsis_type)
                yyerror("An ellipsis must be at the end of the argument list");

            /*
             * If this argument has no default value, then the
             * previous one mustn't either.
             */
            if ((yyvsp[(3) - (3)].memArg).defval == NULL && (yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].defval != NULL)
                yyerror("Compulsory argument given after optional argument");

            /* Check there is room. */
            if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.signature) = (yyvsp[(1) - (3)].signature);

            (yyval.signature).args[(yyval.signature).nrArgs] = (yyvsp[(3) - (3)].memArg);
            (yyval.signature).nrArgs++;
        }
    break;

  case 476:
#line 3713 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(3) - (4)].optflags), "SIP_SIGNAL has no annotations");

            (yyval.memArg).atype = signal_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (4)].text));
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 477:
#line 3724 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(3) - (4)].optflags), "SIP_SLOT has no annotations");

            (yyval.memArg).atype = slot_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (4)].text));
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 478:
#line 3735 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(3) - (4)].optflags), "SIP_ANYSLOT has no annotations");

            (yyval.memArg).atype = anyslot_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (4)].text));
            (yyval.memArg).defval = (yyvsp[(4) - (4)].valp);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 479:
#line 3746 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            const char *annos[] = {
                "SingleShot",
                NULL
            };

            checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

            (yyval.memArg).atype = rxcon_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags), "SingleShot", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_SINGLE_SHOT;

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 480:
#line 3764 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(3) - (3)].optflags), "SIP_RXOBJ_DIS has no annotations");

            (yyval.memArg).atype = rxdis_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 481:
#line 3774 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(6) - (6)].optflags), "SIP_SLOT_CON has no annotations");

            (yyval.memArg).atype = slotcon_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(5) - (6)].text));

            memset(&(yyvsp[(3) - (6)].signature).result, 0, sizeof (argDef));
            (yyvsp[(3) - (6)].signature).result.atype = void_type;

            (yyval.memArg).u.sa = sipMalloc(sizeof (signatureDef));
            *(yyval.memArg).u.sa = (yyvsp[(3) - (6)].signature);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 482:
#line 3790 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(6) - (6)].optflags), "SIP_SLOT_DIS has no annotations");

            (yyval.memArg).atype = slotdis_type;
            (yyval.memArg).argflags = ARG_IS_CONST;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(5) - (6)].text));

            memset(&(yyvsp[(3) - (6)].signature).result, 0, sizeof (argDef));
            (yyvsp[(3) - (6)].signature).result.atype = void_type;

            (yyval.memArg).u.sa = sipMalloc(sizeof (signatureDef));
            *(yyval.memArg).u.sa = (yyvsp[(3) - (6)].signature);

            currentSpec -> sigslots = TRUE;
        }
    break;

  case 483:
#line 3806 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            checkNoAnnos(&(yyvsp[(3) - (3)].optflags), "SIP_QOBJECT has no annotations");

            (yyval.memArg).atype = qobject_type;
            (yyval.memArg).argflags = 0;
            (yyval.memArg).nrderefs = 0;
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));
        }
    break;

  case 484:
#line 3814 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.memArg) = (yyvsp[(1) - (2)].memArg);
            (yyval.memArg).defval = (yyvsp[(2) - (2)].valp);
        }
    break;

  case 485:
#line 3821 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {currentIsSignal = TRUE;}
    break;

  case 487:
#line 3822 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {currentIsSlot = TRUE;}
    break;

  case 490:
#line 3827 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {currentIsStatic = TRUE;}
    break;

  case 495:
#line 3837 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {currentOverIsVirt = TRUE;}
    break;

  case 498:
#line 3841 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                const char *annos[] = {
                    "DocType",
                    "Encoding",
                    "PyInt",
                    "PyName",
                    NULL
                };

                checkAnnos(&(yyvsp[(3) - (8)].optflags), annos);

                if ((yyvsp[(6) - (8)].codeb) != NULL)
                {
                    if ((yyvsp[(4) - (8)].variable).access_code != NULL)
                        yyerror("%AccessCode already defined");

                    (yyvsp[(4) - (8)].variable).access_code = (yyvsp[(6) - (8)].codeb);

                    deprecated("%AccessCode should be used a sub-directive");
                }

                if ((yyvsp[(7) - (8)].codeb) != NULL)
                {
                    if ((yyvsp[(4) - (8)].variable).get_code != NULL)
                        yyerror("%GetCode already defined");

                    (yyvsp[(4) - (8)].variable).get_code = (yyvsp[(7) - (8)].codeb);

                    deprecated("%GetCode should be used a sub-directive");
                }

                if ((yyvsp[(8) - (8)].codeb) != NULL)
                {
                    if ((yyvsp[(4) - (8)].variable).set_code != NULL)
                        yyerror("%SetCode already defined");

                    (yyvsp[(4) - (8)].variable).set_code = (yyvsp[(8) - (8)].codeb);

                    deprecated("%SetCode should be used a sub-directive");
                }

                newVar(currentSpec, currentModule, (yyvsp[(2) - (8)].text), currentIsStatic, &(yyvsp[(1) - (8)].memArg),
                        &(yyvsp[(3) - (8)].optflags), (yyvsp[(4) - (8)].variable).access_code, (yyvsp[(4) - (8)].variable).get_code, (yyvsp[(4) - (8)].variable).set_code,
                        sectionFlags);
            }

            currentIsStatic = FALSE;
        }
    break;

  case 499:
#line 3893 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.variable).token = 0;
            (yyval.variable).access_code = NULL;
            (yyval.variable).get_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 500:
#line 3899 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.variable) = (yyvsp[(2) - (3)].variable);
        }
    break;

  case 502:
#line 3905 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.variable) = (yyvsp[(1) - (2)].variable);

            switch ((yyvsp[(2) - (2)].variable).token)
            {
            case TK_ACCESSCODE: (yyval.variable).access_code = (yyvsp[(2) - (2)].variable).access_code; break;
            case TK_GETCODE: (yyval.variable).get_code = (yyvsp[(2) - (2)].variable).get_code; break;
            case TK_SETCODE: (yyval.variable).set_code = (yyvsp[(2) - (2)].variable).set_code; break;
            }
        }
    break;

  case 503:
#line 3917 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.variable).token = TK_IF;
        }
    break;

  case 504:
#line 3920 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.variable).token = TK_END;
        }
    break;

  case 505:
#line 3923 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_ACCESSCODE;
                (yyval.variable).access_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).access_code = NULL;
            }

            (yyval.variable).get_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 506:
#line 3938 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_GETCODE;
                (yyval.variable).get_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).get_code = NULL;
            }

            (yyval.variable).access_code = NULL;
            (yyval.variable).set_code = NULL;
        }
    break;

  case 507:
#line 3953 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (notSkipping())
            {
                (yyval.variable).token = TK_SETCODE;
                (yyval.variable).set_code = (yyvsp[(2) - (2)].codeb);
            }
            else
            {
                (yyval.variable).token = 0;
                (yyval.variable).set_code = NULL;
            }

            (yyval.variable).access_code = NULL;
            (yyval.variable).get_code = NULL;
        }
    break;

  case 508:
#line 3970 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.memArg) = (yyvsp[(2) - (4)].memArg);
            (yyval.memArg).nrderefs += (yyvsp[(3) - (4)].number);
            (yyval.memArg).argflags |= ARG_IS_CONST | (yyvsp[(4) - (4)].number);
        }
    break;

  case 509:
#line 3975 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.memArg) = (yyvsp[(1) - (3)].memArg);
            (yyval.memArg).nrderefs += (yyvsp[(2) - (3)].number);
            (yyval.memArg).argflags |= (yyvsp[(3) - (3)].number);

            /* PyObject * is a synonym for SIP_PYOBJECT. */
            if ((yyvsp[(1) - (3)].memArg).atype == defined_type && strcmp((yyvsp[(1) - (3)].memArg).u.snd->name, "PyObject") == 0 && (yyvsp[(1) - (3)].memArg).u.snd->next == NULL && (yyvsp[(2) - (3)].number) == 1 && (yyvsp[(3) - (3)].number) == 0)
            {
                (yyval.memArg).atype = pyobject_type;
                (yyval.memArg).nrderefs = 0;
            }
        }
    break;

  case 510:
#line 3989 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            const char *annos[] = {
                "AllowNone",
                "Array",
                "ArraySize",
                "Constrained",
                "DocType",
                "DocValue",
                "Encoding",
                "GetWrapper",
                "In",
                "KeepReference",
                "NoCopy",
                "Out",
                "PyInt",
                "ResultSize",
                "Transfer",
                "TransferBack",
                "TransferThis",
                NULL
            };

            checkAnnos(&(yyvsp[(3) - (3)].optflags), annos);

            (yyval.memArg) = (yyvsp[(1) - (3)].memArg);
            (yyval.memArg).name = cacheName(currentSpec, (yyvsp[(2) - (3)].text));

            handleKeepReference(&(yyvsp[(3) - (3)].optflags), &(yyval.memArg), currentModule);

            if (getAllowNone(&(yyvsp[(3) - (3)].optflags)))
                (yyval.memArg).argflags |= ARG_ALLOW_NONE;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"GetWrapper",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_GET_WRAPPER;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Array",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_ARRAY;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"ArraySize",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_ARRAY_SIZE;

            if (getTransfer(&(yyvsp[(3) - (3)].optflags)))
                (yyval.memArg).argflags |= ARG_XFERRED;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"TransferThis",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_THIS_XFERRED;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"TransferBack",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_XFERRED_BACK;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"In",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_IN;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Out",bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_OUT;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags), "ResultSize", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_RESULT_SIZE;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags), "NoCopy", bool_flag) != NULL)
                (yyval.memArg).argflags |= ARG_NO_COPY;

            if (getOptFlag(&(yyvsp[(3) - (3)].optflags),"Constrained",bool_flag) != NULL)
            {
                (yyval.memArg).argflags |= ARG_CONSTRAINED;

                switch ((yyval.memArg).atype)
                {
                case bool_type:
                    (yyval.memArg).atype = cbool_type;
                    break;

                case int_type:
                    (yyval.memArg).atype = cint_type;
                    break;

                case float_type:
                    (yyval.memArg).atype = cfloat_type;
                    break;

                case double_type:
                    (yyval.memArg).atype = cdouble_type;
                    break;
                }
            }

            applyTypeFlags(currentModule, &(yyval.memArg), &(yyvsp[(3) - (3)].optflags));
            (yyval.memArg).docval = getDocValue(&(yyvsp[(3) - (3)].optflags));
        }
    break;

  case 511:
#line 4080 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 512:
#line 4083 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (currentSpec -> genc)
                yyerror("References not allowed in a C module");

            (yyval.number) = ARG_IS_REF;
        }
    break;

  case 513:
#line 4091 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.number) = 0;
        }
    break;

  case 514:
#line 4094 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.number) = (yyvsp[(1) - (2)].number) + 1;
        }
    break;

  case 515:
#line 4099 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = defined_type;
            (yyval.memArg).u.snd = (yyvsp[(1) - (1)].scpvalp);

            /* Try and resolve typedefs as early as possible. */
            resolveAnyTypedef(currentSpec, &(yyval.memArg));
        }
    break;

  case 516:
#line 4107 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            templateDef *td;

            td = sipMalloc(sizeof(templateDef));
            td->fqname = (yyvsp[(1) - (4)].scpvalp);
            td->types = (yyvsp[(3) - (4)].signature);

            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = template_type;
            (yyval.memArg).u.td = td;
        }
    break;

  case 517:
#line 4118 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));

            /* In a C module all structures must be defined. */
            if (currentSpec -> genc)
            {
                (yyval.memArg).atype = defined_type;
                (yyval.memArg).u.snd = (yyvsp[(2) - (2)].scpvalp);
            }
            else
            {
                (yyval.memArg).atype = struct_type;
                (yyval.memArg).u.sname = (yyvsp[(2) - (2)].scpvalp);
            }
        }
    break;

  case 518:
#line 4133 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ushort_type;
        }
    break;

  case 519:
#line 4137 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = short_type;
        }
    break;

  case 520:
#line 4141 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = uint_type;
        }
    break;

  case 521:
#line 4145 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = uint_type;
        }
    break;

  case 522:
#line 4149 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = int_type;
        }
    break;

  case 523:
#line 4153 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = long_type;
        }
    break;

  case 524:
#line 4157 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ulong_type;
        }
    break;

  case 525:
#line 4161 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = longlong_type;
        }
    break;

  case 526:
#line 4165 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ulonglong_type;
        }
    break;

  case 527:
#line 4169 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = float_type;
        }
    break;

  case 528:
#line 4173 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = double_type;
        }
    break;

  case 529:
#line 4177 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = bool_type;
        }
    break;

  case 530:
#line 4181 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = sstring_type;
        }
    break;

  case 531:
#line 4185 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ustring_type;
        }
    break;

  case 532:
#line 4189 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = string_type;
        }
    break;

  case 533:
#line 4193 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = wstring_type;
        }
    break;

  case 534:
#line 4197 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = void_type;
        }
    break;

  case 535:
#line 4201 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pyobject_type;
        }
    break;

  case 536:
#line 4205 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pytuple_type;
        }
    break;

  case 537:
#line 4209 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pylist_type;
        }
    break;

  case 538:
#line 4213 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pydict_type;
        }
    break;

  case 539:
#line 4217 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pycallable_type;
        }
    break;

  case 540:
#line 4221 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pyslice_type;
        }
    break;

  case 541:
#line 4225 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pytype_type;
        }
    break;

  case 542:
#line 4229 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = pybuffer_type;
        }
    break;

  case 543:
#line 4233 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ssize_type;
        }
    break;

  case 544:
#line 4237 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            memset(&(yyval.memArg), 0, sizeof (argDef));
            (yyval.memArg).atype = ellipsis_type;
        }
    break;

  case 545:
#line 4243 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* The single or first type. */

            (yyval.signature).args[0] = (yyvsp[(1) - (1)].memArg);
            (yyval.signature).nrArgs = 1;
        }
    break;

  case 546:
#line 4249 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* Check there is nothing after an ellipsis. */
            if ((yyvsp[(1) - (3)].signature).args[(yyvsp[(1) - (3)].signature).nrArgs - 1].atype == ellipsis_type)
                yyerror("An ellipsis must be at the end of the argument list");

            /* Check there is room. */
            if ((yyvsp[(1) - (3)].signature).nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.signature) = (yyvsp[(1) - (3)].signature);

            (yyval.signature).args[(yyval.signature).nrArgs] = (yyvsp[(3) - (3)].memArg);
            (yyval.signature).nrArgs++;
        }
    break;

  case 547:
#line 4265 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            (yyval.throwlist) = NULL;
        }
    break;

  case 548:
#line 4268 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            if (currentSpec->genc)
                yyerror("Exceptions not allowed in a C module");

            (yyval.throwlist) = (yyvsp[(3) - (4)].throwlist);
        }
    break;

  case 549:
#line 4276 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* Empty list so use a blank. */

            (yyval.throwlist) = sipMalloc(sizeof (throwArgs));
            (yyval.throwlist) -> nrArgs = 0;
        }
    break;

  case 550:
#line 4282 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* The only or first exception. */

            (yyval.throwlist) = sipMalloc(sizeof (throwArgs));
            (yyval.throwlist) -> nrArgs = 1;
            (yyval.throwlist) -> args[0] = findException(currentSpec, (yyvsp[(1) - (1)].scpvalp), FALSE);
        }
    break;

  case 551:
#line 4289 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"
    {
            /* Check that it wasn't ...(,arg...). */

            if ((yyvsp[(1) - (3)].throwlist) -> nrArgs == 0)
                yyerror("First exception of throw specifier is missing");

            /* Check there is room. */

            if ((yyvsp[(1) - (3)].throwlist) -> nrArgs == MAX_NR_ARGS)
                yyerror("Internal error - increase the value of MAX_NR_ARGS");

            (yyval.throwlist) = (yyvsp[(1) - (3)].throwlist);
            (yyval.throwlist) -> args[(yyval.throwlist) -> nrArgs++] = findException(currentSpec, (yyvsp[(3) - (3)].scpvalp), FALSE);
        }
    break;


/* Line 1267 of yacc.c.  */
#line 7788 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 4305 "/Users/phil/hg/sip/sip-4.14.6/sipgen/parser.y"



/*
 * Parse the specification.
 */
void parse(sipSpec *spec, FILE *fp, char *filename, stringList *tsl,
        stringList *xfl, KwArgs kwArgs, int protHack)
{
    classTmplDef *tcd;

    /* Initialise the spec. */
 
    memset(spec, 0, sizeof (sipSpec));
    spec->genc = -1;

    currentSpec = spec;
    neededQualifiers = tsl;
    excludedQualifiers = xfl;
    currentModule = NULL;
    currentMappedType = NULL;
    currentOverIsVirt = FALSE;
    currentCtorIsExplicit = FALSE;
    currentIsStatic = FALSE;
    currentIsSignal = FALSE;
    currentIsSlot = FALSE;
    currentIsTemplate = FALSE;
    previousFile = NULL;
    skipStackPtr = 0;
    currentScopeIdx = 0;
    sectionFlags = 0;
    defaultKwArgs = kwArgs;
    makeProtPublic = protHack;

    newModule(fp, filename);
    spec->module = currentModule;

    yyparse();

    handleEOF();
    handleEOM();

    /*
     * Go through each template class and remove it from the list of classes.
     */
    for (tcd = spec->classtemplates; tcd != NULL; tcd = tcd->next)
    {
        classDef **cdp;

        for (cdp = &spec->classes; *cdp != NULL; cdp = &(*cdp)->next)
            if (*cdp == tcd->cd)
            {
                ifaceFileDef **ifdp;

                /* Remove the interface file as well. */
                for (ifdp = &spec->ifacefiles; *ifdp != NULL; ifdp = &(*ifdp)->next)
                    if (*ifdp == tcd->cd->iff)
                    {
                        *ifdp = (*ifdp)->next;
                        break;
                    }

                *cdp = (*cdp)->next;
                break;
            }
    }
}


/*
 * Tell the parser that a complete file has now been read.
 */
void parserEOF(const char *name, parserContext *pc)
{
    previousFile = sipStrdup(name);
    currentContext = *pc;
}


/*
 * Append a class definition to a class list if it doesn't already appear.
 * Append is needed specifically for the list of super-classes because the
 * order is important to Python.
 */
void appendToClassList(classList **clp,classDef *cd)
{
    classList *new;

    /* Find the end of the list. */

    while (*clp != NULL)
    {
        if ((*clp) -> cd == cd)
            return;

        clp = &(*clp) -> next;
    }

    new = sipMalloc(sizeof (classList));

    new -> cd = cd;
    new -> next = NULL;

    *clp = new;
}


/*
 * Create a new module for the current specification and make it current.
 */
static void newModule(FILE *fp, const char *filename)
{
    moduleDef *mod;

    parseFile(fp, filename, currentModule, FALSE);

    mod = allocModule();
    mod->file = filename;

    if (currentModule != NULL)
        mod->defexception = currentModule->defexception;

    currentModule = mod;
}


/*
 * Allocate and initialise the memory for a new module.
 */
static moduleDef *allocModule()
{
    moduleDef *newmod, **tailp;

    newmod = sipMalloc(sizeof (moduleDef));

    newmod->version = -1;
    newmod->defdocstring = raw;
    newmod->encoding = no_type;
    newmod->qobjclass = -1;
    newmod->nrvirthandlers = -1;

    /* -1 is reserved for variable getters. */
    newmod->next_key = -2;

    /*
     * The consolidated module support needs these to be in order that they
     * appeared.
     */
    for (tailp = &currentSpec->modules; *tailp != NULL; tailp = &(*tailp)->next)
        ;

    *tailp = newmod;

    return newmod;
}


/*
 * Switch to parsing a new file.
 */
static void parseFile(FILE *fp, const char *name, moduleDef *prevmod,
        int optional)
{
    parserContext pc;

    pc.filename = name;
    pc.ifdepth = skipStackPtr;
    pc.prevmod = prevmod;

    if (setInputFile(fp, &pc, optional))
        currentContext = pc;
}


/*
 * Find an interface file, or create a new one.
 */
ifaceFileDef *findIfaceFile(sipSpec *pt, moduleDef *mod, scopedNameDef *fqname,
        ifaceFileType iftype, apiVersionRangeDef *api_range, argDef *ad)
{
    ifaceFileDef *iff, *first_alt = NULL;

    /* See if the name is already used. */

    for (iff = pt->ifacefiles; iff != NULL; iff = iff->next)
    {
        if (compareScopedNames(iff->fqcname, fqname) != 0)
            continue;

        /*
         * If they are both versioned then assume the user knows what they are
         * doing.
         */
        if (iff->api_range != NULL && api_range != NULL && iff->module == mod)
        {
            /* Remember the first of the alternate APIs. */
            if ((first_alt = iff->first_alt) == NULL)
                first_alt = iff;

            break;
        }

        /*
         * They must be the same type except that we allow a class if we want
         * an exception.  This is because we allow classes to be used before
         * they are defined.
         */
        if (iff->type != iftype)
            if (iftype != exception_iface || iff->type != class_iface)
                yyerror("A class, exception, namespace or mapped type has already been defined with the same name");

        /* Ignore an external class declared in another module. */
        if (iftype == class_iface && iff->module != mod)
        {
            classDef *cd;

            for (cd = pt->classes; cd != NULL; cd = cd->next)
                if (cd->iff == iff)
                    break;

            if (cd != NULL && iff->module != NULL && isExternal(cd))
                continue;
        }

        /*
         * If this is a mapped type with the same name defined in a different
         * module, then check that this type isn't the same as any of the
         * mapped types defined in that module.
         */
        if (iftype == mappedtype_iface && iff->module != mod)
        {
            mappedTypeDef *mtd;

            /*
             * This is a bit of a cheat.  With consolidated modules it's
             * possible to have two implementations of a mapped type in
             * different branches of the module hierarchy.  We assume that, if
             * there really are multiple implementations in the same branch,
             * then it will be picked up in a non-consolidated build.
             */
            if (isConsolidated(pt->module))
                continue;

            for (mtd = pt->mappedtypes; mtd != NULL; mtd = mtd->next)
            {
                if (mtd->iff != iff)
                    continue;

                if (ad->atype != template_type ||
                    mtd->type.atype != template_type ||
                    sameBaseType(ad, &mtd->type))
                    yyerror("Mapped type has already been defined in another module");
            }

            /*
             * If we got here then we have a mapped type based on an existing
             * template, but with unique parameters.  We don't want to use
             * interface files from other modules, so skip this one.
             */

            continue;
        }

        /* Ignore a namespace defined in another module. */
        if (iftype == namespace_iface && iff->module != mod)
            continue;

        return iff;
    }

    iff = sipMalloc(sizeof (ifaceFileDef));

    iff->name = cacheName(pt, scopedNameToString(fqname));
    iff->api_range = api_range;

    if (first_alt != NULL)
    {
        iff->first_alt = first_alt;
        iff->next_alt = first_alt->next_alt;

        first_alt->next_alt = iff;
    }
    else
    {
        /* This is the first alternate so point to itself. */
        iff->first_alt = iff;
    }

    iff->type = iftype;
    iff->ifacenr = -1;
    iff->fqcname = fqname;
    iff->module = NULL;
    iff->hdrcode = NULL;
    iff->used = NULL;
    iff->next = pt->ifacefiles;

    pt->ifacefiles = iff;

    return iff;
}


/*
 * Find a class definition in a parse tree.
 */
static classDef *findClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *fqname)
{
    return findClassWithInterface(pt, findIfaceFile(pt, currentModule, fqname, iftype, api_range, NULL));
}


/*
 * Find a class definition given an existing interface file.
 */
static classDef *findClassWithInterface(sipSpec *pt, ifaceFileDef *iff)
{
    classDef *cd;

    for (cd = pt -> classes; cd != NULL; cd = cd -> next)
        if (cd -> iff == iff)
            return cd;

    /* Create a new one. */
    cd = sipMalloc(sizeof (classDef));

    cd->iff = iff;
    cd->pyname = cacheName(pt, classBaseName(cd));
    cd->next = pt->classes;

    pt->classes = cd;

    return cd;
}


/*
 * Add an interface file to an interface file list if it isn't already there.
 */
void addToUsedList(ifaceFileList **ifflp, ifaceFileDef *iff)
{
    /* Make sure we don't try to add an interface file to its own list. */
    if (&iff->used != ifflp)
    {
        ifaceFileList *iffl;

        while ((iffl = *ifflp) != NULL)
        {
            /* Don't bother if it is already there. */
            if (iffl->iff == iff)
                return;

            ifflp = &iffl -> next;
        }

        iffl = sipMalloc(sizeof (ifaceFileList));

        iffl->iff = iff;
        iffl->next = NULL;

        *ifflp = iffl;
    }
}


/*
 * Find an undefined (or create a new) exception definition in a parse tree.
 */
static exceptionDef *findException(sipSpec *pt, scopedNameDef *fqname, int new)
{
    exceptionDef *xd, **tail;
    ifaceFileDef *iff;
    classDef *cd;

    iff = findIfaceFile(pt, currentModule, fqname, exception_iface, NULL, NULL);

    /* See if it is an existing one. */
    for (xd = pt->exceptions; xd != NULL; xd = xd->next)
        if (xd->iff == iff)
            return xd;

    /*
     * If it is an exception interface file then we have never seen this name
     * before.  We require that exceptions are defined before being used, but
     * don't make the same requirement of classes (for reasons of backwards
     * compatibility).  Therefore the name must be reinterpreted as a (as yet
     * undefined) class.
     */
    if (new)
    {
        if (iff->type == exception_iface)
            cd = NULL;
        else
            yyerror("There is already a class with the same name or the exception has been used before being defined");
    }
    else
    {
        if (iff->type == exception_iface)
            iff->type = class_iface;

        cd = findClassWithInterface(pt, iff);
    }

    /* Create a new one. */
    xd = sipMalloc(sizeof (exceptionDef));

    xd->exceptionnr = -1;
    xd->iff = iff;
    xd->pyname = NULL;
    xd->cd = cd;
    xd->bibase = NULL;
    xd->base = NULL;
    xd->raisecode = NULL;
    xd->next = NULL;

    /* Append it to the list. */
    for (tail = &pt->exceptions; *tail != NULL; tail = &(*tail)->next)
        ;

    *tail = xd;

    return xd;
}


/*
 * Find an undefined (or create a new) class definition in a parse tree.
 */
static classDef *newClass(sipSpec *pt, ifaceFileType iftype,
        apiVersionRangeDef *api_range, scopedNameDef *fqname,
        const char *virt_error_handler)
{
    int flags;
    classDef *cd, *scope;
    codeBlockList *hdrcode;

    if (sectionFlags & SECT_IS_PRIVATE)
        yyerror("Classes, structs and namespaces must be in the public or protected sections");

    flags = 0;

    if ((scope = currentScope()) != NULL)
    {
        if (sectionFlags & SECT_IS_PROT && !makeProtPublic)
        {
            flags = CLASS_IS_PROTECTED;

            if (scope->iff->type == class_iface)
                setHasShadow(scope);
        }

        /* Header code from outer scopes is also included. */
        hdrcode = scope->iff->hdrcode;
    }
    else
        hdrcode = NULL;

    if (pt -> genc)
    {
        /* C structs are always global types. */
        while (fqname -> next != NULL)
            fqname = fqname -> next;

        scope = NULL;
    }

    cd = findClass(pt, iftype, api_range, fqname);

    /* Check it hasn't already been defined. */
    if (iftype != namespace_iface && cd->iff->module != NULL)
        yyerror("The struct/class has already been defined");

    /* Complete the initialisation. */
    cd->classflags |= flags;
    cd->ecd = scope;
    cd->iff->module = currentModule;
    cd->virt_error_handler = virt_error_handler;

    if (currentIsTemplate)
        setIsTemplateClass(cd);

    appendCodeBlockList(&cd->iff->hdrcode, hdrcode);

    /* See if it is a namespace extender. */
    if (iftype == namespace_iface)
    {
        classDef *ns;

        for (ns = pt->classes; ns != NULL; ns = ns->next)
        {
            if (ns == cd)
                continue;

            if (ns->iff->type != namespace_iface)
                continue;

            if (compareScopedNames(ns->iff->fqcname, fqname) != 0)
                continue;

            cd->real = ns;
            break;
        }
    }

    return cd;
}


/*
 * Tidy up after finishing a class definition.
 */
static void finishClass(sipSpec *pt, moduleDef *mod, classDef *cd,
        optFlags *of)
{
    const char *pyname;
    optFlag *flg;

    /* Get the Python name and see if it is different to the C++ name. */
    pyname = getPythonName(mod, of, classBaseName(cd));

    cd->pyname = NULL;
    checkAttributes(pt, mod, cd->ecd, NULL, pyname, FALSE);
    cd->pyname = cacheName(pt, pyname);

    if ((flg = getOptFlag(of, "Metatype", dotted_name_flag)) != NULL)
        cd->metatype = cacheName(pt, flg->fvalue.sval);

    if ((flg = getOptFlag(of, "Supertype", dotted_name_flag)) != NULL)
        cd->supertype = cacheName(pt, flg->fvalue.sval);

    if ((flg = getOptFlag(of, "PyQt4Flags", integer_flag)) != NULL)
        cd->pyqt4_flags = flg->fvalue.ival;

    if (getOptFlag(of, "PyQt4NoQMetaObject", bool_flag) != NULL)
        setPyQt4NoQMetaObject(cd);

    if (isOpaque(cd))
    {
        if (getOptFlag(of, "External", bool_flag) != NULL)
            setIsExternal(cd);
    }
    else
    {
        int seq_might, seq_not;
        memberDef *md;

        if (getOptFlag(of, "NoDefaultCtors", bool_flag) != NULL)
            setNoDefaultCtors(cd);

        if (cd -> ctors == NULL)
        {
            if (!noDefaultCtors(cd))
            {
                /* Provide a default ctor. */

                cd->ctors = sipMalloc(sizeof (ctorDef));
 
                cd->ctors->ctorflags = SECT_IS_PUBLIC;
                cd->ctors->pysig.result.atype = void_type;
                cd->ctors->cppsig = &cd->ctors->pysig;

                cd->defctor = cd->ctors;

                setCanCreate(cd);
            }
        }
        else if (cd -> defctor == NULL)
        {
            ctorDef *ct, *last = NULL;

            for (ct = cd -> ctors; ct != NULL; ct = ct -> next)
            {
                if (!isPublicCtor(ct))
                    continue;

                if (ct -> pysig.nrArgs == 0 || ct -> pysig.args[0].defval != NULL)
                {
                    cd -> defctor = ct;
                    break;
                }

                if (last == NULL)
                    last = ct;
            }

            /* The last resort is the first public ctor. */
            if (cd->defctor == NULL)
                cd->defctor = last;
        }

        if (getDeprecated(of))
            setIsDeprecatedClass(cd);

        if (cd->convtocode != NULL && getAllowNone(of))
            setClassHandlesNone(cd);

        if (getOptFlag(of,"Abstract",bool_flag) != NULL)
        {
            setIsAbstractClass(cd);
            setIsIncomplete(cd);
            resetCanCreate(cd);
        }

        /* We assume a public dtor if nothing specific was provided. */
        if (!isDtor(cd))
            setIsPublicDtor(cd);

        if (getOptFlag(of, "DelayDtor", bool_flag) != NULL)
        {
            setIsDelayedDtor(cd);
            setHasDelayedDtors(mod);
        }

        /*
         * There are subtle differences between the add and concat methods and
         * the multiply and repeat methods.  The number versions can have their
         * operands swapped and may return NotImplemented.  If the user has
         * used the /Numeric/ annotation or there are other numeric operators
         * then we use add/multiply.  Otherwise, if there are indexing
         * operators then we use concat/repeat.
         */
        seq_might = seq_not = FALSE;

        for (md = cd -> members; md != NULL; md = md -> next)
            switch (md -> slot)
            {
            case getitem_slot:
            case setitem_slot:
            case delitem_slot:
                /* This might be a sequence. */
                seq_might = TRUE;
                break;

            case sub_slot:
            case isub_slot:
            case div_slot:
            case idiv_slot:
            case mod_slot:
            case imod_slot:
            case floordiv_slot:
            case ifloordiv_slot:
            case truediv_slot:
            case itruediv_slot:
            case pos_slot:
            case neg_slot:
                /* This is definately not a sequence. */
                seq_not = TRUE;
                break;
            }

        if (!seq_not && seq_might)
            for (md = cd -> members; md != NULL; md = md -> next)
            {
                /* Ignore if the user has been explicit. */
                if (isNumeric(md))
                    continue;

                switch (md -> slot)
                {
                case add_slot:
                    md -> slot = concat_slot;
                    break;

                case iadd_slot:
                    md -> slot = iconcat_slot;
                    break;

                case mul_slot:
                    md -> slot = repeat_slot;
                    break;

                case imul_slot:
                    md -> slot = irepeat_slot;
                    break;
                }
            }
    }

    if (inMainModule())
    {
        setIsUsedName(cd->iff->name);
        setIsUsedName(cd->pyname);
    }
}


/*
 * Return the encoded name of a template (ie. including its argument types) as
 * a scoped name.
 */
scopedNameDef *encodedTemplateName(templateDef *td)
{
    int a;
    scopedNameDef *snd;

    snd = copyScopedName(td->fqname);

    for (a = 0; a < td->types.nrArgs; ++a)
    {
        char buf[50];
        int flgs;
        scopedNameDef *arg_snd;
        argDef *ad = &td->types.args[a];

        flgs = 0;

        if (isConstArg(ad))
            flgs += 1;

        if (isReference(ad))
            flgs += 2;

        /* We use numbers so they don't conflict with names. */
        sprintf(buf, "%02d%d%d", ad->atype, flgs, ad->nrderefs);

        switch (ad->atype)
        {
        case defined_type:
            arg_snd = copyScopedName(ad->u.snd);
            break;

        case template_type:
            arg_snd = encodedTemplateName(ad->u.td);
            break;

        case struct_type:
            arg_snd = copyScopedName(ad->u.sname);
            break;

        default:
            arg_snd = NULL;
        }

        /*
         * Replace the first element of the argument name with a copy with the
         * encoding prepended.
         */
        if (arg_snd != NULL)
            arg_snd->name = concat(buf, arg_snd->name, NULL);
        else
            arg_snd = text2scopePart(sipStrdup(buf));

        appendScopedName(&snd, arg_snd);
    }

    return snd;
}


/*
 * Create a new mapped type.
 */
static mappedTypeDef *newMappedType(sipSpec *pt, argDef *ad, optFlags *of)
{
    mappedTypeDef *mtd;
    scopedNameDef *snd;
    ifaceFileDef *iff;
    const char *cname;

    /* Check that the type is one we want to map. */
    switch (ad->atype)
    {
    case defined_type:
        snd = ad->u.snd;
        cname = scopedNameTail(snd);
        break;

    case template_type:
        snd = encodedTemplateName(ad->u.td);
        cname = NULL;
        break;

    case struct_type:
        snd = ad->u.sname;
        cname = scopedNameTail(snd);
        break;

    default:
        yyerror("Invalid type for %MappedType");
    }

    iff = findIfaceFile(pt, currentModule, snd, mappedtype_iface,
            getAPIRange(of), ad);

    /* Check it hasn't already been defined. */
    for (mtd = pt->mappedtypes; mtd != NULL; mtd = mtd->next)
        if (mtd->iff == iff)
        {
            /*
             * We allow types based on the same template but with different
             * arguments.
             */
            if (ad->atype != template_type || sameBaseType(ad, &mtd->type))
                yyerror("Mapped type has already been defined in this module");
        }

    /* The module may not have been set yet. */
    iff->module = currentModule;

    /* Create a new mapped type. */
    mtd = allocMappedType(pt, ad);

    if (cname != NULL)
        mtd->pyname = cacheName(pt, getPythonName(currentModule, of, cname));

    mappedTypeAnnos(mtd, of);

    mtd->iff = iff;
    mtd->next = pt->mappedtypes;

    pt->mappedtypes = mtd;

    if (inMainModule())
    {
        setIsUsedName(mtd->cname);

        if (mtd->pyname)
            setIsUsedName(mtd->pyname);
    }

    return mtd;
}


/*
 * Allocate, initialise and return a mapped type structure.
 */
mappedTypeDef *allocMappedType(sipSpec *pt, argDef *type)
{
    mappedTypeDef *mtd;

    mtd = sipMalloc(sizeof (mappedTypeDef));

    mtd->type = *type;
    mtd->type.argflags = 0;
    mtd->type.nrderefs = 0;

    mtd->cname = cacheName(pt, type2string(&mtd->type));

    return mtd;
}


/*
 * Create a new enum.
 */
static enumDef *newEnum(sipSpec *pt, moduleDef *mod, mappedTypeDef *mt_scope,
        char *name, optFlags *of, int flags)
{
    enumDef *ed, *first_alt, *next_alt;
    classDef *c_scope;
    ifaceFileDef *scope;

    if (mt_scope != NULL)
    {
        scope = mt_scope->iff;
        c_scope = NULL;
    }
    else
    {
        if ((c_scope = currentScope()) != NULL)
            scope = c_scope->iff;
        else
            scope = NULL;
    }

    ed = sipMalloc(sizeof (enumDef));

    /* Assume the enum isn't versioned. */
    first_alt = ed;
    next_alt = NULL;

    if (name != NULL)
    {
        ed->pyname = cacheName(pt, getPythonName(mod, of, name));
        checkAttributes(pt, mod, c_scope, mt_scope, ed->pyname->text, FALSE);

        ed->fqcname = text2scopedName(scope, name);
        ed->cname = cacheName(pt, scopedNameToString(ed->fqcname));

        if (inMainModule())
        {
            setIsUsedName(ed->pyname);
            setIsUsedName(ed->cname);
        }

        /* If the scope is versioned then look for any alternate. */
        if (scope != NULL && scope->api_range != NULL)
        {
            enumDef *alt;

            for (alt = pt->enums; alt != NULL; alt = alt->next)
            {
                if (alt->module != mod || alt->fqcname == NULL)
                    continue;

                if (compareScopedNames(alt->fqcname, ed->fqcname) == 0)
                {
                    first_alt = alt->first_alt;
                    next_alt = first_alt->next_alt;
                    first_alt->next_alt = ed;

                    break;
                }
            }
        }
    }
    else
    {
        ed->pyname = NULL;
        ed->fqcname = NULL;
        ed->cname = NULL;
    }

    if (flags & SECT_IS_PROT)
    {
        if (makeProtPublic)
        {
            flags &= ~SECT_IS_PROT;
            flags |= SECT_IS_PUBLIC;
        }
        else if (c_scope != NULL)
        {
            setHasShadow(c_scope);
        }
    }

    ed->enumflags = flags;
    ed->enumnr = -1;
    ed->ecd = c_scope;
    ed->emtd = mt_scope;
    ed->first_alt = first_alt;
    ed->next_alt = next_alt;
    ed->module = mod;
    ed->members = NULL;
    ed->slots = NULL;
    ed->overs = NULL;
    ed->next = pt -> enums;

    pt->enums = ed;

    return ed;
}


/*
 * Get the type values and (optionally) the type names for substitution in
 * handwritten code.
 */
void appendTypeStrings(scopedNameDef *ename, signatureDef *patt, signatureDef *src, signatureDef *known, scopedNameDef **names, scopedNameDef **values)
{
    int a;

    for (a = 0; a < patt->nrArgs; ++a)
    {
        argDef *pad = &patt->args[a];

        if (pad->atype == defined_type)
        {
            char *nam = NULL, *val;
            argDef *sad;

            /*
             * If the type names are already known then check that this is one
             * of them.
             */
            if (known == NULL)
                nam = scopedNameTail(pad->u.snd);
            else if (pad->u.snd->next == NULL)
            {
                int k;

                for (k = 0; k < known->nrArgs; ++k)
                {
                    /* Skip base types. */
                    if (known->args[k].atype != defined_type)
                        continue;

                    if (strcmp(pad->u.snd->name, known->args[k].u.snd->name) == 0)
                    {
                        nam = pad->u.snd->name;
                        break;
                    }
                }
            }

            if (nam == NULL)
                continue;

            /* Add the name. */
            appendScopedName(names, text2scopePart(nam));

            /*
             * Add the corresponding value.  For defined types we don't want 
             * any indirection or references.
             */
            sad = &src->args[a];

            if (sad->atype == defined_type)
                val = scopedNameToString(sad->u.snd);
            else
                val = type2string(sad);

            /* We do want const. */
            if (isConstArg(sad))
            {
                char *const_val = sipStrdup("const ");

                append(&const_val, val);
                free(val);

                val = const_val;
            }

            appendScopedName(values, text2scopePart(val));
        }
        else if (pad->atype == template_type)
        {
            argDef *sad = &src->args[a];

            /* These checks shouldn't be necessary, but... */
            if (sad->atype == template_type && pad->u.td->types.nrArgs == sad->u.td->types.nrArgs)
                appendTypeStrings(ename, &pad->u.td->types, &sad->u.td->types, known, names, values);
        }
    }
}


/*
 * Convert a type to a string on the heap.  The string will use the minimum
 * whitespace while still remaining valid C++.
 */
static char *type2string(argDef *ad)
{
    int i, on_heap = FALSE;
    int nr_derefs = ad->nrderefs;
    int is_reference = isReference(ad);
    char *s;

    /* Use the original type if possible. */
    if (ad->original_type != NULL && !noTypeName(ad->original_type))
    {
        s = scopedNameToString(ad->original_type->fqname);
        on_heap = TRUE;

        nr_derefs -= ad->original_type->type.nrderefs;

        if (isReference(&ad->original_type->type))
            is_reference = FALSE;
    }
    else
        switch (ad->atype)
        {
        case template_type:
            {
                templateDef *td = ad->u.td;

                s = scopedNameToString(td->fqname);
                append(&s, "<");

                for (i = 0; i < td->types.nrArgs; ++i)
                {
                    char *sub_type = type2string(&td->types.args[i]);

                    if (i > 0)
                        append(&s, ",");

                    append(&s, sub_type);
                    free(sub_type);
                }

                if (s[strlen(s) - 1] == '>')
                    append(&s, " >");
                else
                    append(&s, ">");

                on_heap = TRUE;
                break;
            }

        case struct_type:
            s = scopedNameToString(ad->u.sname);
            on_heap = TRUE;
            break;

        case defined_type:
            s = scopedNameToString(ad->u.snd);
            on_heap = TRUE;
            break;

        case ubyte_type:
        case ustring_type:
            s = "unsigned char";
            break;

        case byte_type:
        case ascii_string_type:
        case latin1_string_type:
        case utf8_string_type:
        case string_type:
            s = "char";
            break;

        case sbyte_type:
        case sstring_type:
            s = "signed char";
            break;

        case wstring_type:
            s = "wchar_t";
            break;

        case ushort_type:
            s = "unsigned short";
            break;

        case short_type:
            s = "short";
            break;

        case uint_type:
            s = "uint";
            break;

        case int_type:
        case cint_type:
            s = "int";
            break;

        case ulong_type:
            s = "unsigned long";
            break;

        case long_type:
            s = "long";
            break;

        case ulonglong_type:
            s = "unsigned long long";
            break;

        case longlong_type:
            s = "long long";
            break;

        case float_type:
        case cfloat_type:
            s = "float";
            break;

        case double_type:
        case cdouble_type:
            s = "double";
            break;

        case bool_type:
        case cbool_type:
            s = "bool";
            break;

        case void_type:
            s = "void";
            break;

        case capsule_type:
            s = "void *";
            break;

        default:
            fatal("Unsupported type argument to type2string(): %d\n", ad->atype);
        }

    /* Make sure the string is on the heap. */
    if (!on_heap)
        s = sipStrdup(s);

    while (nr_derefs-- > 0)
        append(&s, "*");

    if (is_reference)
        append(&s, "&");

    return s;
}


/*
 * Convert a scoped name to a string on the heap.
 */
static char *scopedNameToString(scopedNameDef *name)
{
    static const char scope_string[] = "::";
    size_t len;
    scopedNameDef *snd;
    char *s, *dp;

    /* Work out the length of buffer needed. */
    len = 0;

    for (snd = name; snd != NULL; snd = snd->next)
    {
        len += strlen(snd->name);

        if (snd->next != NULL)
        {
            /* Ignore the encoded part of template names. */
            if (isdigit(snd->next->name[0]))
                break;

            len += strlen(scope_string);
        }
    }

    /* Allocate and populate the buffer. */
    dp = s = sipMalloc(len + 1);

    for (snd = name; snd != NULL; snd = snd->next)
    {
        strcpy(dp, snd->name);
        dp += strlen(snd->name);

        if (snd->next != NULL)
        {
            /* Ignore the encoded part of template names. */
            if (isdigit(snd->next->name[0]))
                break;

            strcpy(dp, scope_string);
            dp += strlen(scope_string);
        }
    }

    return s;
}


/*
 * Instantiate a class template.
 */
static void instantiateClassTemplate(sipSpec *pt, moduleDef *mod,
        classDef *scope, scopedNameDef *fqname, classTmplDef *tcd,
        templateDef *td, const char *pyname)
{
    scopedNameDef *type_names, *type_values;
    classDef *cd;
    ctorDef *oct, **cttail;
    argDef *ad;
    ifaceFileList *iffl, **used;
    classList *cl;

    type_names = type_values = NULL;
    appendTypeStrings(classFQCName(tcd->cd), &tcd->sig, &td->types, NULL, &type_names, &type_values);

    /*
     * Add a mapping from the template name to the instantiated name.  If we
     * have got this far we know there is room for it.
     */
    ad = &tcd->sig.args[tcd->sig.nrArgs++];
    memset(ad, 0, sizeof (argDef));
    ad->atype = defined_type;
    ad->u.snd = classFQCName(tcd->cd);

    appendScopedName(&type_names, text2scopePart(scopedNameTail(classFQCName(tcd->cd))));
    appendScopedName(&type_values, text2scopePart(scopedNameToString(fqname)));

    /* Create the new class. */
    cd = sipMalloc(sizeof (classDef));

    /* Start with a shallow copy. */
    *cd = *tcd->cd;

    resetIsTemplateClass(cd);
    cd->pyname = cacheName(pt, pyname);
    cd->td = td;

    /* Handle the interface file. */
    cd->iff = findIfaceFile(pt, mod, fqname, class_iface,
            (scope != NULL ? scope->iff->api_range : NULL), NULL);
    cd->iff->module = mod;

    appendCodeBlockList(&cd->iff->hdrcode, tcd->cd->iff->hdrcode);

    /* Make a copy of the used list and add the enclosing scope. */
    used = &cd->iff->used;

    for (iffl = tcd->cd->iff->used; iffl != NULL; iffl = iffl->next)
        addToUsedList(used, iffl->iff);

    /* Include any scope header code. */
    if (scope != NULL)
        appendCodeBlockList(&cd->iff->hdrcode, scope->iff->hdrcode);

    if (inMainModule())
    {
        setIsUsedName(cd->iff->name);
        setIsUsedName(cd->pyname);
    }

    cd->ecd = currentScope();

    /* Handle the super-classes. */
    for (cl = cd->supers; cl != NULL; cl = cl->next)
    {
        const char *name;
        int a;

        /* Ignore defined or scoped classes. */
        if (cl->cd->iff->module != NULL || cl->cd->iff->fqcname->next != NULL)
            continue;

        name = cl->cd->iff->fqcname->name;

        for (a = 0; a < tcd->sig.nrArgs - 1; ++a)
            if (strcmp(name, scopedNameTail(tcd->sig.args[a].u.snd)) == 0)
            {
                argDef *tad = &td->types.args[a];
                classDef *icd;

                if (tad->atype == defined_type)
                    icd = findClass(pt, class_iface, NULL, tad->u.snd);
                else if (tad->atype == class_type)
                    icd = tad->u.cd;
                else
                    fatal("Template argument %s must expand to a class\n", name);

                /*
                 * Don't complain about the template argument being undefined.
                 */
                setTemplateArg(cl->cd);

                cl->cd = icd;
            }
    }

    /* Handle the enums. */
    instantiateTemplateEnums(pt, tcd, td, cd, used, type_names, type_values);

    /* Handle the variables. */
    instantiateTemplateVars(pt, tcd, td, cd, used, type_names, type_values);

    /* Handle the typedefs. */
    instantiateTemplateTypedefs(pt, tcd, td, cd);

    /* Handle the ctors. */
    cd->ctors = NULL;
    cttail = &cd->ctors;

    for (oct = tcd->cd->ctors; oct != NULL; oct = oct->next)
    {
        ctorDef *nct = sipMalloc(sizeof (ctorDef));

        /* Start with a shallow copy. */
        *nct = *oct;

        templateSignature(&nct->pysig, FALSE, tcd, td, cd);

        if (oct->cppsig == NULL)
            nct->cppsig = NULL;
        else if (oct->cppsig == &oct->pysig)
            nct->cppsig = &nct->pysig;
        else
        {
            nct->cppsig = sipMalloc(sizeof (signatureDef));

            *nct->cppsig = *oct->cppsig;

            templateSignature(nct->cppsig, FALSE, tcd, td, cd);
        }

        nct->methodcode = templateCode(pt, used, nct->methodcode, type_names, type_values);

        nct->next = NULL;
        *cttail = nct;
        cttail = &nct->next;

        /* Handle the default ctor. */
        if (tcd->cd->defctor == oct)
            cd->defctor = nct;
    }

    cd->dealloccode = templateCode(pt, used, cd->dealloccode, type_names, type_values);
    cd->dtorcode = templateCode(pt, used, cd->dtorcode, type_names, type_values);

    /* Handle the methods. */
    cd->members = instantiateTemplateMethods(tcd->cd->members, mod);
    cd->overs = instantiateTemplateOverloads(pt, tcd->cd->overs,
            tcd->cd->members, cd->members, tcd, td, cd, used, type_names,
            type_values);

    cd->cppcode = templateCode(pt, used, cd->cppcode, type_names, type_values);
    cd->iff->hdrcode = templateCode(pt, used, cd->iff->hdrcode, type_names, type_values);
    cd->convtosubcode = templateCode(pt, used, cd->convtosubcode, type_names, type_values);
    cd->convtocode = templateCode(pt, used, cd->convtocode, type_names, type_values);
    cd->travcode = templateCode(pt, used, cd->travcode, type_names, type_values);
    cd->clearcode = templateCode(pt, used, cd->clearcode, type_names, type_values);
    cd->getbufcode = templateCode(pt, used, cd->getbufcode, type_names, type_values);
    cd->releasebufcode = templateCode(pt, used, cd->releasebufcode, type_names, type_values);
    cd->readbufcode = templateCode(pt, used, cd->readbufcode, type_names, type_values);
    cd->writebufcode = templateCode(pt, used, cd->writebufcode, type_names, type_values);
    cd->segcountcode = templateCode(pt, used, cd->segcountcode, type_names, type_values);
    cd->charbufcode = templateCode(pt, used, cd->charbufcode, type_names, type_values);
    cd->instancecode = templateCode(pt, used, cd->instancecode, type_names, type_values);
    cd->picklecode = templateCode(pt, used, cd->picklecode, type_names, type_values);
    cd->next = pt->classes;

    pt->classes = cd;

    tcd->sig.nrArgs--;

    freeScopedName(type_names);
    freeScopedName(type_values);
}


/*
 * Instantiate the methods of a template class.
 */
static memberDef *instantiateTemplateMethods(memberDef *tmd, moduleDef *mod)
{
    memberDef *md, *methods, **mdtail;

    methods = NULL;
    mdtail = &methods;

    for (md = tmd; md != NULL; md = md->next)
    {
        memberDef *nmd = sipMalloc(sizeof (memberDef));

        /* Start with a shallow copy. */
        *nmd = *md;

        nmd->module = mod;

        if (inMainModule())
            setIsUsedName(nmd->pyname);

        nmd->next = NULL;
        *mdtail = nmd;
        mdtail = &nmd->next;
    }

    return methods;
}


/*
 * Instantiate the overloads of a template class.
 */
static overDef *instantiateTemplateOverloads(sipSpec *pt, overDef *tod,
        memberDef *tmethods, memberDef *methods, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    overDef *od, *overloads, **odtail;

    overloads = NULL;
    odtail = &overloads;

    for (od = tod; od != NULL; od = od->next)
    {
        overDef *nod = sipMalloc(sizeof (overDef));
        memberDef *nmd, *omd;

        /* Start with a shallow copy. */
        *nod = *od;

        for (nmd = methods, omd = tmethods; omd != NULL; omd = omd->next, nmd = nmd->next)
            if (omd == od->common)
            {
                nod->common = nmd;
                break;
            }

        templateSignature(&nod->pysig, TRUE, tcd, td, cd);

        if (od->cppsig == &od->pysig)
            nod->cppsig = &nod->pysig;
        else
        {
            nod->cppsig = sipMalloc(sizeof (signatureDef));

            *nod->cppsig = *od->cppsig;

            templateSignature(nod->cppsig, TRUE, tcd, td, cd);
        }

        nod->methodcode = templateCode(pt, used, nod->methodcode, type_names, type_values);

        /* Handle any virtual handler. */
        if (od->virthandler != NULL)
        {
            moduleDef *mod = cd->iff->module;

            nod->virthandler = sipMalloc(sizeof (virtHandlerDef));

            /* Start with a shallow copy. */
            *nod->virthandler = *od->virthandler;

            nod->virthandler->pysig = &nod->pysig;
            nod->virthandler->cppsig = nod->cppsig;

            nod->virthandler->module = mod;
            nod->virthandler->virtcode = templateCode(pt, used, nod->virthandler->virtcode, type_names, type_values);
            nod->virthandler->next = mod->virthandlers;

            mod->virthandlers = nod->virthandler;
        }

        nod->next = NULL;
        *odtail = nod;
        odtail = &nod->next;
    }

    return overloads;
}


/*
 * Instantiate the enums of a template class.
 */
static void instantiateTemplateEnums(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    enumDef *ted;
    moduleDef *mod = cd->iff->module;

    for (ted = pt->enums; ted != NULL; ted = ted->next)
        if (ted->ecd == tcd->cd)
        {
            enumDef *ed;
            enumMemberDef *temd;

            ed = sipMalloc(sizeof (enumDef));

            /* Start with a shallow copy. */
            *ed = *ted;

            if (ed->fqcname != NULL)
            {
                ed->fqcname = text2scopedName(cd->iff,
                        scopedNameTail(ed->fqcname));
                ed->cname = cacheName(pt, scopedNameToString(ed->fqcname));
            }

            if (inMainModule())
            {
                if (ed->pyname != NULL)
                    setIsUsedName(ed->pyname);

                if (ed->cname != NULL)
                    setIsUsedName(ed->cname);
            }

            ed->ecd = cd;
            ed->first_alt = ed;
            ed->module = mod;
            ed->members = NULL;

            for (temd = ted->members; temd != NULL; temd = temd->next)
            {
                enumMemberDef *emd;

                emd = sipMalloc(sizeof (enumMemberDef));

                /* Start with a shallow copy. */
                *emd = *temd;
                emd->ed = ed;

                emd->next = ed->members;
                ed->members = emd;
            }

            ed->slots = instantiateTemplateMethods(ted->slots, mod);
            ed->overs = instantiateTemplateOverloads(pt, ted->overs,
                    ted->slots, ed->slots, tcd, td, cd, used, type_names,
                    type_values);

            ed->next = pt->enums;
            pt->enums = ed;
        }
}


/*
 * Instantiate the variables of a template class.
 */
static void instantiateTemplateVars(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd, ifaceFileList **used,
        scopedNameDef *type_names, scopedNameDef *type_values)
{
    varDef *tvd;

    for (tvd = pt->vars; tvd != NULL; tvd = tvd->next)
        if (tvd->ecd == tcd->cd)
        {
            varDef *vd;

            vd = sipMalloc(sizeof (varDef));

            /* Start with a shallow copy. */
            *vd = *tvd;

            if (inMainModule())
                setIsUsedName(vd->pyname);

            vd->fqcname = text2scopedName(cd->iff,
                    scopedNameTail(vd->fqcname));
            vd->ecd = cd;
            vd->module = cd->iff->module;

            templateType(&vd->type, tcd, td, cd);

            vd->accessfunc = templateCode(pt, used, vd->accessfunc, type_names, type_values);
            vd->getcode = templateCode(pt, used, vd->getcode, type_names, type_values);
            vd->setcode = templateCode(pt, used, vd->setcode, type_names, type_values);

            addVariable(pt, vd);
        }
}


/*
 * Instantiate the typedefs of a template class.
 */
static void instantiateTemplateTypedefs(sipSpec *pt, classTmplDef *tcd,
        templateDef *td, classDef *cd)
{
    typedefDef *tdd;

    for (tdd = pt->typedefs; tdd != NULL; tdd = tdd->next)
    {
        typedefDef *new_tdd;

        if (tdd->ecd != tcd->cd)
            continue;

        new_tdd = sipMalloc(sizeof (typedefDef));

        /* Start with a shallow copy. */
        *new_tdd = *tdd;

        new_tdd->fqname = text2scopedName(cd->iff,
                scopedNameTail(new_tdd->fqname));
        new_tdd->ecd = cd;
        new_tdd->module = cd->iff->module;

        templateType(&new_tdd->type, tcd, td, cd);

        addTypedef(pt, new_tdd);
    }
}


/*
 * Replace any template arguments in a signature.
 */
static void templateSignature(signatureDef *sd, int result, classTmplDef *tcd, templateDef *td, classDef *ncd)
{
    int a;

    if (result)
        templateType(&sd->result, tcd, td, ncd);

    for (a = 0; a < sd->nrArgs; ++a)
        templateType(&sd->args[a], tcd, td, ncd);
}


/*
 * Replace any template arguments in a type.
 */
static void templateType(argDef *ad, classTmplDef *tcd, templateDef *td, classDef *ncd)
{
    int a;
    char *name;

    /* Descend into any sub-templates. */
    if (ad->atype == template_type)
    {
        templateDef *new_td = sipMalloc(sizeof (templateDef));

        /* Make a deep copy of the template definition. */
        *new_td = *ad->u.td;
        ad->u.td = new_td;

        templateSignature(&ad->u.td->types, FALSE, tcd, td, ncd);

        return;
    }

    /* Ignore if it isn't an unscoped name. */
    if (ad->atype != defined_type || ad->u.snd->next != NULL)
        return;

    name = ad->u.snd->name;

    for (a = 0; a < tcd->sig.nrArgs - 1; ++a)
        if (strcmp(name, scopedNameTail(tcd->sig.args[a].u.snd)) == 0)
        {
            argDef *tad = &td->types.args[a];

            ad->atype = tad->atype;

            /* We take the constrained flag from the real type. */
            resetIsConstrained(ad);

            if (isConstrained(tad))
                setIsConstrained(ad);

            ad->u = tad->u;

            return;
        }

    /* Handle the class name itself. */
    if (strcmp(name, scopedNameTail(classFQCName(tcd->cd))) == 0)
    {
        ad->atype = class_type;
        ad->u.cd = ncd;
        ad->original_type = NULL;
    }
}


/*
 * Replace any template arguments in a literal code block.
 */
codeBlockList *templateCode(sipSpec *pt, ifaceFileList **used,
        codeBlockList *ocbl, scopedNameDef *names, scopedNameDef *values)
{
    codeBlockList *ncbl = NULL;

    while (ocbl != NULL)
    {
        char *at = ocbl->block->frag;
        int start_of_line = TRUE;

        do
        {
            char *from = at, *first = NULL;
            codeBlock *cb;
            scopedNameDef *nam, *val, *nam_first, *val_first;

            /*
             * Don't do any substitution in lines that appear to be
             * preprocessor directives.  This prevents #include'd file names
             * being broken.
             */
            if (start_of_line)
            {
                /* Strip leading whitespace. */
                while (isspace(*from))
                    ++from;

                if (*from == '#')
                {
                    /* Skip to the end of the line. */
                    do
                        ++from;
                    while (*from != '\n' && *from != '\0');
                }
                else
                {
                    start_of_line = FALSE;
                }
            }

            /*
             * Go through the rest of this fragment looking for each of the
             * types and the name of the class itself.
             */
            nam = names;
            val = values;

            while (nam != NULL && val != NULL)
            {
                char *cp;

                if ((cp = strstr(from, nam->name)) != NULL)
                    if (first == NULL || first > cp)
                    {
                        nam_first = nam;
                        val_first = val;
                        first = cp;
                    }

                nam = nam->next;
                val = val->next;
            }

            /* Create the new fragment. */
            cb = sipMalloc(sizeof (codeBlock));

            if (at == ocbl->block->frag)
            {
                cb->filename = ocbl->block->filename;
                cb->linenr = ocbl->block->linenr;
            }
            else
                cb->filename = NULL;

            appendCodeBlock(&ncbl, cb);

            /* See if anything was found. */
            if (first == NULL)
            {
                /* We can just point to this. */
                cb->frag = at;

                /* All done with this one. */
                at = NULL;
            }
            else
            {
                static char *gen_names[] = {
                    "sipType_",
                    "sipClass_",
                    "sipEnum_",
                    "sipException_",
                    NULL
                };

                char *dp, *sp, **gn;
                int genname = FALSE;

                /*
                 * If the context in which the text is used is in the name of a
                 * SIP generated object then translate any "::" scoping to "_"
                 * and remove any const.
                 */
                for (gn = gen_names; *gn != NULL; ++gn)
                    if (search_back(first, at, *gn))
                    {
                        addUsedFromCode(pt, used, val_first->name);
                        genname = TRUE;
                        break;
                    }

                /* Fragment the fragment. */
                cb->frag = sipMalloc(first - at + strlen(val_first->name) + 1);

                strncpy(cb->frag, at, first - at);

                dp = &cb->frag[first - at];
                sp = val_first->name;

                if (genname)
                {
                    char gch;

                    if (strlen(sp) > 6 && strncmp(sp, "const ", 6) == 0)
                        sp += 6;

                    while ((gch = *sp++) != '\0')
                        if (gch == ':' && *sp == ':')
                        {
                            *dp++ = '_';
                            ++sp;
                        }
                        else
                            *dp++ = gch;

                    *dp = '\0';
                }
                else
                    strcpy(dp, sp);

                /* Move past the replaced text. */
                at = first + strlen(nam_first->name);

                if (*at == '\n')
                    start_of_line = TRUE;
            }
        }
        while (at != NULL && *at != '\0');

        ocbl = ocbl->next;
    }

    return ncbl;
}


/*
 * Return TRUE if the text at the end of a string matches the target string.
 */
static int search_back(const char *end, const char *start, const char *target)
{
    size_t tlen = strlen(target);

    if (start + tlen >= end)
        return FALSE;

    return (strncmp(end - tlen, target, tlen) == 0);
}


/*
 * Add any needed interface files based on handwritten code.
 */
static void addUsedFromCode(sipSpec *pt, ifaceFileList **used, const char *sname)
{
    ifaceFileDef *iff;
    enumDef *ed;

    for (iff = pt->ifacefiles; iff != NULL; iff = iff->next)
    {
        if (iff->type != class_iface && iff->type != exception_iface)
            continue;

        if (sameName(iff->fqcname, sname))
        {
            addToUsedList(used, iff);
            return;
        }
    }

    for (ed = pt->enums; ed != NULL; ed = ed->next)
    {
        if (ed->ecd == NULL)
            continue;

        if (sameName(ed->fqcname, sname))
        {
            addToUsedList(used, ed->ecd->iff);
            return;
        }
    }
}


/*
 * Compare a scoped name with its string equivalent.
 */
static int sameName(scopedNameDef *snd, const char *sname)
{
    while (snd != NULL && *sname != '\0')
    {
        const char *sp = snd->name;

        while (*sp != '\0' && *sname != ':' && *sname != '\0')
            if (*sp++ != *sname++)
                return FALSE;

        if (*sp != '\0' || (*sname != ':' && *sname != '\0'))
            return FALSE;

        snd = snd->next;

        if (*sname == ':')
            sname += 2;
    }

    return (snd == NULL && *sname == '\0');
}


/*
 * Compare a (possibly) relative scoped name with a fully qualified scoped name
 * while taking the current scope into account.
 */
static int foundInScope(scopedNameDef *fq_name, scopedNameDef *rel_name)
{
    classDef *scope;

    for (scope = currentScope(); scope != NULL; scope = scope->ecd)
    {
        scopedNameDef *snd;
        int found;

        snd = copyScopedName(classFQCName(scope));
        appendScopedName(&snd, copyScopedName(rel_name));

        found = (compareScopedNames(fq_name, snd) == 0);

        freeScopedName(snd);

        if (found)
            return TRUE;
    }

    return compareScopedNames(fq_name, rel_name) == 0;
}


/*
 * Create a new typedef.
 */
static void newTypedef(sipSpec *pt, moduleDef *mod, char *name, argDef *type,
        optFlags *optflgs)
{
    typedefDef *td;
    scopedNameDef *fqname;
    classDef *scope;

    scope = currentScope();
    fqname = text2scopedName((scope != NULL ? scope->iff : NULL), name);

    /* See if we are instantiating a template class. */
    if (type->atype == template_type)
    {
        classTmplDef *tcd;
        templateDef *td = type->u.td;

        for (tcd = pt->classtemplates; tcd != NULL; tcd = tcd->next)
            if (foundInScope(tcd->cd->iff->fqcname, td->fqname) &&
                sameTemplateSignature(&tcd->sig, &td->types, FALSE))
            {
                instantiateClassTemplate(pt, mod, scope, fqname, tcd, td,
                        getPythonName(mod, optflgs, name));

                /* All done. */
                return;
            }
    }

    td = sipMalloc(sizeof (typedefDef));

    td->tdflags = 0;
    td->fqname = fqname;
    td->ecd = scope;
    td->module = mod;
    td->type = *type;

    if (getOptFlag(optflgs, "Capsule", bool_flag) != NULL)
    {
        /* Make sure the type is void *. */
        if (type->atype != void_type || type->nrderefs != 1 || isConstArg(type) || isReference(type))
        {
            fatalScopedName(fqname);
            fatal(" must be a void* if /Capsule/ is specified\n");
        }

        td->type.atype = capsule_type;
        td->type.nrderefs = 0;
        td->type.u.cap = fqname;
    }

    if (getOptFlag(optflgs, "NoTypeName", bool_flag) != NULL)
        setNoTypeName(td);

    addTypedef(pt, td);
}


/*
 * Add a typedef to the list so that the list remains sorted.
 */
static void addTypedef(sipSpec *pt, typedefDef *tdd)
{
    typedefDef **tdp;

    /*
     * Check it doesn't already exist and find the position in the sorted list
     * where it should be put.
     */
    for (tdp = &pt->typedefs; *tdp != NULL; tdp = &(*tdp)->next)
    {
        int res = compareScopedNames((*tdp)->fqname, tdd->fqname);

        if (res == 0)
        {
            fatalScopedName(tdd->fqname);
            fatal(" already defined\n");
        }

        if (res > 0)
            break;
    }

    tdd->next = *tdp;
    *tdp = tdd;

    tdd->module->nrtypedefs++;
}


/*
 * Speculatively try and resolve any typedefs.  In some cases (eg. when
 * comparing template signatures) it helps to use the real type if it is known.
 * Note that this wouldn't be necessary if we required that all types be known
 * before they are used.
 */
static void resolveAnyTypedef(sipSpec *pt, argDef *ad)
{
    argDef orig = *ad;

    while (ad->atype == defined_type)
    {
        ad->atype = no_type;
        searchTypedefs(pt, ad->u.snd, ad);

        /*
         * Don't resolve to a template type as it may be superceded later on
         * by a more specific mapped type.
         */
        if (ad->atype == no_type || ad->atype == template_type)
        {
            *ad = orig;
            break;
        }
    }
}


/*
 * Return TRUE if the template signatures are the same.  A deep comparison is
 * used for mapped type templates where we want to recurse into any nested
 * templates.
 */
int sameTemplateSignature(signatureDef *tmpl_sd, signatureDef *args_sd,
        int deep)
{
    int a;

    if (tmpl_sd->nrArgs != args_sd->nrArgs)
        return FALSE;

    for (a = 0; a < tmpl_sd->nrArgs; ++a)
    {
        argDef *tmpl_ad = &tmpl_sd->args[a];
        argDef *args_ad = &args_sd->args[a];

        /*
         * If we are doing a shallow comparision (ie. for class templates) then
         * a type name in the template signature matches anything in the
         * argument signature.
         */
        if (tmpl_ad->atype == defined_type && !deep)
            continue;

        /*
         * For type names only compare the references and pointers, and do the
         * same for any nested templates.
         */
        if (tmpl_ad->atype == defined_type && args_ad->atype == defined_type)
        {
            if (isReference(tmpl_ad) != isReference(args_ad) || tmpl_ad->nrderefs != args_ad->nrderefs)
                return FALSE;
        }
        else if (tmpl_ad->atype == template_type && args_ad->atype == template_type)
        {
            if (!sameTemplateSignature(&tmpl_ad->u.td->types, &args_ad->u.td->types, deep))
                return FALSE;
        }
        else if (!sameBaseType(tmpl_ad, args_ad))
            return FALSE;
    }

    return TRUE;
}


/*
 * Create a new variable.
 */
static void newVar(sipSpec *pt, moduleDef *mod, char *name, int isstatic,
        argDef *type, optFlags *of, codeBlock *acode, codeBlock *gcode,
        codeBlock *scode, int section)
{
    varDef *var;
    classDef *escope = currentScope();
    nameDef *nd;

    /*
     * For the moment we don't support capsule variables because it needs the
     * API major version increasing.
     */
    if (type->atype == capsule_type)
        yyerror("Capsule variables not yet supported");

    /* Check the section. */
    if (section != 0)
    {
        if ((section & SECT_IS_PUBLIC) == 0)
            yyerror("Class variables must be in the public section");

        if (!isstatic && acode != NULL)
            yyerror("%AccessCode cannot be specified for non-static class variables");
    }

    if (isstatic && pt->genc)
        yyerror("Cannot have static members in a C structure");

    if (gcode != NULL || scode != NULL)
    {
        if (acode != NULL)
            yyerror("Cannot mix %AccessCode and %GetCode or %SetCode");

        if (escope == NULL)
            yyerror("Cannot specify %GetCode or %SetCode for global variables");
    }

    applyTypeFlags(mod, type, of);

    nd = cacheName(pt, getPythonName(mod, of, name));

    if (inMainModule())
        setIsUsedName(nd);

    checkAttributes(pt, mod, escope, NULL, nd->text, FALSE);

    var = sipMalloc(sizeof (varDef));

    var->pyname = nd;
    var->fqcname = text2scopedName((escope != NULL ? escope->iff : NULL),
            name);
    var->ecd = escope;
    var->module = mod;
    var->varflags = 0;
    var->type = *type;
    appendCodeBlock(&var->accessfunc, acode);
    appendCodeBlock(&var->getcode, gcode);
    appendCodeBlock(&var->setcode, scode);

    if (isstatic || (escope != NULL && escope->iff->type == namespace_iface))
        setIsStaticVar(var);

    addVariable(pt, var);
}


/*
 * Create a new ctor.
 */
static void newCtor(moduleDef *mod, char *name, int sectFlags,
        signatureDef *args, optFlags *optflgs, codeBlock *methodcode,
        throwArgs *exceptions, signatureDef *cppsig, int explicit,
        codeBlock *docstring)
{
    ctorDef *ct, **ctp;
    classDef *cd = currentScope();

    /* Check the name of the constructor. */
    if (strcmp(classBaseName(cd), name) != 0)
        yyerror("Constructor doesn't have the same name as its class");

    if (docstring != NULL)
        appendCodeBlock(&cd->docstring, docstring);

    /* Add to the list of constructors. */
    ct = sipMalloc(sizeof (ctorDef));

    if (sectFlags & SECT_IS_PROT && makeProtPublic)
    {
        sectFlags &= ~SECT_IS_PROT;
        sectFlags |= SECT_IS_PUBLIC;
    }

    /* Allow the signature to be used like an function signature. */
    memset(&args->result, 0, sizeof (argDef));
    args->result.atype = void_type;

    ct->ctorflags = sectFlags;
    ct->api_range = getAPIRange(optflgs);
    ct->pysig = *args;
    ct->cppsig = (cppsig != NULL ? cppsig : &ct->pysig);
    ct->exceptions = exceptions;
    appendCodeBlock(&ct->methodcode, methodcode);

    if (!isPrivateCtor(ct))
        setCanCreate(cd);

    if (isProtectedCtor(ct))
        setHasShadow(cd);

    if (explicit)
        setIsExplicitCtor(ct);

    getHooks(optflgs, &ct->prehook, &ct->posthook);

    if (getReleaseGIL(optflgs))
        setIsReleaseGILCtor(ct);
    else if (getHoldGIL(optflgs))
        setIsHoldGILCtor(ct);

    if (getTransfer(optflgs))
        setIsResultTransferredCtor(ct);

    if (getDeprecated(optflgs))
        setIsDeprecatedCtor(ct);

    if (!isPrivateCtor(ct))
        ct->kwargs = keywordArgs(mod, optflgs, &ct->pysig, FALSE);

    if (methodcode == NULL && getOptFlag(optflgs, "NoRaisesPyException", bool_flag) == NULL)
    {
        if (allRaisePyException(mod) || getOptFlag(optflgs, "RaisesPyException", bool_flag) != NULL)
            setRaisesPyExceptionCtor(ct);
    }

    if (getOptFlag(optflgs, "NoDerived", bool_flag) != NULL)
    {
        if (cppsig != NULL)
            yyerror("The /NoDerived/ annotation cannot be used with a C++ signature");

        if (methodcode == NULL)
            yyerror("The /NoDerived/ annotation must be used with %MethodCode");

        ct->cppsig = NULL;
    }

    if (getOptFlag(optflgs, "Default", bool_flag) != NULL)
    {
        if (cd->defctor != NULL)
            yyerror("A constructor with the /Default/ annotation has already been defined");

        cd->defctor = ct;
    }

    /* Append to the list. */
    for (ctp = &cd->ctors; *ctp != NULL; ctp = &(*ctp)->next)
        ;

    *ctp = ct;
}


/*
 * Create a new function.
 */
static void newFunction(sipSpec *pt, moduleDef *mod, classDef *c_scope,
        mappedTypeDef *mt_scope, int sflags, int isstatic, int issignal,
        int isslot, int isvirt, char *name, signatureDef *sig, int isconst,
        int isabstract, optFlags *optflgs, codeBlock *methodcode,
        codeBlock *vcode, throwArgs *exceptions, signatureDef *cppsig,
        codeBlock *docstring)
{
    static const char *annos[] = {
        "__len__",
        "API",
        "AutoGen",
        "Deprecated",
        "DocType",
        "Encoding",
        "Factory",
        "HoldGIL",
        "KeywordArgs",
        "KeepReference",
        "NewThread",
        "NoArgParser",
        "NoCopy",
        "NoRaisesPyException",
        "NoVirtualErrorHandler",
        "Numeric",
        "PostHook",
        "PreHook",
        "PyInt",
        "PyName",
        "RaisesPyException",
        "ReleaseGIL",
        "VirtualErrorHandler",
        "Transfer",
        "TransferBack",
        "TransferThis",
        NULL
    };

    const char *pyname, *virt_error_handler;
    int factory, xferback, no_arg_parser, no_virt_error_handler;
    overDef *od, **odp, **headp;
    optFlag *of;
    virtHandlerDef *vhd;

    checkAnnos(optflgs, annos);

    /* Extra checks for a C module. */
    if (pt->genc)
    {
        if (c_scope != NULL)
            yyerror("Function declaration not allowed in a struct in a C module");

        if (isstatic)
            yyerror("Static functions not allowed in a C module");

        if (exceptions != NULL)
            yyerror("Exceptions not allowed in a C module");

        /* Handle C void prototypes. */
        if (sig->nrArgs == 1)
        {
            argDef *vad = &sig->args[0];

            if (vad->atype == void_type && vad->nrderefs == 0)
                sig->nrArgs = 0;
        }
    }

    if (mt_scope != NULL)
        headp = &mt_scope->overs;
    else if (c_scope != NULL)
        headp = &c_scope->overs;
    else
        headp = &mod->overs;

    /*
     * See if the function has a non-lazy method.  These are methods that
     * Python expects to see defined in the type before any instance of the
     * type is created.
     */
    if (c_scope != NULL)
    {
        static const char *lazy[] = {
            "__getattribute__",
            "__getattr__",
            "__enter__",
            "__exit__",
            NULL
        };

        const char **l;

        for (l = lazy; *l != NULL; ++l)
            if (strcmp(name, *l) == 0)
            {
                setHasNonlazyMethod(c_scope);
                break;
            }
    }

    /* See if it is a factory method. */
    if (getOptFlag(optflgs, "Factory", bool_flag) != NULL)
        factory = TRUE;
    else
    {
        int a;

        factory = FALSE;

        /* Check /TransferThis/ wasn't specified. */
        if (c_scope == NULL || isstatic)
            for (a = 0; a < sig->nrArgs; ++a)
                if (isThisTransferred(&sig->args[a]))
                    yyerror("/TransferThis/ may only be specified in constructors and class methods");
    }

    /* See if the result is to be returned to Python ownership. */
    xferback = (getOptFlag(optflgs, "TransferBack", bool_flag) != NULL);

    if (factory && xferback)
        yyerror("/TransferBack/ and /Factory/ cannot both be specified");

    /* Create a new overload definition. */

    od = sipMalloc(sizeof (overDef));

    getSourceLocation(&od->sloc);

    /* Set the overload flags. */

    if ((sflags & SECT_IS_PROT) && makeProtPublic)
    {
        sflags &= ~SECT_IS_PROT;
        sflags |= SECT_IS_PUBLIC | OVER_REALLY_PROT;
    }

    od->overflags = sflags;

    if (issignal)
    {
        resetIsSlot(od);
        setIsSignal(od);
    }
    else if (isslot)
    {
        resetIsSignal(od);
        setIsSlot(od);
    }

    if (factory)
        setIsFactory(od);

    if (xferback)
        setIsResultTransferredBack(od);

    if (getTransfer(optflgs))
        setIsResultTransferred(od);

    if (getOptFlag(optflgs, "TransferThis", bool_flag) != NULL)
        setIsThisTransferredMeth(od);

    if (methodcode == NULL && getOptFlag(optflgs, "NoRaisesPyException", bool_flag) == NULL)
    {
        if (allRaisePyException(mod) || getOptFlag(optflgs, "RaisesPyException", bool_flag) != NULL)
            setRaisesPyException(od);
    }

    if (isProtected(od))
        setHasShadow(c_scope);

    if ((isSlot(od) || isSignal(od)) && !isPrivate(od))
    {
        if (isSignal(od))
            setHasShadow(c_scope);

        pt->sigslots = TRUE;
    }

    if (isSignal(od) && (methodcode != NULL || vcode != NULL))
        yyerror("Cannot provide code for signals");

    if (isstatic)
    {
        if (isSignal(od))
            yyerror("Static functions cannot be signals");

        if (isvirt)
            yyerror("Static functions cannot be virtual");

        setIsStatic(od);
    }

    if (isconst)
        setIsConst(od);

    if (isabstract)
    {
        if (sflags == 0)
            yyerror("Non-class function specified as abstract");

        setIsAbstract(od);
    }

    if ((of = getOptFlag(optflgs, "AutoGen", opt_name_flag)) != NULL)
    {
        if (of->fvalue.sval == NULL || isEnabledFeature(of->fvalue.sval))
            setIsAutoGen(od);
    }

    virt_error_handler = getVirtErrorHandler(optflgs);
    no_virt_error_handler = (getOptFlag(optflgs, "NoVirtualErrorHandler", bool_flag) != NULL);

    if (isvirt)
    {
        if (isSignal(od) && pluginPyQt3(pt))
            yyerror("Virtual signals aren't supported");

        setIsVirtual(od);
        setHasShadow(c_scope);

        vhd = sipMalloc(sizeof (virtHandlerDef));

        vhd->virthandlernr = -1;
        vhd->vhflags = 0;
        vhd->pysig = &od->pysig;
        vhd->cppsig = (cppsig != NULL ? cppsig : &od->pysig);
        appendCodeBlock(&vhd->virtcode, vcode);

        if (factory || xferback)
            setIsTransferVH(vhd);

        if (no_virt_error_handler)
        {
            if (virt_error_handler != NULL)
                yyerror("/VirtualErrorHandler/ and /NoVirtualErrorHandler/ provided");

            setNoErrorHandler(od);
        }
        else
        {
            od->virt_error_handler = virt_error_handler;
        }

        /*
         * Only add it to the module's virtual handlers if we are not in a
         * class template.
         */
        if (!currentIsTemplate)
        {
            vhd->module = mod;

            vhd->next = mod->virthandlers;
            mod->virthandlers = vhd;
        }
    }
    else
    {
        if (vcode != NULL)
            yyerror("%VirtualCatcherCode provided for non-virtual function");

        if (virt_error_handler != NULL)
            yyerror("/VirtualErrorHandler/ provided for non-virtual function");

        if (no_virt_error_handler)
            yyerror("/NoVirtualErrorHandler/ provided for non-virtual function");

        vhd = NULL;
    }

    od->cppname = name;
    od->pysig = *sig;
    od->cppsig = (cppsig != NULL ? cppsig : &od->pysig);
    od->exceptions = exceptions;
    appendCodeBlock(&od->methodcode, methodcode);
    od->virthandler = vhd;

    no_arg_parser = (getOptFlag(optflgs, "NoArgParser", bool_flag) != NULL);

    if (no_arg_parser)
    {
        if (methodcode == NULL)
            yyerror("%MethodCode must be supplied if /NoArgParser/ is specified");
    }

    if (getOptFlag(optflgs, "NoCopy", bool_flag) != NULL)
        setNoCopy(&od->pysig.result);

    handleKeepReference(optflgs, &od->pysig.result, mod);

    pyname = getPythonName(mod, optflgs, name);

    od->common = findFunction(pt, mod, c_scope, mt_scope, pyname,
            (methodcode != NULL), sig->nrArgs, no_arg_parser);

    if (isProtected(od))
        setHasProtected(od->common);

    if (strcmp(pyname, "__delattr__") == 0)
        setIsDelattr(od);

    if (docstring != NULL)
        appendCodeBlock(&od->common->docstring, docstring);

    od->api_range = getAPIRange(optflgs);

    if (od->api_range == NULL)
        setNotVersioned(od->common);

    if (getOptFlag(optflgs, "Numeric", bool_flag) != NULL)
        setIsNumeric(od->common);

    /* Methods that run in new threads must be virtual. */
    if (getOptFlag(optflgs, "NewThread", bool_flag) != NULL)
    {
        argDef *res;

        if (!isvirt)
            yyerror("/NewThread/ may only be specified for virtual functions");

        /*
         * This is an arbitary limitation to make the code generator slightly
         * easier - laziness on my part.
         */
        res = &od->cppsig->result;

        if (res->atype != void_type || res->nrderefs != 0)
            yyerror("/NewThread/ may only be specified for void functions");

        setIsNewThread(od);
    }

    getHooks(optflgs, &od->prehook, &od->posthook);

    if (getReleaseGIL(optflgs))
        setIsReleaseGIL(od);
    else if (getHoldGIL(optflgs))
        setIsHoldGIL(od);

    if (getDeprecated(optflgs))
        setIsDeprecated(od);

    if (!isPrivate(od) && !isSignal(od) && (od->common->slot == no_slot || od->common->slot == call_slot))
    {
        od->kwargs = keywordArgs(mod, optflgs, &od->pysig, hasProtected(od->common));

        if (od->kwargs != NoKwArgs)
            setUseKeywordArgs(od->common);

        /*
         * If the overload is protected and defined in an imported module then
         * we need to make sure that any other overloads' keyword argument
         * names are marked as used.
         */
        if (isProtected(od) && !inMainModule())
        {
            overDef *kwod;

            for (kwod = c_scope->overs; kwod != NULL; kwod = kwod->next)
                if (kwod->common == od->common && kwod->kwargs != NoKwArgs)
                {
                    int a;

                    for (a = 0; a < kwod->pysig.nrArgs; ++a)
                    {
                        argDef *ad = &kwod->pysig.args[a];

                        if (kwod->kwargs == OptionalKwArgs && ad->defval == NULL)
                            continue;

                        if (ad->name != NULL)
                            setIsUsedName(ad->name);
                    }
                }
        }
    }

    /* See if we want to auto-generate a __len__() method. */
    if (getOptFlag(optflgs, "__len__", bool_flag) != NULL)
    {
        overDef *len;

        len = sipMalloc(sizeof (overDef));

        len->cppname = "__len__";
        len->overflags = SECT_IS_PUBLIC;
        len->pysig.result.atype = ssize_type;
        len->pysig.nrArgs = 0;
        len->cppsig = &len->pysig;

        len->common = findFunction(pt, mod, c_scope, mt_scope, len->cppname,
                TRUE, 0, FALSE);

        if ((len->methodcode = od->methodcode) == NULL)
        {
            char *buf = sipStrdup("            sipRes = (SIP_SSIZE_T)sipCpp->");
            codeBlock *code;

            append(&buf, od->cppname);
            append(&buf, "();\n");

            code = sipMalloc(sizeof (codeBlock));

            code->frag = buf;
            code->filename = "Auto-generated";
            code->linenr = 1;

            appendCodeBlock(&len->methodcode, code);
        }

        len->next = NULL;

        od->next = len;
    }
    else
    {
        od->next = NULL;
    }

    /* Append to the list. */
    for (odp = headp; *odp != NULL; odp = &(*odp)->next)
        ;

    *odp = od;
}


/*
 * Return the Python name based on the C/C++ name and any /PyName/ annotation.
 */
static const char *getPythonName(moduleDef *mod, optFlags *optflgs,
        const char *cname)
{
    const char *pname;
    optFlag *of;
    autoPyNameDef *apnd;

    /* Use the explicit name if given. */
    if ((of = getOptFlag(optflgs, "PyName", name_flag)) != NULL)
        return of->fvalue.sval;

    /* Apply any automatic naming rules. */
    pname = cname;

    for (apnd = mod->autopyname; apnd != NULL; apnd = apnd->next)
    {
        size_t len = strlen(apnd->remove_leading);

        if (strncmp(pname, apnd->remove_leading, len) == 0)
            pname += len;
    }

    return pname;
}


/*
 * Cache a name in a module.  Entries in the cache are stored in order of
 * decreasing length.
 */
nameDef *cacheName(sipSpec *pt, const char *name)
{
    nameDef *nd, **ndp;
    size_t len;

    /* Allow callers to be lazy about checking if there is really a name. */
    if (name == NULL)
        return NULL;

    /* Skip entries that are too large. */
    ndp = &pt->namecache;
    len = strlen(name);

    while (*ndp != NULL && (*ndp)->len > len)
        ndp = &(*ndp)->next;

    /* Check entries that are the right length. */
    for (nd = *ndp; nd != NULL && nd->len == len; nd = nd->next)
        if (memcmp(nd->text, name, len) == 0)
            return nd;

    /* Create a new one. */
    nd = sipMalloc(sizeof (nameDef));

    nd->nameflags = 0;
    nd->text = name;
    nd->len = len;
    nd->next = *ndp;

    *ndp = nd;

    return nd;
}


/*
 * Find (or create) an overloaded function name.
 */
static memberDef *findFunction(sipSpec *pt, moduleDef *mod, classDef *c_scope,
        mappedTypeDef *mt_scope, const char *pname, int hwcode, int nrargs,
        int no_arg_parser)
{
    static struct slot_map {
        const char *name;   /* The slot name. */
        slotType type;      /* The corresponding type. */
        int needs_hwcode;   /* Set if handwritten code is required. */
        int nrargs;         /* Nr. of arguments. */
    } slot_table[] = {
        {"__str__", str_slot, TRUE, 0},
        {"__unicode__", unicode_slot, TRUE, 0},
        {"__int__", int_slot, FALSE, 0},
        {"__long__", long_slot, FALSE, 0},
        {"__float__", float_slot, FALSE, 0},
        {"__len__", len_slot, TRUE, 0},
        {"__contains__", contains_slot, TRUE, 1},
        {"__add__", add_slot, FALSE, 1},
        {"__sub__", sub_slot, FALSE, 1},
        {"__mul__", mul_slot, FALSE, 1},
        {"__div__", div_slot, FALSE, 1},
        {"__mod__", mod_slot, FALSE, 1},
        {"__floordiv__", floordiv_slot, TRUE, 1},
        {"__truediv__", truediv_slot, FALSE, 1},
        {"__and__", and_slot, FALSE, 1},
        {"__or__", or_slot, FALSE, 1},
        {"__xor__", xor_slot, FALSE, 1},
        {"__lshift__", lshift_slot, FALSE, 1},
        {"__rshift__", rshift_slot, FALSE, 1},
        {"__iadd__", iadd_slot, FALSE, 1},
        {"__isub__", isub_slot, FALSE, 1},
        {"__imul__", imul_slot, FALSE, 1},
        {"__idiv__", idiv_slot, FALSE, 1},
        {"__imod__", imod_slot, FALSE, 1},
        {"__ifloordiv__", ifloordiv_slot, TRUE, 1},
        {"__itruediv__", itruediv_slot, FALSE, 1},
        {"__iand__", iand_slot, FALSE, 1},
        {"__ior__", ior_slot, FALSE, 1},
        {"__ixor__", ixor_slot, FALSE, 1},
        {"__ilshift__", ilshift_slot, FALSE, 1},
        {"__irshift__", irshift_slot, FALSE, 1},
        {"__invert__", invert_slot, FALSE, 0},
        {"__call__", call_slot, FALSE, -1},
        {"__getitem__", getitem_slot, FALSE, 1},
        {"__setitem__", setitem_slot, TRUE, 2},
        {"__delitem__", delitem_slot, TRUE, 1},
        {"__lt__", lt_slot, FALSE, 1},
        {"__le__", le_slot, FALSE, 1},
        {"__eq__", eq_slot, FALSE, 1},
        {"__ne__", ne_slot, FALSE, 1},
        {"__gt__", gt_slot, FALSE, 1},
        {"__ge__", ge_slot, FALSE, 1},
        {"__cmp__", cmp_slot, FALSE, 1},
        {"__bool__", bool_slot, TRUE, 0},
        {"__nonzero__", bool_slot, TRUE, 0},
        {"__neg__", neg_slot, FALSE, 0},
        {"__pos__", pos_slot, FALSE, 0},
        {"__abs__", abs_slot, TRUE, 0},
        {"__repr__", repr_slot, TRUE, 0},
        {"__hash__", hash_slot, TRUE, 0},
        {"__index__", index_slot, TRUE, 0},
        {"__iter__", iter_slot, TRUE, 0},
        {"__next__", next_slot, TRUE, 0},
        {"__setattr__", setattr_slot, TRUE, 2},
        {"__delattr__", delattr_slot, TRUE, 1},
        {NULL}
    };

    memberDef *md, **flist;
    struct slot_map *sm;
    slotType st;

    /* Get the slot type. */
    st = no_slot;

    for (sm = slot_table; sm->name != NULL; ++sm)
        if (strcmp(sm->name, pname) == 0)
        {
            if (sm->needs_hwcode && !hwcode)
                yyerror("This Python slot requires %MethodCode");

            if (sm->nrargs >= 0)
            {
                if (mt_scope == NULL && c_scope == NULL)
                {
                    /* Global operators need one extra argument. */
                    if (sm -> nrargs + 1 != nrargs)
                        yyerror("Incorrect number of arguments to global operator");
                }
                else if (sm->nrargs != nrargs)
                    yyerror("Incorrect number of arguments to Python slot");
            }

            st = sm->type;

            break;
        }

    /* Check there is no name clash. */
    checkAttributes(pt, mod, c_scope, mt_scope, pname, TRUE);

    /* See if it already exists. */
    if (mt_scope != NULL)
        flist = &mt_scope->members;
    else if (c_scope != NULL)
        flist = &c_scope->members;
    else
        flist = &mod->othfuncs;

    /* __delattr__ is implemented as __setattr__. */
    if (st == delattr_slot)
    {
        if (inMainModule())
            setIsUsedName(cacheName(pt, pname));

        st = setattr_slot;
        pname = "__setattr__";
    }

    for (md = *flist; md != NULL; md = md->next)
        if (strcmp(md->pyname->text, pname) == 0 && md->module == mod)
            break;

    if (md == NULL)
    {
        /* Create a new one. */
        md = sipMalloc(sizeof (memberDef));

        md->pyname = cacheName(pt, pname);
        md->memberflags = 0;
        md->slot = st;
        md->module = mod;
        md->next = *flist;

        *flist = md;

        if (inMainModule())
            setIsUsedName(md->pyname);

        if (no_arg_parser)
            setNoArgParser(md);
    }
    else if (noArgParser(md))
        yyerror("Another overload has already been defined that is annotated as /NoArgParser/");

    /* Global operators are a subset. */
    if (mt_scope == NULL && c_scope == NULL && st != no_slot && st != neg_slot && st != pos_slot && !isNumberSlot(md) && !isInplaceNumberSlot(md) && !isRichCompareSlot(md))
        yyerror("Global operators must be either numeric or comparison operators");

    return md;
}


/*
 * Search a set of flags for a particular one.
 */
static optFlag *findOptFlag(optFlags *flgs, const char *name)
{
    int f;

    for (f = 0; f < flgs->nrFlags; ++f)
    {
        optFlag *of = &flgs->flags[f];

        if (strcmp(of->fname, name) == 0)
            return of;
    }

    return NULL;
}


/*
 * Search a set of flags for a particular one and check its type.
 */
static optFlag *getOptFlag(optFlags *flgs, const char *name, flagType ft)
{
    optFlag *of = findOptFlag(flgs, name);

    if (of != NULL)
    {
        /* An optional name can look like a boolean or a name. */
        if (ft == opt_name_flag)
        {
            if (of->ftype == bool_flag)
            {
                of->ftype = opt_name_flag;
                of->fvalue.sval = NULL;
            }
            else if (of->ftype == name_flag)
            {
                of->ftype = opt_name_flag;
            }
        }

        /* An optional integer can look like a boolean or an integer. */
        if (ft == opt_integer_flag)
        {
            if (of->ftype == bool_flag)
            {
                of->ftype = opt_integer_flag;
                of->fvalue.ival = -1;
            }
            else if (of->ftype == integer_flag)
            {
                of->ftype = opt_integer_flag;
            }
        }

        if (ft != of->ftype)
            yyerror("Annotation has a value of the wrong type");
    }

    return of;
}


/*
 * A name is going to be used as a Python attribute name within a Python scope
 * (ie. a Python dictionary), so check against what we already know is going in
 * the same scope in case there is a clash.
 */
static void checkAttributes(sipSpec *pt, moduleDef *mod, classDef *py_c_scope,
        mappedTypeDef *py_mt_scope, const char *attr, int isfunc)
{
    enumDef *ed;
    varDef *vd;
    classDef *cd;

    /* Check the enums. */

    for (ed = pt->enums; ed != NULL; ed = ed->next)
    {
        enumMemberDef *emd;

        if (ed->pyname == NULL)
            continue;

        if (py_c_scope != NULL)
        {
            if (ed->ecd != py_c_scope)
                continue;
        }
        else if (py_mt_scope != NULL)
        {
            if (ed->emtd != py_mt_scope)
                continue;
        }
        else if (ed->ecd != NULL || ed->emtd != NULL)
        {
            continue;
        }

        if (strcmp(ed->pyname->text, attr) == 0)
            yyerror("There is already an enum in scope with the same Python name");

        for (emd = ed->members; emd != NULL; emd = emd->next)
            if (strcmp(emd->pyname->text, attr) == 0)
                yyerror("There is already an enum member in scope with the same Python name");
    }

    /*
     * Only check the members if this attribute isn't a member because we
     * can handle members with the same name in the same scope.
     */
    if (!isfunc)
    {
        memberDef *md, *membs;
        overDef *overs;

        if (py_mt_scope != NULL)
        {
            membs = py_mt_scope->members;
            overs = py_mt_scope->overs;
        }
        else if (py_c_scope != NULL)
        {
            membs = py_c_scope->members;
            overs = py_c_scope->overs;
        }
        else
        {
            membs = mod->othfuncs;
            overs = mod->overs;
        }

        for (md = membs; md != NULL; md = md->next)
        {
            overDef *od;

            if (strcmp(md->pyname->text, attr) != 0)
                continue;

            /* Check for a conflict with all overloads. */
            for (od = overs; od != NULL; od = od->next)
            {
                if (od->common != md)
                    continue;

                yyerror("There is already a function in scope with the same Python name");
            }
        }
    }

    /* If the scope was a mapped type then that's all we have to check. */
    if (py_mt_scope != NULL)
        return;

    /* Check the variables. */
    for (vd = pt->vars; vd != NULL; vd = vd->next)
    {
        if (vd->ecd != py_c_scope)
            continue;

        if (strcmp(vd->pyname->text,attr) == 0)
            yyerror("There is already a variable in scope with the same Python name");
    }

    /* Check the classes. */
    for (cd = pt->classes; cd != NULL; cd = cd->next)
    {
        if (cd->ecd != py_c_scope || cd->pyname == NULL)
            continue;

        if (strcmp(cd->pyname->text, attr) == 0 && !isExternal(cd))
            yyerror("There is already a class or namespace in scope with the same Python name");
    }

    /* Check the exceptions. */
    if (py_c_scope == NULL)
    {
        exceptionDef *xd;

        for (xd = pt->exceptions; xd != NULL; xd = xd->next)
            if (xd->pyname != NULL && strcmp(xd->pyname, attr) == 0)
                yyerror("There is already an exception with the same Python name");
    }

    /* Check the properties. */
    if (py_c_scope != NULL)
    {
        propertyDef *pd;

        for (pd = py_c_scope->properties; pd != NULL; pd = pd->next)
            if (strcmp(pd->name->text, attr) == 0)
                yyerror("There is already a property with the same name");
    }
}


/*
 * Append a code block to a list of them.
 */
static void appendCodeBlock(codeBlockList **headp, codeBlock *cb)
{
    codeBlockList *cbl;

    /* Handle the trivial case. */
    if (cb == NULL)
        return;

    /* Find the end of the list. */
    while (*headp != NULL)
    {
        /* Ignore if the block is already in the list. */
        if ((*headp)->block == cb)
            return;

        headp = &(*headp)->next;
    }

    cbl = sipMalloc(sizeof (codeBlockList));
    cbl->block = cb;

    *headp = cbl;
}


/*
 * Append a code block list to an existing list.
 */
void appendCodeBlockList(codeBlockList **headp, codeBlockList *cbl)
{
    while (cbl != NULL)
    {
        appendCodeBlock(headp, cbl->block);
        cbl = cbl->next;
    }
}


/*
 * Handle the end of a fully parsed a file.
 */
static void handleEOF()
{
    /*
     * Check that the number of nested if's is the same as when we started
     * the file.
     */

    if (skipStackPtr > currentContext.ifdepth)
        fatal("Too many %%If statements in %s\n", previousFile);

    if (skipStackPtr < currentContext.ifdepth)
        fatal("Too many %%End statements in %s\n", previousFile);
}


/*
 * Handle the end of a fully parsed a module.
 */
static void handleEOM()
{
    moduleDef *from;

    /* Check it has been named. */
    if (currentModule->name == NULL)
        fatal("No %%Module has been specified for module defined in %s\n",
                previousFile);

    from = currentContext.prevmod;

    if (from != NULL && from->encoding == no_type)
        from->encoding = currentModule->encoding;

    /* The previous module is now current. */
    currentModule = from;
}


/*
 * Find an existing qualifier.
 */
static qualDef *findQualifier(const char *name)
{
    moduleDef *mod;

    for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
    {
        qualDef *qd;

        for (qd = mod->qualifiers; qd != NULL; qd = qd->next)
            if (strcmp(qd->name, name) == 0)
                return qd;
    }

    /* Qualifiers corresponding to the SIP version are created on the fly. */
    if (name[0] == 'S' && name[1] == 'I' && name[2] == 'P' && name[3] == '_')
    {
        const char *cp = &name[3];
        int major, minor, patch;

        cp = getInt(cp, &major);
        cp = getInt(cp, &minor);
        cp = getInt(cp, &patch);

        if (*cp != '\0')
            yyerror("Unexpected character after SIP version number");

        return allocQualifier(currentModule, -1,
                (major << 16) | (minor << 8) | patch, name, time_qualifier);
    }

    return NULL;
}


/*
 * Get an integer from string.
 */
static const char *getInt(const char *cp, int *ip)
{
    /* Handle the default value. */
    *ip = 0;

    if (*cp == '\0')
        return cp;

    /* There must be a leading underscore. */
    if (*cp++ != '_')
        yyerror("An underscore must separate the parts of a SIP version number");

    while (isdigit(*cp))
    {
        *ip *= 10;
        *ip += *cp - '0';
        ++cp;
    }

    return cp;
}


/*
 * Find an existing API.
 */
apiVersionRangeDef *findAPI(sipSpec *pt, const char *name)
{
    moduleDef *mod;

    for (mod = pt->modules; mod != NULL; mod = mod->next)
    {
        apiVersionRangeDef *avd;

        for (avd = mod->api_versions; avd != NULL; avd = avd->next)
            if (strcmp(avd->api_name->text, name) == 0)
                return avd;
    }

    return NULL;
}


/*
 * Return a copy of a scoped name.
 */
scopedNameDef *copyScopedName(scopedNameDef *snd)
{
    scopedNameDef *head;

    head = NULL;

    while (snd != NULL)
    {
        appendScopedName(&head,text2scopePart(snd -> name));
        snd = snd -> next;
    }

    return head;
}


/*
 * Append a name to a list of scopes.
 */
void appendScopedName(scopedNameDef **headp,scopedNameDef *newsnd)
{
    while (*headp != NULL)
        headp = &(*headp) -> next;

    *headp = newsnd;
}


/*
 * Free a scoped name - but not the text itself.
 */
void freeScopedName(scopedNameDef *snd)
{
    while (snd != NULL)
    {
        scopedNameDef *next = snd -> next;

        free(snd);

        snd = next;
    }
}


/*
 * Convert a text string to a scope part structure.
 */
static scopedNameDef *text2scopePart(char *text)
{
    scopedNameDef *snd;

    snd = sipMalloc(sizeof (scopedNameDef));

    snd->name = text;
    snd->next = NULL;

    return snd;
}


/*
 * Convert a text string to a fully scoped name.
 */
static scopedNameDef *text2scopedName(ifaceFileDef *scope, char *text)
{
    return scopeScopedName(scope, text2scopePart(text));
}


/*
 * Prepend any current scope to a scoped name.
 */
static scopedNameDef *scopeScopedName(ifaceFileDef *scope, scopedNameDef *name)
{
    scopedNameDef *snd;

    snd = (scope != NULL ? copyScopedName(scope->fqcname) : NULL);

    appendScopedName(&snd, name);

    return snd;
}


/*
 * Return a pointer to the tail part of a scoped name.
 */
char *scopedNameTail(scopedNameDef *snd)
{
    if (snd == NULL)
        return NULL;

    while (snd -> next != NULL)
        snd = snd -> next;

    return snd -> name;
}


/*
 * Push the given scope onto the scope stack.
 */
static void pushScope(classDef *scope)
{
    if (currentScopeIdx >= MAX_NESTED_SCOPE)
        fatal("Internal error: increase the value of MAX_NESTED_SCOPE\n");

    scopeStack[currentScopeIdx] = scope;
    sectFlagsStack[currentScopeIdx] = sectionFlags;

    ++currentScopeIdx;
}


/*
 * Pop the scope stack.
 */
static void popScope(void)
{
    if (currentScopeIdx > 0)
        sectionFlags = sectFlagsStack[--currentScopeIdx];
}


/*
 * Return non-zero if the current input should be parsed rather than be
 * skipped.
 */
static int notSkipping()
{
    return (skipStackPtr == 0 ? TRUE : skipStack[skipStackPtr - 1]);
}


/*
 * Return the value of an expression involving a time period.
 */
static int timePeriod(const char *lname, const char *uname)
{
    int this, line;
    qualDef *qd, *lower, *upper;
    moduleDef *mod;

    if (lname == NULL)
        lower = NULL;
    else if ((lower = findQualifier(lname)) == NULL || lower->qtype != time_qualifier)
        yyerror("Lower bound is not a time version");

    if (uname == NULL)
        upper = NULL;
    else if ((upper = findQualifier(uname)) == NULL || upper->qtype != time_qualifier)
        yyerror("Upper bound is not a time version");

    /* Sanity checks on the bounds. */
    if (lower == NULL && upper == NULL)
        yyerror("Lower and upper bounds cannot both be omitted");

    if (lower != NULL && upper != NULL)
    {
        if (lower->module != upper->module || lower->line != upper->line)
            yyerror("Lower and upper bounds are from different timelines");

        if (lower == upper)
            yyerror("Lower and upper bounds must be different");

        if (lower->order > upper->order)
            yyerror("Later version specified as lower bound");
    }

    /* Go through each slot in the relevant timeline. */
    if (lower != NULL)
    {
        mod = lower->module;
        line = lower->line;
    }
    else
    {
        mod = upper->module;
        line = upper->line;
    }

    /* Handle the SIP version number pseudo-timeline. */
    if (line < 0)
    {
        if (lower != NULL && lower->order > SIP_VERSION)
            return FALSE;

        if (upper != NULL && upper->order <= SIP_VERSION)
            return FALSE;

        return TRUE;
    }

    this = FALSE;

    for (qd = mod->qualifiers; qd != NULL; qd = qd->next)
    {
        if (qd->qtype != time_qualifier || qd->line != line)
            continue;

        if (lower != NULL && qd->order < lower->order)
            continue;

        if (upper != NULL && qd->order >= upper->order)
            continue;

        /*
         * This is within the required range so if it is also needed then the
         * expression is true.
         */
        if (selectedQualifier(neededQualifiers, qd))
        {
            this = TRUE;
            break;
        }
    }

    return this;
}


/*
 * Return the value of an expression involving a single platform or feature.
 */
static int platOrFeature(char *name,int optnot)
{
    int this;
    qualDef *qd;

    if ((qd = findQualifier(name)) == NULL || qd -> qtype == time_qualifier)
        yyerror("No such platform or feature");

    /* Assume this sub-expression is false. */

    this = FALSE;

    if (qd -> qtype == feature_qualifier)
    {
        if (!excludedFeature(excludedQualifiers,qd))
            this = TRUE;
    }
    else if (selectedQualifier(neededQualifiers, qd))
        this = TRUE;

    if (optnot)
        this = !this;

    return this;
}


/*
 * Return TRUE if the given qualifier is excluded.
 */
int excludedFeature(stringList *xsl,qualDef *qd)
{
    while (xsl != NULL)
    {
        if (strcmp(qd -> name,xsl -> s) == 0)
            return TRUE;

        xsl = xsl -> next;
    }

    return FALSE;
}


/*
 * Return TRUE if the given qualifier is needed.
 */
int selectedQualifier(stringList *needed_qualifiers, qualDef *qd)
{
    stringList *sl;

    for (sl = needed_qualifiers; sl != NULL; sl = sl -> next)
        if (strcmp(qd -> name,sl -> s) == 0)
            return TRUE;

    return FALSE;
}


/*
 * Return the current scope.  currentScope() is only valid if notSkipping()
 * returns non-zero.
 */
static classDef *currentScope(void)
{
    return (currentScopeIdx > 0 ? scopeStack[currentScopeIdx - 1] : NULL);
}


/*
 * Create a new qualifier.
 */
static void newQualifier(moduleDef *mod, int line, int order, const char *name,
        qualType qt)
{
    /* Check it doesn't already exist. */
    if (findQualifier(name) != NULL)
        yyerror("Version is already defined");

    allocQualifier(mod, line, order, name, qt);
}


/*
 * Allocate a new qualifier.
 */
static qualDef *allocQualifier(moduleDef *mod, int line, int order,
        const char *name, qualType qt)
{
    qualDef *qd;

    qd = sipMalloc(sizeof (qualDef));

    qd->name = name;
    qd->qtype = qt;
    qd->module = mod;
    qd->line = line;
    qd->order = order;
    qd->next = mod->qualifiers;

    mod->qualifiers = qd;

    return qd;
}


/*
 * Create a new imported module.
 */
static void newImport(const char *filename)
{
    moduleDef *from, *mod;
    moduleListDef *mld;

    /* Create a new module if it has not already been defined. */
    for (mod = currentSpec->modules; mod != NULL; mod = mod->next)
        if (strcmp(mod->file, filename) == 0)
            break;

    from = currentModule;

    if (mod == NULL)
    {
        newModule(NULL, filename);
        mod = currentModule;
    }
    else if (from->encoding == no_type)
    {
        /* Import any defaults from the already parsed module. */
        from->encoding = mod->encoding;
    }

    /* Add the new import unless it has already been imported. */
    for (mld = from->imports; mld != NULL; mld = mld->next)
        if (mld->module == mod)
            return;

    mld = sipMalloc(sizeof (moduleListDef));
    mld->module = mod;
    mld->next = from->imports;

    from->imports = mld;
}


/*
 * Set up pointers to hook names.
 */
static void getHooks(optFlags *optflgs,char **pre,char **post)
{
    optFlag *of;

    if ((of = getOptFlag(optflgs,"PreHook",name_flag)) != NULL)
        *pre = of -> fvalue.sval;
    else
        *pre = NULL;

    if ((of = getOptFlag(optflgs,"PostHook",name_flag)) != NULL)
        *post = of -> fvalue.sval;
    else
        *post = NULL;
}


/*
 * Get the /Transfer/ option flag.
 */
static int getTransfer(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "Transfer", bool_flag) != NULL);
}


/*
 * Get the /ReleaseGIL/ option flag.
 */
static int getReleaseGIL(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "ReleaseGIL", bool_flag) != NULL);
}


/*
 * Get the /HoldGIL/ option flag.
 */
static int getHoldGIL(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "HoldGIL", bool_flag) != NULL);
}


/*
 * Get the /Deprecated/ option flag.
 */
static int getDeprecated(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "Deprecated", bool_flag) != NULL);
}


/*
 * Get the /AllowNone/ option flag.
 */
static int getAllowNone(optFlags *optflgs)
{
    return (getOptFlag(optflgs, "AllowNone", bool_flag) != NULL);
}


/*
 * Get the /VirtualErrorHandler/ option flag.
 */
static const char *getVirtErrorHandler(optFlags *optflgs)
{
    optFlag *of = getOptFlag(optflgs, "VirtualErrorHandler", name_flag);

    if (of == NULL)
        return NULL;

    return of->fvalue.sval;
}


/*
 * Get the /DocType/ option flag.
 */
static const char *getDocType(optFlags *optflgs)
{
    optFlag *of = getOptFlag(optflgs, "DocType", string_flag);

    if (of == NULL)
        return NULL;

    return of->fvalue.sval;
}


/*
 * Get the /DocValue/ option flag.
 */
static const char *getDocValue(optFlags *optflgs)
{
    optFlag *of = getOptFlag(optflgs, "DocValue", string_flag);

    if (of == NULL)
        return NULL;

    return of->fvalue.sval;
}


/*
 * Return TRUE if the PyQt3 plugin was specified.
 */
int pluginPyQt3(sipSpec *pt)
{
    return stringFind(pt->plugins, "PyQt3");
}


/*
 * Return TRUE if the PyQt4 plugin was specified.
 */
int pluginPyQt4(sipSpec *pt)
{
    return stringFind(pt->plugins, "PyQt4");
}


/*
 * Return TRUE if a list of strings contains a given entry.
 */
static int stringFind(stringList *sl, const char *s)
{
    while (sl != NULL)
    {
        if (strcmp(sl->s, s) == 0)
            return TRUE;

        sl = sl->next;
    }

    return FALSE;
}


/*
 * Set the name of a module.
 */
static void setModuleName(sipSpec *pt, moduleDef *mod, const char *fullname)
{
    mod->fullname = cacheName(pt, fullname);

    if (inMainModule())
        setIsUsedName(mod->fullname);

    if ((mod->name = strrchr(fullname, '.')) != NULL)
        mod->name++;
    else
        mod->name = fullname;
}


/*
 * Define a new class and set its name.
 */
static void defineClass(scopedNameDef *snd, classList *supers, optFlags *of)
{
    classDef *cd, *c_scope = currentScope();

    cd = newClass(currentSpec, class_iface, getAPIRange(of),
            scopeScopedName((c_scope != NULL ? c_scope->iff : NULL), snd),
            getVirtErrorHandler(of));
    cd->supers = supers;

    pushScope(cd);
}


/*
 * Complete the definition of a class.
 */
static classDef *completeClass(scopedNameDef *snd, optFlags *of, int has_def)
{
    classDef *cd = currentScope();

    /* See if the class was defined or just declared. */
    if (has_def)
    {
        if (snd->next != NULL)
            yyerror("A scoped name cannot be given in a class/struct definition");

    }
    else if (cd->supers != NULL)
        yyerror("Class/struct has super-classes but no definition");
    else
        setIsOpaque(cd);

    finishClass(currentSpec, currentModule, cd, of);
    popScope();

    /*
     * Check that external classes have only been declared at the global scope.
     */
    if (isExternal(cd) && currentScope() != NULL)
        yyerror("External classes/structs can only be declared in the global scope");

    return cd;
}


/*
 * Add a variable to the list so that the list remains sorted.
 */
static void addVariable(sipSpec *pt, varDef *vd)
{
    varDef **at = &pt->vars;

    while (*at != NULL)
    {
        if (strcmp(vd->pyname->text, (*at)->pyname->text) < 0)
            break;

        at = &(*at)->next;
    }

    vd->next = *at;
    *at = vd;
}


/*
 * Update a type according to optional flags.
 */
static void applyTypeFlags(moduleDef *mod, argDef *ad, optFlags *flags)
{
    ad->doctype = getDocType(flags);

    if (getOptFlag(flags, "PyInt", bool_flag) != NULL)
    {
        if (ad->atype == string_type)
            ad->atype = byte_type;
        else if (ad->atype == sstring_type)
            ad->atype = sbyte_type;
        else if (ad->atype == ustring_type)
            ad->atype = ubyte_type;
    }

    if (ad->atype == string_type && !isArray(ad) && !isReference(ad))
    {
        optFlag *of;

        if ((of = getOptFlag(flags, "Encoding", string_flag)) == NULL)
        {
            if (mod->encoding != no_type)
                ad->atype = mod->encoding;
            else
                ad->atype = string_type;
        }
        else if ((ad->atype = convertEncoding(of->fvalue.sval)) == no_type)
            yyerror("The value of the /Encoding/ annotation must be one of \"ASCII\", \"Latin-1\", \"UTF-8\" or \"None\"");
    }
}


/*
 * Return the keyword argument support converted from a string.
 */
static KwArgs convertKwArgs(const char *kwargs)
{
    if (strcmp(kwargs, "None") == 0)
        return NoKwArgs;

    if (strcmp(kwargs, "All") == 0)
        return AllKwArgs;

    if (strcmp(kwargs, "Optional") == 0)
        return OptionalKwArgs;

    yyerror("The style of keyword argument support must be one of \"All\", \"Optional\" or \"None\"");
}


/*
 * Return the Format for a string.
 */
static Format convertFormat(const char *format)
{
    if (strcmp(format, "raw") == 0)
        return raw;

    if (strcmp(format, "deindented") == 0)
        return deindented;

    yyerror("The docstring format must be either \"raw\" or \"deindented\"");
}


/*
 * Return the argument type for a string with the given encoding or no_type if
 * the encoding was invalid.
 */
static argType convertEncoding(const char *encoding)
{
    if (strcmp(encoding, "ASCII") == 0)
        return ascii_string_type;

    if (strcmp(encoding, "Latin-1") == 0)
        return latin1_string_type;

    if (strcmp(encoding, "UTF-8") == 0)
        return utf8_string_type;

    if (strcmp(encoding, "None") == 0)
        return string_type;

    return no_type;
}


/*
 * Get the /API/ option flag.
 */
static apiVersionRangeDef *getAPIRange(optFlags *optflgs)
{
    optFlag *of;

    if ((of = getOptFlag(optflgs, "API", api_range_flag)) == NULL)
        return NULL;

    return of->fvalue.aval;
}


/*
 * Return the API range structure and version number corresponding to the
 * given API range.
 */
static apiVersionRangeDef *convertAPIRange(moduleDef *mod, nameDef *name,
        int from, int to)
{
    int index;
    apiVersionRangeDef *avd, **avdp;

    /* Handle the trivial case. */
    if (from == 0 && to == 0)
        return NULL;

    for (index = 0, avdp = &mod->api_ranges; (*avdp) != NULL; avdp = &(*avdp)->next, ++index)
    {
        avd = *avdp;

        if (avd->api_name == name && avd->from == from && avd->to == to)
            return avd;
    }

    /* The new one must be appended so that version numbers remain valid. */
    avd = sipMalloc(sizeof (apiVersionRangeDef));

    avd->api_name = name;
    avd->from = from;
    avd->to = to;
    avd->index = index;

    avd->next = NULL;
    *avdp = avd;

    return avd;
}


/*
 * Return the style of keyword argument support for a signature.
 */
static KwArgs keywordArgs(moduleDef *mod, optFlags *optflgs, signatureDef *sd,
        int need_name)
{
    KwArgs kwargs;
    optFlag *ka_anno, *no_ka_anno;

    /* Get the default. */
    kwargs = mod->kwargs;

    /*
     * Get the possible annotations allowing /KeywordArgs/ to have different
     * types of values.
     */
    ka_anno = findOptFlag(optflgs, "KeywordArgs");
    no_ka_anno = getOptFlag(optflgs, "NoKeywordArgs", bool_flag);

    if (no_ka_anno != NULL)
    {
        if (ka_anno != NULL)
            yyerror("/KeywordArgs/ and /NoKeywordArgs/ cannot both be specified");

        deprecated("/NoKeywordArgs/ is deprecated, use /KeywordArgs=\"None\" instead");

        kwargs = NoKwArgs;
    }
    else if (ka_anno != NULL)
    {
        /* A string value is the non-deprecated type. */
        if (ka_anno->ftype == string_flag)
        {
            kwargs = convertKwArgs(ka_anno->fvalue.sval);
        }
        else
        {
            deprecated("/KeywordArgs/ is deprecated, use /KeywordArgs=\"All\" instead");

            /* Get it again to check the type. */
            ka_anno = getOptFlag(optflgs, "KeywordArgs", bool_flag);
        }
    }

    /* An ellipsis cannot be used with keyword arguments. */
    if (sd->nrArgs > 0 && sd->args[sd->nrArgs - 1].atype == ellipsis_type)
        kwargs = NoKwArgs;

    if (kwargs != NoKwArgs)
    {
        int a, is_name = FALSE;

        /*
         * Mark argument names as being used and check there is at least one.
         */
        for (a = 0; a < sd->nrArgs; ++a)
        {
            argDef *ad = &sd->args[a];

            if (kwargs == OptionalKwArgs && ad->defval == NULL)
                continue;

            if (ad->name != NULL)
            {
                if (need_name || inMainModule())
                    setIsUsedName(ad->name);

                is_name = TRUE;
            }
        }

        if (!is_name)
            kwargs = NoKwArgs;
    }

    return kwargs;
}


/*
 * Extract the version of a string value optionally associated with a
 * particular feature.
 */
static char *convertFeaturedString(char *fs)
{
    while (fs != NULL)
    {
        char *next, *value;

        /* Individual values are ';' separated. */
        if ((next = strchr(fs, ';')) != NULL)
            *next++ = '\0';

        /* Features and values are ':' separated. */
        if ((value = strchr(fs, ':')) == NULL)
        {
            /* This is an unconditional value so just return it. */
            return strip(fs);
        }

        *value++ = '\0';

        if (isEnabledFeature(strip(fs)))
            return strip(value);

        fs = next;
    }

    /* No value was enabled. */
    return NULL;
}


/*
 * Return the stripped version of a string.
 */
static char *strip(char *s)
{
    while (*s == ' ')
        ++s;

    if (*s != '\0')
    {
        char *cp = &s[strlen(s) - 1];

        while (*cp == ' ')
            *cp-- = '\0';
    }

    return s;
}


/*
 * Return TRUE if the given feature is enabled.
 */
static int isEnabledFeature(const char *name)
{
    qualDef *qd;

    if ((qd = findQualifier(name)) == NULL || qd->qtype != feature_qualifier)
        yyerror("No such feature");

    return !excludedFeature(excludedQualifiers, qd);
}


/*
 * Add a property definition to a class.
 */
static void addProperty(sipSpec *pt, moduleDef *mod, classDef *cd,
        const char *name, const char *get, const char *set,
        codeBlock *docstring)
{
    propertyDef *pd;

    checkAttributes(pt, mod, cd, NULL, name, FALSE);

    pd = sipMalloc(sizeof (propertyDef));

    pd->name = cacheName(pt, name);
    pd->get = get;
    pd->set = set;
    appendCodeBlock(&pd->docstring, docstring);
    pd->next = cd->properties;

    cd->properties = pd;

    if (inMainModule())
        setIsUsedName(pd->name);
}


/*
 * Configure a module and return the (possibly new) current module.
 */
static moduleDef *configureModule(sipSpec *pt, moduleDef *module,
        const char *filename, const char *name, int version, int c_module,
        KwArgs kwargs, int use_arg_names, int all_raise_py_exc,
        const char *def_error_handler, codeBlock *docstring)
{
    moduleDef *mod;

    /* Check the module hasn't already been defined. */
    for (mod = pt->modules; mod != NULL; mod = mod->next)
        if (mod->fullname != NULL && strcmp(mod->fullname->text, name) == 0)
            yyerror("Module is already defined");

    /*
     * If we are in a container module then create a component module and make
     * it current.
     */
    if (isContainer(module) || module->container != NULL)
    {
        mod = allocModule();

        mod->file = filename;
        mod->container = (isContainer(module) ? module : module->container);

        module = mod;
    }

    setModuleName(pt, module, name);
    module->kwargs = kwargs;
    module->virt_error_handler = def_error_handler;
    module->version = version;
    appendCodeBlock(&module->docstring, docstring);

    if (all_raise_py_exc)
        setAllRaisePyException(module);

    if (use_arg_names)
        setUseArgNames(module);

    if (pt->genc < 0)
        pt->genc = c_module;
    else if (pt->genc != c_module)
        yyerror("Cannot mix C and C++ modules");

    return module;
}


/*
 * Add a Python naming rule to a module.
 */
static void addAutoPyName(moduleDef *mod, const char *remove_leading)
{
    autoPyNameDef *apnd, **apndp;

    for (apndp = &mod->autopyname; *apndp != NULL; apndp = &(*apndp)->next)
        ;

    apnd = sipMalloc(sizeof (autoPyNameDef));
    apnd->remove_leading = remove_leading;
    apnd->next = *apndp;

    *apndp = apnd;
}


/*
 * Check that no invalid or unknown annotations are given.
 */
static void checkAnnos(optFlags *annos, const char *valid[])
{
    if (parsingCSignature && annos->nrFlags != 0)
    {
        deprecated("Annotations should not be used in explicit C/C++ signatures");
    }
    else
    {
        int i;

        for (i = 0; i < annos->nrFlags; i++)
        {
            const char **name;

            for (name = valid; *name != NULL; ++name)
                if (strcmp(*name, annos->flags[i].fname) == 0)
                    break;

            if (*name == NULL)
                deprecated("Annotation is invalid");
        }
    }
}


/*
 * Check that no annotations were given.
 */
static void checkNoAnnos(optFlags *annos, const char *msg)
{
    if (annos->nrFlags != 0)
        deprecated(msg);
}


/*
 * Handle any /KeepReference/ annotation for a type.
 */
static void handleKeepReference(optFlags *optflgs, argDef *ad, moduleDef *mod)
{
    optFlag *of;

    if ((of = getOptFlag(optflgs, "KeepReference", opt_integer_flag)) != NULL)
    {
        setKeepReference(ad);

        if ((ad->key = of->fvalue.ival) < -1)
            yyerror("/KeepReference/ key cannot be negative");

        /* If there was no explicit key then auto-allocate one. */
        if (ad->key == -1)
            ad->key = mod->next_key--;
    }
}


/*
 * Configure the mapped type annotations that are also valid with mapped type
 * templates.
 */
static void mappedTypeAnnos(mappedTypeDef *mtd, optFlags *optflgs)
{
    if (getOptFlag(optflgs, "NoRelease", bool_flag) != NULL)
        setNoRelease(mtd);

    if (getAllowNone(optflgs))
        setHandlesNone(mtd);

    mtd->doctype = getDocType(optflgs);
}

