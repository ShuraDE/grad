#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"grad_main"};
        author[] = {""};
        authorUrl = "";
        VERSION_CONFIG;
    };
};

#include "cfgFunctions.hpp"
#include "cfgRemoteExec.hpp"
#include "cfgEventhandlers.hpp"
