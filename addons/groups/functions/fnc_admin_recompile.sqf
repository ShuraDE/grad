if (isServer) then {

  // TODO foreach function in component
  "grad_fnc_createNewGroup" call BIS_fnc_recompile;
  "grad_fnc_getGroupData" call BIS_fnc_recompile;
  "grad_fnc_setGroupData" call BIS_fnc_recompile;


  return true;
} else {
  return false;
}
