class CfgORBAT
{
	class USOCOM_HQ
	{
		id = 1;
		idType=0;
		side="West";
		size="Platoon";
		type="HQ";
		//insignia="pic\orbat\socom.paa"; //produziert fehler wenn erste einheit die insignia drin hat Oo
		commander="NATOMen";
		commanderRank="General";
		text="US Special Operations Command";
		textShort = "SOCOM";
		color[] = {0,0,1,1};
		subordinates[] = {}; //{USOCOM_LOC};
		class USOCOM_LOC
		{
			id = 1;
			idType=0;
			side="West";
			size="Section";
			type="GeneralSupport";
			insignia="pic\orbat\socom.paa";
			commander="NATOMen";
			commanderRank="Colonel";
			text="Mission Command - Callsign: Sunray";
			textShort = "HBCT - SUNRAY";
			color[] = {0,0,1,1};
			subordinates[] = {}; //{UBULLFROG,UFOXHOUND,UACORN};
			class UBULLFROG
			{
				id = 6; // Unit ID
				idType = 0; // Unit ID type
				 // 0 - show as ordinal number, e.g. "7th" (default)
				 // 1 - show as roman numeral, e.g. "VII"
				 // 2 - show as NATO phonetical alphabet word, e.g. "Golf"
		                // 3 - show as color, e.g. "Red"

				side = "West"; // Unit side from CfgChainOfCommand >> Sides
				size = "FireTeam"; // Unit size from CfgChainOfCommand >> Sizes
				type = "Airborne"; // Unit type from CfgChainOfCommand >> Types
				insignia = "pic\orbat\devgru.paa"; // Unit insignia, displayed in ORBAT background and in tooltip
				colorInsignia[] = {0,0,1,1}; // Insignia image color (white default), can be either RGBA array, or class from CfgMarkerColors
				commander = "NATOMen"; // Name of unit commander. Can be either direct name, or class from CfgWorlds >> GenericNames (random name from the list is then selected)
				commanderRank = "Lieutenant"; // Rank of unit commander (by default selected based on unit size)
				tags[] = {}; // Group tags. When opening ORBAT viewer, user can define what tags will be accepted.
				text = "United States Naval Special Warfare Development Group"; // Custom text and short text, can still use some arguments when defined:
				// 	%1 - ID (e.g. "7th")
				// 	%2 - Type (e.g. "Infantry")
				// 	%3 - Size (e.g. "Division")
				textShort = "DEVGRU - Callsign: Bullfrog";
				//texture = "\ca\missions_f\data\orbat\customTexture_ca.paa"; // Custom texture, will replace icon set by 'type' param.
				color[] = {0,0,1,1}; // Custom color, will replace color set by 'side' param. Can be either RGBA array, or class from CfgMarkerColors
				description= "Seal Team Six, Callsign: Bullfrog"; // A brief description of the group or unit.
				assets[] = {}; // Will display pictures of all available assets to the unit commander
				subordinates[] = {}; // Subordinates, searched on the same level as this class.

			};
			class UFOXHOUND
			{
				id = 10;
				idType = 2;
				side = "West";
				size = "Squad";
				type = "Infantry";
				insignia = "pic\orbat\marsoc.paa";
				colorInsignia[] = {0,0,1,1};
				commander = "NATOMen";
				commanderRank = "Captain";
				tags[] = {};
				text = "Marine Special Operations Regiment";
				textShort = "MSOR - Callsign: Foxhound";
				//texture = "\ca\missions_f\data\orbat\customTexture_ca.paa"; // Custom texture, will replace icon set by 'type' param.
				color[] = {0,0,1,1};
				description= "Foxhound Leader";
				assets[] = {B_Boat_Transport_01_F};
				subordinates[] = {};
				class UFOXHOUND_1
				{
					id = 1;
					idType = 2;
					type = "Infantry";
					size = "FireTeam";
					side = "West";
					commander = "NATOMen";
					insignia = "pic\orbat\1stMRB.paa";
					tags[] = {"BLUFOR", "USMC"};
		 		};
				class UFOXHOUND_2
				{
					id = 2;
					idType = 2;
					type = "Infantry";
					size = "FireTeam";
					side = "West";
					commander = "NATOMen";
					insignia = "pic\orbat\1stMRB.paa";
					tags[] = {"BLUFOR", "USMC"};
		 		};
			};
			class UACORN
			{
				id = 1;
				idType = 3;
				side = "West";
				size = "FireTeam";
				type = "Infantry";
				insignia = "pic\orbat\MSOIB.paa";
				colorInsignia[] = {0,0,1,1};
				commander = "NATOMen";
				commanderRank = "Major";
				tags[] = {"BLUFOR", "USMC"};
				text = "Marine Special Operations Intelligence Battalion";
				textShort = "MSIOB - Callsign: Acorn";
				color[] = {0,0,1,1};
				description= "MSOG Officer";
				assets[] = {};
				subordinates[] = {};
			};
		};
	};
};
