#include "script_component.hpp"
private ["_newORBATModul","_side_logic","_group_logic"];
params ["_unit"];

if (isNil "_unit") exitWith {LOG_ERR("Keine Einheit übergeben");};
if (!isServer) exitWith {LOG_INFO("Aufruf nur als Server");};

_side_logic = createCenter sidelogic;
_group_logic = createGroup _side_logic;

_newORBATModul = _group_logic createUnit ["ModuleStrategicMapORBAT_F",[0,0,0],[],0,"NONE"];
_unit synchronizeObjectsAdd [_newORBATModul];

_newORBATModul setVariable ["Path", "configfile >> ""cfgORBAT"" >> ""B_HQ"" >> ""B_COMM"" >> ""B_S1"""];
_newORBATModul setVariable ["Parent", "configfile >> ""cfgORBAT"" >> ""B_HQ"" >> ""B_COMM"""];

[_newORBATModul, [_unit]] call BIS_fnc_moduleStrategicMapORBAT;
//IFUNC("moduleStrategicMapORBAT");

// TODO keine ausgabe im log :-/
diag_log "diag_log string out";
diag_log IFUNC(moduleStrategicMapORBAT);
