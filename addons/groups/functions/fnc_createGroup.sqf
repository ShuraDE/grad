private ["_unit","_newORBATModul","_side_logic","_group_logic"];

_unit = _this select 0;

if (isServer) then {

  (format ["DEBUG SERVER : init new orbat for %1" , name _unit]) call BIS_fnc_log;

  _side_logic = createCenter sidelogic;
  _group_logic = createGroup _side_logic;


  _newORBATModul = _group_logic createUnit ["ModuleStrategicMapORBAT_F",[0,0,0],[],0,"NONE"];
  _unit synchronizeObjectsAdd [_newORBATModul];

  _newORBATModul  missionNamespace setVariable ["Path", configfile >> "cfgORBAT" >> "B_HQ" >> "B_COMM" >> "B_S1"];
  _newORBATModul  missionNamespace setVariable ["Parent", configfile >> "cfgORBAT" >> "B_HQ" >> "B_COMM"];

  sleep 0.5;

  [_newORBATModul, _unit] call BIS_fnc_moduleStrategicMapORBAT;

  (format ["DEBUG SERVER : create for %1" , name _unit]) call BIS_fnc_log;
  (format ["DEBUG SERVER : path %1" , _newORBATModul  missionNamespace getVariable["Path", ""]) call BIS_fnc_log;
  (format ["DEBUG SERVER : parent %1" , _newORBATModul  missionNamespace getVariable["Parent", ""]) call BIS_fnc_log;


} else {
  //TODO ServerCall von main
  (format ["DEBUG CLIENT : new group - no server"]) call BIS_fnc_log;
};
