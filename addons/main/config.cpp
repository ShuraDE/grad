#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
           "extended_eventhandlers", "cba_ui", "cba_xeh", "cba_xeh_a3", "cba_jr", "cba_diagnostic"
        };
        author[] = {"Fry","Shura"};
        authorUrl = "https://gruppe-adler.de";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@grad";
        name = "Gruppe Adler Libary";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = "http://www.gruppe-adler.de/";
    };
};

#include "cfgEventHandlers.hpp"
#include "cfgVehicles.hpp"
