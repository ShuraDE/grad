#include "script_component.hpp"
params ["_unit"];
LOG_DEBUG("xeh postinit loadout");

[_unit] call FNC_SMI(init);
