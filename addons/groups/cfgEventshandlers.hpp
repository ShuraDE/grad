class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        /*
        // Like the normal preinit above, this one runs on all machines
        init = "...code here...";
        // This code will be executed once and only on the server
        serverInit = "...server-only code goes here...";
        // This snippet runs once and only on client machines
        clientInit = "...client-only code here...";
        */
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

class Extended_Init_EventHandlers {
    class CAManBase {
        class ADDON {
            init = QUOTE(call COMPILE_FILE(XEH_init));
        };
    };
};

class Extended_Local_EventHandlers {
    class CAManBase {
        class ADDON {
            local = QUOTE(call COMPILE_FILE(XEH_local));
        };
    };
};
