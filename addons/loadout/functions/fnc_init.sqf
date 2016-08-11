#include "\y\grad\addons\loadout\script_component.hpp"

private ["_unit"];
//check TFAR is loaded and player controlled unit
if (!isClass (configFile >> "CfgPatches" >> "task_force_radio_items") && hasInterface && local _unit && !isNull((player)) then {

  //execute applyLoadout after alle radios are received from TFAR
  [getPlayerUID  _unit, 
    "OnRadiosReceived", {
      [getPlayerUID  _unit, "OnRadiosReceived", player] call TFAR_fnc_removeEventHandler;
      FNC_SMI(applyLoadout);
      }, 
    player] call TFAR_fnc_addEventHandler;
      
} else {
  //execute scheduleLoadout by Fusselwurm if no tfar is loaded
  FNC_SMI(scheduleLoadout);
};