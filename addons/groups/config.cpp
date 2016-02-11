#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"grad_main"};
        version = VERSION;
        author[] = {"Fry","Shura"};
        authorUrl = "https://gruppe-adler.de";
    };
};
#include "cfgFactionClasses.hpp"
#include "cfgEventhandlers.hpp"
#include "cfgORBAT.hpp"
#include "cfgFunctions.hpp"
