#include "script_component.hpp"
LOG_INFO("xeh postinit groups");
LOG_INFO("1602162025");
LOG_INFO(TEST_PATH(test));
LOG_INFO(TEST_COMP(test));
//ADDON = false;
COMPILE_FILE4(test);
//                                                   \y\grad\addons\groups\functions\fnc_test.sqf
compile preProcessFileLineNumbers "\y\grad\addons\groups\functions\fnc_test.sqf";
LOG_INFO(TEST_PATH(test));
//call SMIFUNC(test);
//PREP(test);
LOG_DEBUG(str SMIFUNC(test));
//PREP(test2);
//SMIFUNC(test);
//ADDON = true;
