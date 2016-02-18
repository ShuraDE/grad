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
private ["_addGroup", "_leader", "_data", "_sideHash"];

LOG_DEBUG("Register native groups in dynamic groups");

if (isServer) then {

  //add group to dynamic group array
  _addGroup = {
      params ["_group","_grpCounter"];
     _leader = leader _group;
     _data   = [nil, FORMAT["%1", [_grpCounter,"default"] call FNC_SMI(getSpellingAlphabetName)], false]; // [<Insignia>, <Group Name>, <Private>]

     ["RegisterGroup", [_group, _leader, _data]] call FNC_BIS(dynamicGroups);
  };
  _sideHash = HASH_NEW(_sideHash, 0);

  //get all groups for each side, add grp via _addGroup
  {
    if (HASH_HAS_KEY(_sideHash, (side leader _x))) then {
      LOG_DEBUG("increment hash for side");
      _sideHash = HASH_SET(_sideHash, (side leader _x), HASH_GET(_sideHash, (side leader _x)) + 1);
    } else {
      LOG_DEBUG("create new hash for side");
      _sideHash = HASH_SET(_sideHash, (side leader _x), 1);
    };
    [_x, (HASH_GET(_sideHash, (side leader _x)))] spawn _addGroup;
  } forEach allGroups;
};
