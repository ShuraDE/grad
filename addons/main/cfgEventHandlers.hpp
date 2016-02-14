
class Extended_PostInit_EventHandlers {
    class ADDON {
          serverInit = QUOTE(call COMPILE_FILE(XEH_pre_init));
          init = QUOTE(call COMPILE_FILE(Functions\fnc_initprocess));
    };
};
/*
class Extended_Init_EventHandlers {
    class ADDON {
          serverInit = QUOTE(call SMIFUNC(initprocess));
    };
}
*/
