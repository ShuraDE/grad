
#ifndef MAINPREFIX
    #define MAINPREFIX x
#endif

#ifndef SUBPREFIX
    #define SUBPREFIX addons
#endif

#ifndef MAINLOGIC
    #define MAINLOGIC main
#endif

#ifndef VERSION
    #define VERSION 0
#endif

#ifndef VERSION_AR
    #define VERSION_AR VERSION
#endif

#ifndef VERSION_CONFIG
    #define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION); versionAr[] = {VERSION_AR}
#endif

#define ADDON DOUBLES(PREFIX,COMPONENT)
#define MAIN_ADDON DOUBLES(PREFIX,main)


#ifdef THIS_FILE
#define THIS_FILE_ 'THIS_FILE'
#else
#define THIS_FILE_ __FILE__
#endif

// Internal Functions
#define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3
#define QUOTE(var1) #var1

#ifdef MODULAR
    #define COMPONENT_T DOUBLES(t,COMPONENT)
    #define COMPONENT_M DOUBLES(m,COMPONENT)
    #define COMPONENT_S DOUBLES(s,COMPONENT)
    #define COMPONENT_C DOUBLES(c,COMPONENT)
    #define COMPONENT_F COMPONENT_C
#else
    #define COMPONENT_T COMPONENT
    #define COMPONENT_M COMPONENT
    #define COMPONENT_S COMPONENT
    #define COMPONENT_F COMPONENT
    #define COMPONENT_C COMPONENT
#endif
