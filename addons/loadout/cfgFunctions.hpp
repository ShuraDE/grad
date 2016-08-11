class CfgFunctions
{
  class ADDON {

  	class SYS {
  		class init {
  			description = "Initialize loadout addon";
  			file = "\y\grad\addons\loadout\functions\fnc_init.sqf";
  		};
  	};

  	class Arsenal {
  	  file = \y\grad\addons\loadout\functions\arsenal;
  	  class ReplaceLinkedItems {};
  	  class ReplaceWeapons {};
  	};

  	class Attachments {
  	  file = \y\grad\addons\loadout\functions\attachments;
  	  class ReplacePrimaryAttachments {};
  	  class ReplaceSecondaryAttachments {};
  	  class ReplaceHandgunAttachments {};
  	};

  	class Containers {
  	  file = \y\grad\addons\loadout\functions\containers;
  	  class ReplaceUniform {};
  	  class ReplaceBackpack {};
  	  class ReplaceVest {};
  	};

  	class General {
  	  file = \y\grad\addons\loadout\functions\general;
  	  class AddItems {};
  	  class AddMagazines {};
  	  class AddItemsToUniform {};
  	  class AddItemsToVest {};
  	  class AddItemsToBackpack {};
  	  class ReplaceItems {};
  	  class ReplaceMagazines {};
  	};

  	class Init {
  	  file = \y\grad\addons\loadout\functions\init;

  	  class ApplyLoadout {};
  	  class AssignRespawn {};

  	  class DoLoadout {};
  	  class IsConfigEntry {};
  	  class ScheduleLoadout {};
  	};

  	class LinkedItems {
  	  file = \y\grad\addons\loadout\functions\linkedItems;
  	  class ReplaceBinoculars {};
  	  class ReplaceCompass {};
  	  class ReplaceGoggles {};
  	  class ReplaceGPS {};
  	  class ReplaceHeadgear {};
  	  class ReplaceMap {};
  	  class ReplaceNVGoggles {};
  	  class ReplaceWatch {};
  	};

  	class Weapons {
  	  file = \y\grad\addons\loadout\functions\weapons;
  	  class ReplaceHandgunWeapon {};
  	  class ReplacePrimaryWeapon {};
  	  class ReplaceSecondaryWeapon {};
  	};
  };
};
