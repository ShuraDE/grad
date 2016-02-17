class Extended_PreInit_EventHandlers {
   class ADDON {
      init = QUOTE(call COMPILE_FILE(XEH_PreInit));
   };
};
class Extended_PostInit_EventHandlers {
   class ADDON {
      init = QUOTE(call COMPILE_FILE(XEH_PostInit));
   };
};
class Extended_Init_EventHandlers {
  class CAManBase {
      class ADDON {
          init = QUOTE(call COMPILE_FILE(XEH_Init));
      };
  };
};
