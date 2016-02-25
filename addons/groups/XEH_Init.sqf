#include "script_component.hpp"
params ["_unit"];
LOG_DEBUG("xeh init groups");

LOG_DEBUG(_unit);

[_unit] call FNC_SMI(init);
