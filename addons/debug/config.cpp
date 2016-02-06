#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_BaseConfig_F"};
        version = VERSION;
        author[] = {"Fry","Shura"};
        authorUrl = "https://gruppe-adler.de";
    };
};

#include "cfgFunctions.hpp"
