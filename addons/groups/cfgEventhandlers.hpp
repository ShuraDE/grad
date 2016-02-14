class Extended_Init_EventHandlers {
   class ADDON {
      init = QUOTE(call COMPILE_FILE(XEH_Init));
   };
};
class Extended_PostInit_EventHandlers {
    class CAManBase {
      class ADDON{
        //init = call compile preprocessFileLineNumbers "XEH_postInit.sqf";
        //init = "[] execVM ""XEH_postInit.sqf""";
        //clientinit = QUOTE(call SMIFUNC(test));
        init = QUOTE(call COMPILE_FILE(test));
      };
    };
};
