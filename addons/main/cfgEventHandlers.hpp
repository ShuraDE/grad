
class Extended_PreInit_EventHandlers {
    class ADDON {
          Init = QUOTE(call COMPILE_FILE(XEH_pre_init));
    };
};

class Extended_Init_EventHandlers {
    class ADDON {
          Init = QUOTE(call SMIFUNC(initprocess));
    };
}
