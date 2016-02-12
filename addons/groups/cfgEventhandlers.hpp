class Extended_PostInit_EventHandlers  {
    class ADDON {
        //init = call compile preprocessFileLineNumbers "XEH_postInit.sqf";
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};
