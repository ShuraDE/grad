class CfgFunctions
{
	class ADDON
	{
		class spawning
		{
      class getStreets{
                        description = "Checks for Streets in a spezific Range.";
				                file = "\y\grad\addons\spawnhelp\functions\fnc_getStreets.sqf";
			                };

      class getSlope {
				               description = "Returns an average slope value of terrain within passed radius.";
											 file = "\y\grad\addons\spawnhelp\functions\fnc_getSlope.sqf";
			               };

      class isWater {
                      	description = "Returns whether water is at given position.";
												file = "\y\grad\addons\spawnhelp\functions\fnc_isWater.sqf";
			              };

		};
	};
};
