#include "script_component.hpp"
LOG_INFO("xeh init groups");

SMIFUNC(test) = compile preProcessFileLineNumbers "\y\grad\addons\groups\functions\fnc_test.sqf";
call SMIFUNC(test);
