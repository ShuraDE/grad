#include "\y\grad\addons\loadout\script_component.hpp"

private ["_configPath", "_loadoutTarget", "_handgunBackup", "_handgunMagazineBackup"];

// Get config entry
_configPath = _this select 0;
_loadoutTarget = _this select 1;


// ========================================== Arsenal =============================================
// This is being done first, so it can be overwritten at a later time, when it is needed.
if ( [_configPath, "linkedItems"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "linkedItems", _loadoutTarget] call FNC_SMI(ReplaceLinkedItems);
};


// ======================================== Containers ============================================
// Uniform
if ( [_configPath, "uniform"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "uniform", _loadoutTarget] call FNC_SMI(ReplaceUniform);
};

// Vest
if ( [_configPath, "vest"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "vest", _loadoutTarget] call FNC_SMI(ReplaceVest);
};

// Backpack
if ( [_configPath, "backpack"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "backpack", _loadoutTarget] call FNC_SMI(ReplaceBackpack);
};


// ==================================== Items & Magazines =========================================
// Items
if ( [_configPath, "items"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "items", _loadoutTarget] call FNC_SMI(ReplaceItems);
};

// Magazines
if ( [_configPath, "magazines"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "magazines", _loadoutTarget] call FNC_SMI(ReplaceMagazines);
};

// Sorted items
// Uniform items & magazines
if ( [_configPath, "addItemsToUniform"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "addItemsToUniform", _loadoutTarget] call FNC_SMI(AddItemsToUniform);
};

// Vest items & magazines
if ( [_configPath, "addItemsToVest"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "addItemsToVest", _loadoutTarget] call FNC_SMI(AddItemsToVest);
};

// Backpack items & magazines
if ( [_configPath, "addItemsToBackpack"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "addItemsToBackpack", _loadoutTarget] call FNC_SMI(AddItemsToBackpack);
};

// Unsorted items
// Added items
if ( [_configPath, "addItems"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "addItems", _loadoutTarget] call FNC_SMI(AddItems);
};

// Added magazines
if ( [_configPath, "addMagazines"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "addMagazines", _loadoutTarget] call FNC_SMI(AddMagazines);
};


// ========================================= Weapons ==============================================
// Arsenal weapons
if ( [_configPath, "weapons"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "weapons", _loadoutTarget] call FNC_SMI(ReplaceWeapons);
};

// Workaround to prevent weapon switching when replacing the primary weapon, remove pistol first, add it later after the primary weapon was changed
// Second workaround because for some reason "hgun_P07_F" cannot be removed via removeWeapon
// Instead add a placeholder handgun that can immediately be removed again now ( somehow this works )
_handgunBackup = handgunWeapon _loadoutTarget;
_handgunMagazineBackup = handgunMagazine _loadoutTarget;

if (handgunWeapon _loadoutTarget == "hgun_P07_F") then {
  _loadoutTarget addWeapon "hgun_Pistol_heavy_01_F";
  _loadoutTarget removeWeapon "hgun_Pistol_heavy_01_F";
  _loadoutTarget removeMagazine "16Rnd_9x21_Mag";
  _loadoutTarget removeMagazine "16Rnd_9x21_Mag";
} else {
  _loadoutTarget removeWeapon (handgunWeapon _loadoutTarget);
};

// Primary weapon
if ( [_configPath, "primaryWeapon"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "primaryWeapon", _loadoutTarget] call FNC_SMI(ReplacePrimaryWeapon);
};

// Launcher
if ( [_configPath, "secondaryWeapon"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "secondaryWeapon", _loadoutTarget] call FNC_SMI(ReplaceSecondaryWeapon);
};

// Sidearm
if ( [_configPath, "handgunWeapon"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "handgunWeapon", _loadoutTarget] call FNC_SMI(ReplaceHandgunWeapon);
} else {
  // Add handgun back to complete the workaround above
  // Complete retard shit here, but basically it is required to replace the default handgun with something else, as neither adding nor removing it works
  // That's why you get a different pistol here
  if(_handgunBackup == "hgun_P07_F") then {
    // We're only adding extra magazines if they were not removed under the magazine category above, for consistency sake.
    // ie. If someone replaced all magazines already, they'd have to add them manually.
    if( !( [_configPath, "magazines"] call FNC_SMI(IsConfigEntry) )) then {
      _loadoutTarget addMagazine "11Rnd_45ACP_Mag";
      _loadoutTarget addMagazine "11Rnd_45ACP_Mag";
    };
    _loadoutTarget addMagazine "11Rnd_45ACP_Mag";
    _loadoutTarget addWeapon "hgun_Pistol_heavy_01_F";
  } else {
    _loadoutTarget addMagazine (_handgunMagazineBackup select 0);
    _loadoutTarget addWeapon _handgunBackup;
  };
};


// ======================================= Attachments ============================================
// Primary weapon attachments
if ( [_configPath, "primaryWeaponAttachments"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "primaryWeaponAttachments", _loadoutTarget] call FNC_SMI(ReplacePrimaryAttachments);
};

// Secondary weapon attachments
if ( [_configPath, "secondaryWeaponAttachments"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "secondaryWeaponAttachments", _loadoutTarget] call FNC_SMI(ReplaceSecondaryAttachments);
};

// Handgun weapon attachments
if ( [_configPath, "handgunWeaponAttachments"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "handgunWeaponAttachments", _loadoutTarget] call FNC_SMI(ReplaceHandgunAttachments);
};


// ======================================= Linked Items ===========================================
// Headgear
if ( [_configPath, "headgear"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "headgear", _loadoutTarget] call FNC_SMI(ReplaceHeadgear);
};

// Goggles ( No, this is NOT Night Vision Goggles )
if ( [_configPath, "goggles"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "goggles", _loadoutTarget] call FNC_SMI(ReplaceGoggles);
};

// Nightvision goggles
if ( [_configPath, "nvgoggles"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "nvgoggles", _loadoutTarget] call FNC_SMI(ReplaceNVGoggles);
};

// Binoculars
if ( [_configPath, "binoculars"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "binoculars", _loadoutTarget] call FNC_SMI(ReplaceBinoculars);
};

// Map
if ( [_configPath, "map"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "map", _loadoutTarget] call FNC_SMI(ReplaceMap);
};

// GPS
if ( [_configPath, "gps"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "gps", _loadoutTarget] call FNC_SMI(ReplaceGPS);
};

// Compass
if ( [_configPath, "compass"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "compass", _loadoutTarget] call FNC_SMI(ReplaceCompass);
};

// Watch
if ( [_configPath, "watch"] call FNC_SMI(IsConfigEntry) ) then {
  [_configPath >> "watch", _loadoutTarget] call FNC_SMI(ReplaceWatch);
};