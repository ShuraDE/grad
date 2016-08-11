#include "\y\grad\addons\loadout\script_component.hpp"
params ["_unit"];

LOG_DEBUG("INIT loadout ADDON");
LOG_DEBUG(QUOTE(FNC_SMI(scheduleLoadout)));
LOG_DEBUG(QUOTE(FNC_SMI(doLoadout)));
LOG_DEBUG(QUOTE(FNC_SMI(applyLoadout)));

//check TFAR is loaded and player controlled unit
if ((!isNull _unit) && isClass (configFile >> "CfgPatches" >> "task_force_radio_items") &&  isPlayer _unit) then {

LOG_DEBUG("INIT loadout class tfar exists");
  //execute applyLoadout after alle radios are received from TFAR
  [netId _unit,
    "OnRadiosReceived", {
      [netId _unit, "OnRadiosReceived", _unit] call TFAR_fnc_removeEventHandler;
      FNC_SMI(applyLoadout);
      },
    _unit] call TFAR_fnc_addEventHandler;

  LOG_DEBUG("loading stuff with TFAR enabled....");

} else {
  //execute scheduleLoadout by Fusselwurm if no tfar is loaded
  LOG_DEBUG("loading stuff.... no tfar");
  [] call FNC_SMI(scheduleLoadout);

};
