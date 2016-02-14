#include "script_component.hpp"
LOG_INFO("xeh init groups");
LOG_INFO(TEST_PATH(test));
LOG_INFO(TEST_PATH(test));
LOG_INFO(TEST_PATH(test));
//ADDON = false;
//PRECO(test)
SMIFUNC(test) = compile preProcessFileLineNumbers "\y\grad\addons\groups\functions\fnc_test.sqf";
call SMIFUNC(test);
//ADDON = true;
