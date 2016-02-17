class CfgFunctions
{
	class ADDON
	{
		class spawning
		{
      class checkTerrainObj {
				                      description = "Returns a list of nearest terrain objects.";
															file = "\y\grad\addons\spawnhelp\functions\fnc_checkTerrainObj.sqf";
			                      };
			class checkEntities {
														description = "Find entities in the sphere with given radius.";
														file = "\y\grad\addons\spawnhelp\functions\fnc_checkEntities.sqf";
													};
			class checkObjects {
				                   description = "Find entities in the sphere with given radius.";
													 file = "\y\grad\addons\spawnhelp\functions\fnc_checkObjects.sqf";
												 };
			class dataType {
                       description = "Returns the data type of an expression.";
											 file = "\y\grad\addons\spawnhelp\functions\fnc_dataType.sqf";
										 };
			class getSlope {
							 				 description = "Returns an average slope value of terrain within passed radius.";
							 				 file = "\y\grad\addons\spawnhelp\functions\fnc_getSlope.sqf";
							 			 };
      class getStreets {
                        description = "Checks for Streets in a spezific Range.";
				                file = "\y\grad\addons\spawnhelp\functions\fnc_getStreets.sqf";
			                 };
      class isWater {
                      	description = "Returns whether water is at given position.";
												file = "\y\grad\addons\spawnhelp\functions\fnc_isWater.sqf";
			              };
			class nearestStreet {
				                     description = "Find nearest Street to given Position.";
														 file = "\y\grad\addons\spawnhelp\functions\fnc_nearestStreet.sqf";
			                    };
			class setDebugMarker {
                              description = "Set a Arrow with different Colors to Position";
															file = "\y\grad\addons\spawnhelp\functions\fnc_setDebugMarker.sqf";
			                     };

		};
	};
};
