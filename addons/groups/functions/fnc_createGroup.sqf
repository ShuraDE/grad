//private ["_newORBATModul","_side_logic","_group_logic"];
params ["_unit"];

if (isServer) then {

/*
  _side_logic = createCenter sidelogic;
  _group_logic = createGroup _side_logic;


  _newORBATModul = _group_logic createUnit ["ModuleStrategicMapORBAT_F",[0,0,0],[],0,"NONE"];
  _unit synchronizeObjectsAdd [_newORBATModul];

  _newORBATModul setVariable ["Path", configfile >> "cfgORBAT" >> "B_HQ" >> "B_COMM" >> "B_S1"];
  _newORBATModul setVariable ["Parent", configfile >> "cfgORBAT" >> "B_HQ" >> "B_COMM"];

  sleep 0.5;

  [_newORBATModul, [_unit]back] call BIS_fnc_moduleStrategicMapORBAT;
*/
  LOG_INFO("test");
  //(format ["DEBUG SERVER : path %1" , str(_newORBATModul getVariable "Path")) call BIS_fnc_log;
  //(format ["DEBUG SERVER : parent %1" , str(_newORBATModul getVariable "Parent")) call BIS_fnc_log;


} else {
  //TODO ServerCall von main
  "DEBUG CLIENT : new group - no server" call BIS_fnc_log;
};
