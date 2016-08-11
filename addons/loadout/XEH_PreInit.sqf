#include "script_component.hpp"
ADDON = false;

LOG_DEBUG("xeh preinit loadout");

PREP(init);

PREPE(init,applyLoadout);
PREPE(init,scheduleLoadout);
PREPE(init,doLoadout);
PREPE(init,isConfigEntry);
PREPE(init,assignRespawn);

ADDON = true;
