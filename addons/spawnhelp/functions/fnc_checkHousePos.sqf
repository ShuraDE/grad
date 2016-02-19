#include "script_component.hpp"

/* -----------------------------------------------------------------------------------------------
Function: GRAD_spawnhelp_fnc_checkHousePos

Description: Get all available positions within a building or structure.

Parameters: [_building,(Optional:"ALL"/"LEVELS")]

Returns:  - Number of House Positions
          Optional:
          - "ALL": Array with all Positions
          - "LEVELS": Array with Arrays of Levelpositions

Examples:
          _pos_list = [_building] call GRAD_spawnhelp_fnc_checkHousePos;

Author: Fry

-------------------------------------------------------------------------------------------------- */
private ["_output","_inhousepos","_level_count","_x","_last_levelno","_add_arr","_new_levelno","_i"];
params ["_house","_idx"];

If(isNil "_idx")then{_idx = "COUNT";};
_output = 0;

_inhousepos = [_house] call FNC_BIS(buildingPositions);
If(count _inhousepos > 0)then
{
  switch(toUpper _idx)do
  {
    case "COUNT":{_output = (count _inhousepos);};
    case "ALL":{_output = _inhousepos;};
    case "LEVELS":{
                    _level_count = [];
                    _output = [];
                    {_level_count pushBack (ceil(_x select 2));}forEach _inhousepos;
                    _level_count arrayIntersect _level_count;
                    _level_count sort true;
                    _last_levelno = -1;
                    {
                      _add_arr = [];
                      _new_levelno = _x;
                      for "_i" from 0 to ((count _inhousepos) - 1) do
                      {
                        _h_pos = (_inhousepos select _i);
                        If((_h_pos select 2) > _last_levelno && (_h_pos select 2) <= _new_levelno)then
                        {
                          _add_arr pushBack _h_pos;
                        };
                      };
                      _last_levelno = _x;
                      _output pushBack _add_arr;
                    }forEach _level_count;
                  };
    default {LOG_ERR("GRAD_spawnhelp_fnc_checkHousePos: NO OPTIONAL INDEX FOUND")};
  };
};
_output
