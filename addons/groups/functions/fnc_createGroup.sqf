#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: TAG_fnc_name

Description:

Parameters:

Returns:

Examples:
    (begin example)

    (end)

Author:

---------------------------------------------------------------------------- */
LOG_INFO("test create orbat module");


// #TODO: überdenken
// #Backlog:0 ORBAT Generation

//testing
private ["_newORBATModul","_side_logic","_group_logic"];
params ["_unit"];

if (isNil "_unit") exitWith {LOG_ERR("Keine Einheit übergeben");};
if (!isServer) exitWith {LOG_ERR("Aufruf nur als Server");};

_side_logic = createCenter sidelogic;
_group_logic = createGroup _side_logic;

_newORBATModul = _group_logic createUnit ["ModuleStrategicMapORBAT_F",[0,0,0],[],0,"NONE"];
_unit synchronizeObjectsAdd [_newORBATModul];

_newORBATModul setVariable ["Path", "configfile >> ""cfgORBAT"" >> ""B_HQ"" >> ""B_COMM"" >> ""B_S1"""];
_newORBATModul setVariable ["Parent", "configfile >> ""cfgORBAT"" >> ""B_HQ"" >> ""B_COMM"""];

[_newORBATModul, [_unit]] call FNC_BIS(moduleStrategicMapORBAT);

LOG_INFO("create new orbat module");
