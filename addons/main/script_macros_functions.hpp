#ifndef PATHTO_SYS
    #define PATHTO_SYS(var1,var2,var3) \MAINPREFIX\##var1\SUBPREFIX\##var2\##var3.sqf
#endif
#ifndef PATHTOF_SYS
    #define PATHTOF_SYS(var1,var2,var3) \MAINPREFIX\##var1\SUBPREFIX\##var2\##var3
#endif

#ifndef PATHTOF2_SYS
    #define PATHTOF2_SYS(var1,var2,var3) MAINPREFIX\##var1\SUBPREFIX\##var2\##var3
#endif

#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)


#define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3
#define QUOTE(var1) #var1

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)


#ifdef DISABLE_COMPILE_CACHE
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf))
#else
    #define PREP(fncName) [QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf)), QFUNC(fncName)] call SLX_XEH_COMPILE_NEW
#endif
