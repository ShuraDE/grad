#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: grad_groups_fnc_getSpellingAlphabetName

Description: Return alphabetic spelling for given letter index.

Parameters:
* idx                       : number    : index of letter (starts with 0)
* type                      : string    : config entry (side or special like "RUS")
* forceAddonCFG (optional)  : boolean   : dont use missionConfigFile

Returns: string, name of letter or index if failed

Examples:
    (begin example)
      [2,"west"] call grad_groups_fnc_getSpellingAlphabetName;
      //returns "Charlie";
    (end)

Author: Shura
---------------------------------------------------------------------------- */
params ["_idx", "_type", ["_forceAddonConfig", false]];
private ["_returnValue","_getFromConfig","_getFromTypeOrDefault"];

//inner config access
//get named entry or default
_getFromTypeOrDefault = {
  params ["_idx", "_subtype", "_config"];
  private ["_cfgEntry"];

  LOG_DEBUG("CfgSpellingAlphabet looking for  " + str _subtype);

  if (isClass (_config >> "CfgSpellingAlphabet" >> _subtype)) then {
    _cfgEntry = getArray (_config >> "CfgSpellingAlphabet" >> _subtype >> "spelling");
    if ((count _cfgEntry) >= _idx) exitWith { (_cfgEntry select _idx) };
    //LOG_WARN(str '[_idx, (count _cfgEntry), _subtype]');
    //LOG_WARN(format ["Requested CfgSpellingAlphabet idx %1 larger then count %2 for side %3",_idx, (count _cfgEntry), _subtype]);
  };
};

//outer config access
//check missionConfig or configFile
_getFromConfig = {

  params ["_idx", "_type", "_config"];
  if (isClass (_config >> "CfgSpellingAlphabet")) then {
    _returnValue = [_idx,_type,_config] call _getFromTypeOrDefault;
    if (isNil "_returnValue")  exitWith { [_idx,"default",_config] call _getFromTypeOrDefault };
    _returnValue
  };
};

//get info from missionConfig if available => fallback to configFile => fallback, return idx
if (!_forceAddonConfig) then { _returnValue = [_idx,_type,missionConfigFile] call _getFromConfig; };
if (isNil "_returnValue") then { _returnValue = [_idx,_type,configFile] call _getFromConfig; };
if (isNil "_returnValue") exitWith {(str _idx)};
_returnValue;
