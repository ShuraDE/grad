class Extended_PostInit_EventHandlers {
   class ADDON {
      init = QUOTE(call COMPILE_FILE(XEH_PostInit));
   };
};
class Extended_Init_EventHandlers {
	class ADDON {
		serverInit = QUOTE(call COMPILE_FILE(XEH_Init));
		clientInit = QUOTE(call COMPILE_FILE(XEH_Init));
	};
};