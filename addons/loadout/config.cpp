#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"grad_main"};
        version = VERSION;
        author[] = {"Cephei", "BaerMitUmlaut", "Moritz Schmidt", "Steven Koeberich", "ShuraDE"};
        authorUrl = "https://gruppe-adler.de";
    };
};

#include "cfgFunctions.hpp"
