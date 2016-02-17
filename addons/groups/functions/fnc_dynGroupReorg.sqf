private ["_addGroup", "_grpCounter", "_leader", "_data"];

LOG_DEBUG("EXECUTE DYN GRP REPORG");

if (isServer) then {
  _grpCounter = 0;

  //add group to dynamic group array
  _addGroup = {
      params ["_group","_grpCounter"];
     _leader = leader _group;
     _data   = [nil, FORMAT["GRP %1", _grpCounter], false]; // [<Insignia>, <Group Name>, <Private>]

     ["RegisterGroup", [_group, _leader, _data]] call BIS_fnc_dynamicGroups;
  };

  //get all groups, add via grp function ^
  {
    _grpCounter = _grpCounter +1;
    [_x, _grpCounter] spawn _addGroup;
  } forEach allGroups;
};
