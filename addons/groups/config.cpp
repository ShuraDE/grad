#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"grad_main"};
        version = VERSION;
        author[] = {"Shura"};
        authorUrl = "https://gruppe-adler.de";
    };
};

#include "cfgEventhandlers.hpp"
#include "cfgFactionClasses.hpp"
#include "cfgVehicles.hpp"
#include "cfgORBAT.hpp"
#include "cfgFunctions.hpp"
