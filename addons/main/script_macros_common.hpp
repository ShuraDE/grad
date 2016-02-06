
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
