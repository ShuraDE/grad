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
class CfgMods
{
    class PREFIX
    {
        dir = "@GRAD_Lib";
        name = "Gruppe Adler Libary";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = "http://www.gruppe-adler.de";
        description = "Gruppe Adler";
    };
};

#include "cfgFunctions.hpp"
