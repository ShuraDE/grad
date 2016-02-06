#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"grad_debug","grad_groups"};
        VERSION_CONFIG;
        author[] = {"Fry","Shura"};
        authorUrl = "https://gruppe-adler.de";
    };
};

#include "cfgFunctions.hpp"
