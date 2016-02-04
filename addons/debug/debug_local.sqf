private ["_output","_caller"];
_output = _this;

//in param : Anything
//return value: boolean

if (isServer) then {
  //server output
  (format ["DEBUG SERVER : %1", _output]) call BIS_fnc_log;
} else {
  //client output to local log
  (format ["DEBUG LOCAL : %1", _output]) call BIS_fnc_log;

  if (isNull player) then {
    if (!hasInterface) then {
      _caller = "HC";
    } else {
      _caller = "#N/A";
    };
  } else {
    _caller = profileName;
  };

  //add to server log
  [[_caller, _output],"GA_fnc_DEBUG_SRV",false,false] call BIS_fnc_MP;

};
