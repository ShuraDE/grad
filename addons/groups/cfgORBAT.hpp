class CfgORBAT
{
	class B_HQ
	{
		id = 1;
		idType=0;
		side="West";
		size="Platoon";
		type="HQ";
		//insignia="pic\orbat\socom.paa"; //produziert fehler wenn erste einheit die insignia drin hat Oo
		commander="NATOMen";
		commanderRank="General";
		text="High Command";
		textShort = "Base";
		color[] = {0,0,1,1};
		subordinates[] = {};
		class B_COMM
		{
			id = 1;
			idType=0;
			side="West";
			size="Section";
			type="GeneralSupport";
			insignia="\y\grad\ga_logo.paa";
			commander="NATOMen";
			commanderRank="Colonel";
			text="Mission Command - Callsign: Command";
			textShort = "Alpha";
			color[] = {0,0,1,1};
			subordinates[] = {}; //{UBULLFROG,UFOXHOUND,UACORN};
			class B_S1
			{
				id = 6; // Unit ID
				idType = 0; // Unit ID type
				 // 0 - show as ordinal number, e.g. "7th" (default)
				 // 1 - show as roman numeral, e.g. "VII"
				 // 2 - show as NATO phonetical alphabet word, e.g. "Golf"
		                // 3 - show as color, e.g. "Red"

				side = "West"; // Unit side from CfgChainOfCommand >> Sides
				size = "Squad"; // Unit size from CfgChainOfCommand >> Sizes
				type = "Airborne"; // Unit type from CfgChainOfCommand >> Types
				insignia = "\y\grad\ga_logo.paa"; // Unit insignia, displayed in ORBAT background and in tooltip
				colorInsignia[] = {0,0,1,1}; // Insignia image color (white default), can be either RGBA array, or class from CfgMarkerColors
				commander = "NATOMen"; // Name of unit commander. Can be either direct name, or class from CfgWorlds >> GenericNames (random name from the list is then selected)
				commanderRank = "Lieutenant"; // Rank of unit commander (by default selected based on unit size)
				tags[] = {}; // Group tags. When opening ORBAT viewer, user can define what tags will be accepted.
				text = "Alpha Squad"; // Custom text and short text, can still use some arguments when defined:
				// 	%1 - ID (e.g. "7th")
				// 	%2 - Type (e.g. "Infantry")
				// 	%3 - Size (e.g. "Division")
				textShort = "Alpha";
				//texture = "\ca\missions_f\data\orbat\customTexture_ca.paa"; // Custom texture, will replace icon set by 'type' param.
				color[] = {0,0,1,1}; // Custom color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
				description= "Alpha Squad"; // A brief description of the group or unit.
				assets[] = {}; // Will display pictures of all available assets to the unit commander
				subordinates[] = {}; // Subordinates, searched on the same level as this class.
				class B_S1_F1
				{
					id = 1;
					idType = 2;
					type = "Infantry";
					size = "FireTeam";
					side = "West";
					textShort = "A1";
					commander = "NATOMen";
					insignia = "\y\grad\ga_logo.paa";
					tags[] = {"BLUFOR", "USMC"};
		 		};
				class B_S1_F2
				{
					id = 2;
					idType = 2;
					type = "Infantry";
					size = "FireTeam";
					side = "West";
					textShort = "A2";
					commander = "NATOMen";
					insignia = "\y\grad\ga_logo.paa";
					tags[] = {"BLUFOR", "USMC"};
		 		};
			};
			class B_S2
			{
				id = 10;
				idType = 2;
				side = "West";
				size = "Squad";
				type = "Infantry";
				insignia = "\y\grad\ga_logo.paa";
				colorInsignia[] = {0,0,1,1};
				commander = "NATOMen";
				commanderRank = "Captain";
				tags[] = {};
				text = "Bravo Squad";
				textShort = "Bravo";
				texture = "\y\grad\ga_logo.paa"; // Custom texture, will replace icon set by 'type' param.
				color[] = {0,0,1,1};
				description= "Bravo Squad";
				assets[] = {B_Boat_Transport_01_F};
				subordinates[] = {};
				class B_S2_F1
				{
					id = 1;
					idType = 2;
					type = "Infantry";
					size = "FireTeam";
					side = "West";
					commander = "NATOMen";
					insignia = "\y\grad\ga_logo.paa";
					tags[] = {"BLUFOR", "USMC"};
		 		};
				class B_S2_F2
				{
					id = 2;
					idType = 2;
					type = "Infantry";
					size = "FireTeam";
					side = "West";
					commander = "NATOMen";
					insignia = "\y\grad\ga_logo.paa";
					tags[] = {"BLUFOR", "USMC"};
		 		};
			};
		};
	};
};
