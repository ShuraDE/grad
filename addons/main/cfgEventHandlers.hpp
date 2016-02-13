
class Extended_PreInit_EventHandlers {
    class ADDON {
          serverInit = QUOTE(call COMPILE_FILE(XEH_pre_init));
    };
};
class Extended_Init_EventHandlers {
    class ADDON {
          serverInit = QUOTE(call SMIFUNC(initprocess));
    };
}
