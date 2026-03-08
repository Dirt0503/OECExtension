#include "\OECExtension\cfgFunctions.hpp"

class CfgPatches
{
    class OEC_Extension_Units
    {
        addonRootClass = "OEC_Extension";
        requiredAddons[] = 
        {
            "OEC_Extension",
            "OEC_Extension_Weapons"
        };
        units[] = 
        {
            //Overwatch Units
            "OEC_Overwatch_Unit_Base",
            "OEC_Overwatch_Unit_Soldier",
            "OEC_Overwatch_Unit_AT",
            "OEC_Overwatch_Unit_CE",
            "OEC_Overwatch_Unit_Medic",
            "OEC_Overwatch_Unit_Recon",
            "OEC_Overwatch_Unit_TL",
            "OEC_Overwatch_Unit_TL_AT",
            "OEC_Overwatch_Unit_TL_CE",
            "OEC_Overwatch_Unit_Elite",
            "OEC_Overwatch_Unit_Elite_AT",
            "OEC_Overwatch_Unit_Elite_CE",
            "OEC_Overwatch_Unit_Recon_TL",
            "OEC_Overwatch_Unit_Wallhammer",
            "OEC_Overwatch_Unit_Airwatch",
            "OEC_Overwatch_Unit_APF",
            "OEC_Overwatch_Unit_Elite_Medic",

            //CISDF Units
            "OEC_Unit_CIS_Infantry_Base", 
            "OEC_Unit_CIS_Infantry_TTSKO",
            "OEC_Unit_CIS_Infantry_CBRN",
            "OEC_Unit_CIS_Infantry_Gorka",
            "OEC_Unit_CIS_Infantry_Izlom",
            "OEC_Unit_CIS_Infantry_M88",
            "OEC_Unit_CIS_Rifleman", 
            "OEC_Unit_CIS_AT", 
            "OEC_Unit_CIS_Medic", 
            "OEC_Unit_CIS_JrSergeant", 
            "OEC_Unit_CIS_Sergeant", 
            "OEC_Unit_CIS_Crew", 
            "OEC_Unit_CIS_Heavy", 
            "OEC_Unit_CIS_Grenadier", 
            "OEC_CIS_Drone", 
            "OEC_Unit_CIS_Spetsnaz", 
            "OEC_Unit_CIS_Scientist", 
            "OEC_Unit_CIS_Officer",

            //Aliens
            "OEC_Unit_Antlion",
		    "OEC_Unit_HoundEye",
			"OEC_Unit_Bullsquid",
			"OEC_Unit_Zombie",
			"OEC_Unit_AntlionGuardian"
        };
        weapons[] = {};
    };
};

class CfgFaces
{
    class Default
    {
        class Custom;
    };
    class Man_A3: Default
    {
        class WBK_CombineHead;
        class OEC_Head: WBK_CombineHead
        {
            displayName = "[OEC] Invisible Head";
            identityTypes[] = {"OEC_Transhumans"};
        };
    };
};

class CfgFactionClasses
{
    class OEC_Faction_Class_Combine
    {
		displayName = "[OEC] Combine";
		priority = -5;
		side = 1;
		icon = "\rhsusf\addons\rhsusf_main\data\armylogo.paa";
		flag = "\rhsusf\addons\rhsusf_main\data\flag_us_co.paa";
		backpack_tf_faction_radio_api = "tf_rt1523g_rhs";
	};
};

class CfgGroups
{
    class East 
    {
        class OEC_Faction_CIS
        {
            name = "[OEC] CISDF";
            class OEC_Group_CIS_Infantry
            {
                name = "Infantry Teams";
                aliveCategory = "Infantry";
                class OEC_group_CIS_infantry_sentry
                {
                    name = "1. Sentry";
                    faction = "OEC_Faction_CIS";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,0};
                    };
                };

                class OEC_group_CIS_infantry_fireteam
                {
                    name = "2. Fireteam";
                    faction = "OEC_Faction_CIS";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                };

                class OEC_group_CIS_infantry_squad
                {
                    name = "4. Squad";
                    faction = "OEC_Faction_CIS";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Sergeant";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {1.5,-1.5,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-1.5,-1.5,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_medic";
                        rank = "PRIVATE";
                        position[] = {2,-2,0};
                    };
                };

                class OEC_group_CIS_infantry_vetSquad
                {
                    name = "5. Veteran Squad";
                    faction = "OEC_Faction_CIS";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Sergeant";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {1.5,-1.5,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-1.5,-1.5,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_medic";
                        rank = "PRIVATE";
                        position[] = {2,-2,0};
                    };
                };

                class OEC_group_CIS_infantry_lightSection
                {
                    name = "6. Light Section";
                    faction = "OEC_Faction_CIS";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Sergeant";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {1.5,-1.5,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-1.5,-1.5,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {2,-2,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-2,-2,0};
                    };
                    class Unit9
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_medic";
                        rank = "PRIVATE";
                        position[] = {2.5,-2.5,0};
                    };
                    class Unit10
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-2.5,-2.5,0};
                    };
                };

                class OEC_group_CIS_infantry_heavySection
                {
                    name = "7. Heavy Section";
                    faction = "OEC_Faction_CIS";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Sergeant";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Grenadier";
                        rank = "PRIVATE";
                        position[] = {1.5,-1.5,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-1.5,-1.5,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {2,-2,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {-2,-2,0};
                    };
                    class Unit9
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_medic";
                        rank = "PRIVATE";
                        position[] = {2.5,-2.5,0};
                    };
                    class Unit10
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-2.5,-2.5,0};
                    };
                };

                class OEC_group_CIS_infantry_ATfireteam
                {
                    name = "3. AT Fireteam";
                    faction = "OEC_Faction_CIS";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                };
            };

            class OEC_Group_CIS_supportInf
            {
                name = "Support Teams";
                aliveCategory = "Infantry";
                class OEC_group_CIS_supportInf_Grenadier
                {
                    name = "1. Grenadier";
                    faction = "OEC_Faction_CIS";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Grenadier";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_CIS_Drone";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,100};
                    };
                };

                class OEC_group_CIS_supportInf_Killteam
                {
                    name = "2. Special Assault Team";
                    faction = "OEC_Faction_CIS";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Spetsnaz";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,30};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                };

                class OEC_group_CIS_supportInf_Spetsnaz
                {
                    name = "3. Spetsnaz Fireteam";
                    faction = "OEC_Faction_CIS";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Spetsnaz";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,30};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                };

                class OEC_group_CIS_supportInf_SpetsnazGuard
                {
                    name = "4. Spetsnaz Bodyguard";
                    faction = "OEC_Faction_CIS";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Spetsnaz";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,30};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "OEC_Unit_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                };
            };

            class OEC_Group_CIS_Armor
            {
                name = "Armor Groups";
				aliveCategory = "Armored";
				class OEC_Group_BTR80_Section
				{
					name = "1. BTR-80 APC Section";
					side = 0;
					faction = "OEC_Faction_CIS";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "OEC_BTR80_CIS";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OEC_BTR80_CIS";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
				};

				class OEC_Group_BTR80_Platoon
				{
					name = "2. BTR-80 APC Platoon";
					side = 0;
					faction = "OEC_Faction_CIS";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "OEC_BTR80_CIS";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OEC_BTR80_CIS";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
                    class Unit2
					{
						side = 0;
						vehicle = "OEC_BTR80_CIS";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OEC_BTR80_CIS";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};

                class OEC_Group_BTR80_PlatoonAssault
				{
					name = "3. BTR-80 APC Assault Platoon";
					side = 0;
					faction = "OEC_Faction_CIS";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "OEC_BTR80_CIS";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OEC_BTR80_CIS";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
                    class Unit2
					{
						side = 0;
						vehicle = "OEC_BTR80_CIS";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OEC_Vehicles_bmp3m";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};

                class OEC_Group_BMP3_Section
				{
					name = "4. BMP-3 IFV Section";
					side = 0;
					faction = "OEC_Faction_CIS";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "OEC_Vehicles_bmp3m";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OEC_Vehicles_bmp3m";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
				};

                class OEC_Group_BMP3_Platoon
				{
					name = "5. BMP-3 IFV Platoon";
					side = 0;
					faction = "OEC_Faction_CIS";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "OEC_Vehicles_bmp3m";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OEC_Vehicles_bmp3m";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
                    class Unit2
					{
						side = 0;
						vehicle = "OEC_Vehicles_bmp3m";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OEC_Vehicles_bmp3m";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};

                class OEC_Group_T80_Section
				{
					name = "5. T-80UE Tank Section";
					side = 0;
					faction = "OEC_Faction_CIS";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "OEC_Vehicles_T80_UE1";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OEC_Vehicles_T80_UE1";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
				};

                class OEC_Group_T80_Platoon
				{
					name = "6. T-80UE Tank Platoon";
					side = 0;
					faction = "OEC_Faction_CIS";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "OEC_Vehicles_T80_UE1";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OEC_Vehicles_T80_UE1";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
                    class Unit2
					{
						side = 0;
						vehicle = "OEC_Vehicles_T80_UE1";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OEC_Vehicles_T80_UE1";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};

                class OEC_Group_T80_PlatoonCombined
				{
					name = "7. T-80UE Combined Platoon";
					side = 0;
					faction = "OEC_Faction_CIS";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "OEC_Vehicles_T80_UE1";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OEC_Vehicles_T80_UE1";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
                    class Unit2
					{
						side = 0;
						vehicle = "OEC_Vehicles_bmp3m";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OEC_Vehicles_bmp3m";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
            };
        };
    };

    class Indep 
    {
        class OEC_Faction_Aliens
        {
            name = "[OEC] Aliens";
            class OEC_Group_Alien_Swarm
            {
                name = "1. Antlion Swarms";
                aliveCategory = "Infantry";
                class OEC_group_Alien_small_swarm
                {
                    name = "1. Antlions Scouts";
                    faction = "OEC_Faction_Aliens";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                };

                class OEC_group_Alien_swarm
                {
                    name = "2. Antlion Swarm";
                    faction = "OEC_Faction_Aliens";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-2,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,-2,0};
                    };
                };

                class OEC_group_Alien_swarm_mixed
                {
                    name = "3. Antlion Swarm (Mixed)";
                    faction = "OEC_Faction_Aliens";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Unit_HoundEye";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Bullsquid";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "OEC_Unit_HoundEye";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-2,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,-2,0};
                    };
                };

                class OEC_group_Alien_guardian_swarm
                {
                    name = "4. Myrmidont Swarm";
                    faction = "OEC_Faction_Aliens";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 2;
                        vehicle = "OEC_Unit_AntlionGuardian";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-2,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,-2,0};
                    };
                };

                class OEC_group_Alien_guardian_swarm_mixed
                {
                    name = "5. Myrmidont Swarm (Mixed)";
                    faction = "OEC_Faction_Aliens";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 2;
                        vehicle = "OEC_Unit_AntlionGuardian";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Unit_HoundEye";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Bullsquid";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "OEC_Unit_HoundEye";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-2,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,-2,0};
                    };
                };
            };

            class OEC_Group_Alien_Creature_Pack
            {
                name = "2. Alien Creature Packs";
                aliveCategory = "Infantry";
                class OEC_group_Alien_houndeye_pack
                {
                    name = "1. Houndeye Pack";
                    faction = "OEC_Faction_Aliens";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 2;
                        vehicle = "OEC_Unit_HoundEye";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Unit_HoundEye";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Unit_HoundEye";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Unit_HoundEye";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                };
                class OEC_group_Alien_Bullsquid_Pack
                {
                    name = "2. Bullsquid Pack";
                    faction = "OEC_Faction_Aliens";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Bullsquid";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Bullsquid";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                };
                class OEC_group_Alien_small_horde
                {
                    name = "3. Small Zombie Horde";
                    faction = "OEC_Faction_Aliens";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                };
                class OEC_group_Alien_horde
                {
                    name = "4. Zombie Horde";
                    faction = "OEC_Faction_Aliens";
                    side = 0;
                    rarityGroup = 0.75;
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    class Unit0
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "PRIVATE";
                        position[] = {1,-2,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "OEC_Unit_Zombie";
                        rank = "PRIVATE";
                        position[] = {-1,-2,0};
                    };
                };
            };
        };
    };

    class West
	{
		class OEC_Faction_Combine
		{
			name = "[OEC] Combine";
        };
    };
};

class CfgVehicles
{
    class Man;
	class CAManBase;
    class B_Soldier_base_f;
    class B_Soldier_f: B_Soldier_base_f
    {
        class HitPoints;
        class EventHandlers;
    };
	class SoldierGB: CAManBase
	{
		class HitPoints;
		class Eventhandlers;
	};
    class WBK_C_ExportClass;
    
    class OEC_Overwatch_Unit_Base: B_Soldier_f
    {
        scope = 1;
        scopecurator = 1;
        author = "OEC";
        displayName = "";
        genericNames = "OEC_Transhumans";
        identityTypes[] = {"OEC_Transhumans"};
        model = "\HL_Combine\data\Nemez_Combine.p3d";
        picture = "\hl_cmb_overwatch\ui\icon_v_ow_ca.paa";
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\Soldier\soldier_torso.paa",
            "HL_Combine\data\Soldier\soldier_pants.paa",
            "HL_Combine\data\Soldier\soldier_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Soldier\soldier_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        uniformClass = "OEC_Overwatch_Uniform_Base";
        nakedUniform = "U_C_WorkerCoverallsGloves_Black";
        backpack = "";
        linkedItems[] = {"ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[]={};
        items[] = {};
        respawnItems[] = {};

		ace_dragging_ignoreWeightCarry = 1;
		ace_dragging_ignoreWeight = 1;
        threat[] = {1, 0.5, 0.1};
        canCarryBackPack = 1;

        class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.9;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.9;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 1;
				radius = 0.2;
				explosionShielding = 0.9;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 1;
				radius = 0.24;
				explosionShielding = 0.9;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 1;
				radius = 0.16;
				explosionShielding = 0.9;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 1;
				radius = 0.18;
				explosionShielding = 0.9;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 1;
				radius = 0.18;
				explosionShielding = 0.9;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 3000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.9;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.6;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.5;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.6;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.9;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 3;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.9;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 3;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.9;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
        class EventHandlers: EventHandlers{};
    };

    class OEC_Overwatch_Unit_Soldier: OEC_Overwatch_Unit_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Soldier";
        uniformClass = "OEC_Overwatch_Uniform_Soldier";
        editorCategory = "OEC_EdCat_Combine";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        backpack = "OEC_Overwatch_Backpack_Invisible";
        linkedItems[] = {"OEC_Overwatch_Helmet_Soldier", "OEC_Overwatch_Vest_Soldier","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Soldier", "OEC_Overwatch_Vest_Soldier", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_AR2","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_AR2","Throw","Put"};
        magazines[] = {"OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2"};
        respawnMagazines[] = {"OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2"};
        hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\soldier_torso.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "\OECExtension\Gear\data\soldier_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Urban\Urban_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbSoldier;";
            };
        };
    };

    class OEC_Overwatch_Unit_AT: OEC_Overwatch_Unit_Soldier
    {
        displayName = "AT Soldier";
        uniformClass = "OEC_Overwatch_Uniform_AT";
        linkedItems[] = {"OEC_Overwatch_Helmet_AT", "OEC_Overwatch_Vest_AT","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_AT", "OEC_Overwatch_Vest_AT", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelectionsTextures[] =
        {
            "\OECExtension\Gear\data\AT_torso.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "\OECExtension\Gear\data\AT_upperArmor.paa",
            "\OECExtension\Gear\data\AT_lowerArmor.paa",
            "HL_Combine\data\Urban\Urban_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbSoldier;";
            };
        };
    };
    class OEC_Overwatch_Unit_CE: OEC_Overwatch_Unit_Soldier
    {
        displayName = "CE Soldier";
        uniformClass = "OEC_Overwatch_Uniform_CE";
        linkedItems[] = {"OEC_Overwatch_Helmet_CE", "OEC_Overwatch_Vest_CE","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_CE", "OEC_Overwatch_Vest_CE", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_SMG46","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_SMG46","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelectionsTextures[] =
        {
            "\OECExtension\Gear\data\engi_torso.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "\OECExtension\Gear\data\engi_upperArmor.paa",
            "\OECExtension\Gear\data\engi_lowerArmor.paa",
            "HL_Combine\data\Urban\Urban_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbSoldier;";
            };
        };
    };
    class OEC_Overwatch_Unit_Medic: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Medic";
        uniformClass = "OEC_Overwatch_Uniform_Medic";
        linkedItems[] = {"OEC_Overwatch_Helmet_Medic", "OEC_Overwatch_Vest_Medic","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Medic", "OEC_Overwatch_Vest_Medic", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_SMG46","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_SMG46","Throw","Put"};
        magazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelectionsTextures[]=
        {
            "HL_Combine\data\Urban\Urban_Shotgunner_torso.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "\OECExtension\Gear\data\medic_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Urban\Urban_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbGrunt;";
            };
        };
    };
    class OEC_Overwatch_Unit_Recon: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Recon";
        uniformClass = "OEC_Overwatch_Uniform_Recon";
        weapons[] = {"OEC_Weapon_R1","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_R1","Throw","Put"};
        magazines[] = {"OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1"};
        linkedItems[] = {"OEC_Overwatch_Helmet_Recon", "OEC_Overwatch_Vest_Recon","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Recon", "OEC_Overwatch_Vest_Recon", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\Recon_Trooper_torso.paa",
            "\OECExtension\Gear\data\Recon_Trooper_pants.paa",
            "\OECExtension\Gear\data\Recon_Trooper_upperArmor.paa",
            "HL_Combine\data\ranger\ranger_lowerArmor.paa",
            "HL_Combine\data\ranger\ranger_boots.paa",
            "HL_Combine\data\ranger\ranger_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbSoldier;";
            };
        };
        camouflage = 0.5;
    };
    class OEC_Overwatch_Unit_TL: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Team Leader";
        uniformClass = "OEC_Overwatch_Uniform_TL";
        linkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        hiddenSelectionsTextures[]=
        {
            "HL_Combine\data\Beta\Beta_torso.paa",
            "HL_Combine\data\Beta\Beta_pants.paa",
            "HL_Combine\data\Beta\Beta_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Beta\Beta_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbSoldier;";
            };
        };
    };
    class OEC_Overwatch_Unit_TL_AT: OEC_Overwatch_Unit_Soldier
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "AT Team Leader";
        uniformClass = "OEC_Overwatch_Uniform_TL_AT";
        linkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL_AT","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL_AT", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelectionsTextures[]=
        {
            "\OECExtension\Gear\data\AT_torso.paa",
            "HL_Combine\data\Beta\Beta_pants.paa",
            "\OECExtension\Gear\data\TL_AT_upperArmor.paa",
            "\OECExtension\Gear\data\AT_lowerArmor.paa",
            "HL_Combine\data\Beta\Beta_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbSoldier;";
            };
        };
    };
    class OEC_Overwatch_Unit_TL_CE: OEC_Overwatch_Unit_Soldier
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "CE Team Leader";
        uniformClass = "OEC_Overwatch_Uniform_TL_CE";
        linkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL_CE","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL_CE", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_SMG46", "OEC_Floor_Turret_Folded","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_SMG46", "OEC_Floor_Turret_Folded","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelectionsTextures[]=
        {
            "\OECExtension\Gear\data\engi_torso.paa",
            "HL_Combine\data\Beta\Beta_pants.paa",
            "\OECExtension\Gear\data\TL_CE_upperArmor.paa",
            "\OECExtension\Gear\data\engi_lowerArmor.paa",
            "HL_Combine\data\Beta\Beta_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbSoldier;";
            };
        };
    };

    class OEC_Overwatch_Unit_Elite: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Squad Leader";
        uniformClass = "OEC_Overwatch_Uniform_Elite";
        model = "\HL_Combine\data\Nemez_Combine_Elite.p3d";
        linkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        hiddenSelections[] = 
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5"
        };
		hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\elite\elite_torso.paa",
            "HL_Combine\data\elite\elite_pants.paa",
            "HL_Combine\data\elite\elite_upperArmor.paa",
            "HL_Combine\data\elite\elite_boots.paa",
            "HL_Combine\data\elite\elite_gloves.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbOrdinal;";
            };
        };
    };
    class OEC_Overwatch_Unit_Elite_AT: OEC_Overwatch_Unit_Soldier
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "AT Squad Leader";
        uniformClass = "OEC_Overwatch_Uniform_Elite_AT";
        model = "\HL_Combine\data\Nemez_Combine_Elite.p3d";
        linkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelections[] = 
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5"
        };
		hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\elite\elite_torso.paa",
            "HL_Combine\data\elite\elite_pants.paa",
            "\OECExtension\Gear\data\SL_AT_upperArmor.paa",
            "HL_Combine\data\elite\elite_boots.paa",
            "HL_Combine\data\elite\elite_gloves.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbOrdinal;";
            };
        };
    };
    class OEC_Overwatch_Unit_Elite_CE: OEC_Overwatch_Unit_Soldier
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "AT Squad Leader";
        uniformClass = "OEC_Overwatch_Uniform_Elite_CE";
        model = "\HL_Combine\data\Nemez_Combine_Elite.p3d";
        linkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_SMG46", "OEC_Floor_Turret_Folded","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_SMG46", "OEC_Floor_Turret_Folded","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelections[] = 
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5"
        };
		hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\elite\elite_torso.paa",
            "HL_Combine\data\elite\elite_pants.paa",
            "\OECExtension\Gear\data\SL_CE_upperArmor.paa",
            "HL_Combine\data\elite\elite_boots.paa",
            "HL_Combine\data\elite\elite_gloves.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbOrdinal;";
            };
        };
    };
    class OEC_Overwatch_Unit_Elite_Medic: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Medic NCO";
        uniformClass = "OEC_Overwatch_Uniform_Elite_Medic";
        model = "\HL_Combine\data\Nemez_Combine_Elite.p3d";
        linkedItems[] = {"OEC_Overwatch_Helmet_Elite_Medic", "OEC_Overwatch_Vest_Elite_Medic","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Elite_Medic", "OEC_Overwatch_Vest_Elite_Medic", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        hiddenSelections[] = 
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5"
        };
		hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\Medic_Elite_torso.paa",
            "\OECExtension\Gear\data\Medic_Elite_pants.paa",
            "\OECExtension\Gear\data\Medic_Elite_upperArmor.paa",
            "HL_Combine\data\elite\elite_boots.paa",
            "HL_Combine\data\elite\elite_gloves.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbOrdinal;";
            };
        };
    };

    class OEC_Overwatch_Unit_Recon_TL: OEC_Overwatch_Unit_Elite
    {
        displayName = "Recon Team Leader";
        uniformClass = "OEC_Overwatch_Uniform_Recon_TL";
        weapons[] = {"OEC_Weapon_R1","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_R1","Throw","Put"};
        magazines[] = {"OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1"};
        linkedItems[] = {"OEC_Overwatch_Helmet_Recon_TL", "OEC_Overwatch_Vest_Recon_TL","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Recon_TL", "OEC_Overwatch_Vest_Recon_TL", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\Recon_Elite_torso.paa",
            "\OECExtension\Gear\data\Recon_Elite_pants.paa",
            "\OECExtension\Gear\data\Recon_Elite_upperArmor.paa",
            "HL_Combine\data\wpu\wpu_boots.paa",
            "HL_Combine\data\wpu\wpu_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbOrdinal;";
            };
        };
        camouflage = 0.5;
    };
    class OEC_Overwatch_Unit_Wallhammer: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Wallhammer";
        uniformClass = "OEC_Overwatch_Uniform_Wallhammer";
        model = "\WBK_FixingFactory\charger\CombainWallhamer.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
        linkedItems[] = {"OEC_Overwatch_Helmet_Wallhammer", "OEC_Overwatch_Vest_Wallhammer_Heavy","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Wallhammer", "OEC_Overwatch_Vest_Wallhammer_Heavy", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_WallhammerShotgun","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_WallhammerShotgun","Throw","Put"};
        magazines[] = {"OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd_Shredder","OEC_Magazine_WallhammerShotgun_8Rnd_Shredder"};
        respawnMagazines[] = {"OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd_Shredder","OEC_Magazine_WallhammerShotgun_8Rnd_Shredder"};
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbCharger;";
            };
        };
        class SoundEnvironExt
		{
			generic[] = {{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,30}},{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,30}},{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,30}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_3.wav",1,1,20}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_2.wav",1,1,20}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_1.wav",1,1,20}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_1.wav",1.2,1,40}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_2.wav",1.2,1,40}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_3.wav",1.2,1,40}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,30}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,30}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,30}},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,20},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,20},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,20}};
		};
		class SoundEquipment
		{
			soldier[] = {{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,30}},{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,30}},{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,30}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_3.wav",1,1,20}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_2.wav",1,1,20}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_1.wav",1,1,20}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_1.wav",1.2,1,40}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_2.wav",1.2,1,40}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_3.wav",1.2,1,40}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,30}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,30}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,30}},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,20},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,20},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,20}};
		};
    };
    class OEC_Overwatch_Unit_Airwatch: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Pilot";
        uniformClass = "OEC_Overwatch_Uniform_Airwatch";
        model = "\WBK_FixingFactory\charger\CombainWallhamer.p3d";
        backpack = "OEC_Overwatch_Backpack_OxygenTank_Airwatch";
        linkedItems[] = {"OEC_Overwatch_Helmet_Airwatch", "OEC_Overwatch_Vest_Airwatch","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Airwatch", "OEC_Overwatch_Vest_Airwatch", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_USP","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_USP","Throw","Put"};
        magazines[] = {"OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP"};
        respawnMagazines[] = {"OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP"};
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbGrunt;";
            };
        };
    };
    class OEC_Overwatch_Unit_APF: OEC_Overwatch_Unit_Soldier
    {
        displayName = "APF";
        uniformClass = "OEC_Overwatch_Uniform_APF";
        model = "@Combain\CombainSuppressor.p3d";
        linkedItems[] = {"OEC_Overwatch_Helmet_APF", "OEC_Overwatch_Vest_APF","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_APF", "OEC_Overwatch_Vest_APF", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_APFSuppressor","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_APFSuppressor","Throw","Put"};
        magazines[] = {"OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd"};
        respawnMagazines[] = {"OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd"};
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbAPF;";
            };
        };
    };

    //---------------------------------------------------------//
    //CISDF Units
    //---------------------------------------------------------//

	class OEC_Unit_CIS_Infantry_Base: SoldierGB
	{
		scope = 0;
		category = "Men";
		author = "OEC Extension";
		side = 0;
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
		vehicleClass = "OEC_Vehclass_Infantry";
		editorSubcategory = "OEC_EdSubCat_Infantry";
		displayName = "[OEC] CIS Base";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro"};
		genericNames = "RussianMen";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 1.6;
		sensitivity = 3;
		threat[] = {1,0.05,0.05};
		camouflage = 1;
		minFireTime = 15;
		canCarryBackPack = 1;
		model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_base.p3d";
		modelSides[] = {0,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "OEC_CIS_Uniform_Flora";

        class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 1;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 1;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 1;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 1;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 3000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 3;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.6;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 3;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.5;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 3;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.5;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
        };
        cost = 100000;

        class Wounds
        {
            tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_infantry\data\flora.rvmat","rhsafrf\addons\rhs_infantry\data\flora_w1.rvmat","rhsafrf\addons\rhs_infantry\data\flora_w2.rvmat","rhsafrf\addons\rhs_infantry\data\flora_bz.rvmat","rhsafrf\addons\rhs_infantry\data\flora_bz_w1.rvmat","rhsafrf\addons\rhs_infantry\data\flora_bz_w2.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
        selectionbodywound = "body_injury";
        selectionlarmwound = "l_arm_injury";
        selectionlarmwound1 = "l_arm_injury";
        selectionlarmwound2 = "hl";
        selectionllegwound = "l_leg_injury";
        selectionllegwound1 = "l_leg_injury";
        selectionllegwound2 = "hl";
        selectionrarmwound = "r_arm_injury";
        selectionrarmwound1 = "r_arm_injury";
        selectionrarmwound2 = "hl";
        selectionRLegWound = "r_leg_injury";
        selectionRLegWound1 = "r_leg_injury";
        selectionrlegwound2 = "hl";
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        Items[] = {};
        RespawnItems[] = {};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\flora_crew_patchless_co.paa"};
		selectionClan = "clan";

		class EventHandlers: EventHandlers{};
    
    };

    class OEC_Unit_CIS_Infantry_TTSKO: OEC_Unit_CIS_Infantry_Base
    {
        scope = 2;
		scopeCurator = 2;
		displayName = "[OEC] M88 TTSKO";
		author = "OEC Extension";
		vehicleClass = "ItemsHeadgear";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		class TransportItems
		{
			class OEC_CIS_Uniform_TTSKO
			{
				name = "OEC_CIS_Uniform_TTSKO";
				count = 1;
			};
		};
        uniformClass = "rhs_uniform_afghanka_para_ttsko_2";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_para.p3d";
		hiddenSelections[] = {"camo","camo1","armpatch"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\para\para_vest_butan_co.paa","rhsafrf\addons\rhs_infantry3\data\para\para_pant_butan_co.paa","rhsafrf\addons\rhs_infantry3\data\para\para_vest_butan_co.paa"};
		selectionHeadWound = "head_injury";
		selectionBodyWound = "injury_body";
		selectionLArmWound = "injury_hands";
		selectionRArmWound = "injury_hands";
		selectionLLegWound = "injury_legs";
		selectionRLegWound = "injury_legs";
		selectionLArmWound1 = "injury_hands";
		selectionRArmWound1 = "injury_hands";
		selectionLLegWound1 = "injury_legs";
		selectionRLegWound1 = "injury_legs";
		class Wounds
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_infantry3\data\para_vest.rvmat","rhsafrf\addons\rhs_infantry3\data\para_vest_w1.rvmat","rhsafrf\addons\rhs_infantry3\data\para_vest_w2.rvmat","rhsafrf\addons\rhs_infantry3\data\para_pant.rvmat","rhsafrf\addons\rhs_infantry3\data\para_pant_w1.rvmat","rhsafrf\addons\rhs_infantry3\data\para_pant_w2.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
    };

    class OEC_Unit_CIS_Infantry_6sh112: OEC_Unit_CIS_Infantry_TTSKO
    {
		displayName = "[OEC] 6sh112";
		class TransportItems
		{
			class OEC_CIS_Uniform_6sh112
			{
				name = "OEC_CIS_Uniform_6sh112";
				count = 1;
			};
		};
        uniformClass = "OEC_CIS_Uniform_6sh112";
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\122_vest_fall_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\122_pant_fall_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest.rvmat","rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest_w1.rvmat","rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest_w2.rvmat","rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant.rvmat","rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant_w1.rvmat","rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant_w2.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
    };

    class OEC_Unit_CIS_Infantry_CBRN: OEC_Unit_CIS_Infantry_TTSKO
    {
		displayName = "[OEC] CBRN Overalls - White";
		class TransportItems
		{
			class OEC_CIS_Uniform_CBRN_White
			{
				name = "OEC_CIS_Uniform_CBRN_White";
				count = 1;
			};
		};
        uniformClass = "OEC_CIS_Uniform_CBRN_White";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		attenuationEffectType = "CarAttenuation";
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_White_CO.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_F.rvmat","a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_injury_F.rvmat","a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_injury_F.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
    };

    class OEC_Unit_CIS_Infantry_Gorka: OEC_Unit_CIS_Infantry_TTSKO
    {
		displayName = "[OEC] Gorka Black";
		class TransportItems
		{
			class OEC_CIS_Uniform_Gorka_Black
			{
				name = "OEC_CIS_Uniform_Gorka_Black";
				count = 1;
			};
		};
        uniformClass = "OEC_Uniform_Gorka_Black";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
        modelSides[] = {0,3,2};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"};
        class Wounds
		{
			tex[] = {};
			mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\Gorka_01.rvmat","a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
    };

    class OEC_Unit_CIS_Infantry_Izlom: OEC_Unit_CIS_Infantry_TTSKO
    {
		displayName = "[OEC] Izlom";
		class TransportItems
		{
			class OEC_CIS_Uniform_Izlom
			{
				name = "OEC_CIS_Uniform_Izlom";
				count = 1;
			};
		};
        uniformClass = "rhs_uniform_mvd_izlom";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_emr_base.p3d";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\T_izlom_co.paa","rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa","rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"};
		modelSides[] = {0,2,3};
		class Wounds
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_infantry2\data\rhs_emr.rvmat","rhsafrf\addons\rhs_infantry2\data\rhs_emr_w1.rvmat","rhsafrf\addons\rhs_infantry2\data\rhs_emr_w2.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
    };

    class OEC_Unit_CIS_Infantry_M88: OEC_Unit_CIS_Infantry_TTSKO
    {
		displayName = "[OEC] M88 (Officer)";
		class TransportItems
		{
			class OEC_CIS_Uniform_M88_Winter
			{
				name = "OEC_CIS_Uniform_M88_Winter";
				count = 1;
			};
		};
        uniformClass = "OEC_CIS_Uniform_M88_Winter";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_winter.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_co.paa","rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_co.paa"};
        class Wounds
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_w1.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_w2.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka01_pant.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_w1.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_w2.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots_w1.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots_w2.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
    };

    class OEC_Unit_CIS_Rifleman: OEC_Unit_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Rifleman";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Vest_6b13_9sh93", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Vest_6b13_9sh93", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_RD54";
        weapons[] = {"OEC_Weapon_AKS74N","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_AKS74N","Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_riflemanAssign;";
			};
        };
    };

	class OEC_Unit_CIS_AT: OEC_Unit_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS AT Soldier";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Vest_6b13_9sh93", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Vest_6b13_9sh93", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_RPG_Bag";
        weapons[] = {"OEC_Weapon_AKS74U", "OEC_Weapon_RPG7", "Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_AKS74U","OEC_Weapon_RPG7", "Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_riflemanAssign;";
			};
        };
    };

	class OEC_Unit_CIS_Medic: OEC_Unit_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Medic";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Helmet_White","OEC_CIS_Vest_6b13", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_6b13_9sh93", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_Medic_Bag";
        weapons[] = {"OEC_Weapon_AKS74U","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_AKS74U","Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisMedicAssign;";
			};
        };
    };

	class OEC_Unit_CIS_JrSergeant: OEC_Unit_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Junior Sergeant";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Vest_6b13_9sh93_Radio", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Vest_6b13_9sh93_Radio", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_RD54";
        weapons[] = {"OEC_Weapon_AKS74N_GP25_PKAS","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_AKS74N_GP25_PKAS","Throw","Put"};
        magazines[] = {"OEC_Magazine_GDM40", "OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_red"};
        respawnMagazines[] = {"OEC_Magazine_GDM40", "OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_Red"};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisJrSargeAssign;";
			};
        };
    };

	class OEC_Unit_CIS_Sergeant: OEC_Unit_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Sergeant";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Vest_6b13_9sh93_Headset", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Vest_6b13_9sh93_Headset", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_Backpack_R148";
        weapons[] = {"OEC_Weapon_AKS74N_GP25_PKAS","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_AKS74N_G25_PKAS","Throw","Put"};
        magazines[] = {"OEC_Magazine_GDM40", "OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_Red"};
        respawnMagazines[] = {"OEC_Magazine_GDM40", "OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_red"};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisSargeAssign;";
			};
        };
    };

	class OEC_Unit_CIS_Crew: OEC_Unit_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Vehicle Crewman";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Beanie_Green", "OEC_CIS_Glasses_Empty", "OEC_CIS_Vest_6b13", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Beanie_Green", "OEC_CIS_Glasses_Empty", "OEC_CIS_Vest_6b13", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"OEC_Weapon_AKS74U","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_AKS74U","Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisCrewAssign;";
			};
        };
    };


	// CIS Special Units

	class OEC_Unit_CIS_Heavy: OEC_Unit_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Heavy";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Specials";
        uniformClass = "OEC_CIS_Uniform_6sh112";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Vest_ModularCarrier", "OEC_CIS_Facewear_APR", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Vest_ModularCarrier", "OEC_CIS_Facewear_APR", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_SCBA_Bag";
        weapons[] = {"OEC_Weapon_PKM","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_PKM","Throw","Put"};
        magazines[] = {"OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "Smokeshell", "Smokeshell", "Smokeshell"};
        respawnMagazines[] = {"OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "Smokeshell", "Smokeshell", "Smokeshell"};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisHeavyAssign; ";
			};
        };
    };

	class OEC_Unit_CIS_Grenadier: OEC_Unit_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Grenadier";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Specials";
        uniformClass = "OEC_CIS_Uniform_6sh112";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Beanie_Green", "OEC_CIS_Facewear_APR", "OEC_CIS_Vest_ModularCarrier_Light", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Beanie_Green", "OEC_CIS_Facewear_APR", "OEC_CIS_Vest_ModularCarrier_Light", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_Engineer_RK30";
        weapons[] = {"OEC_Weapon_6G30","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_6G30","Throw","Put"};
        magazines[] = {"OEC_Magazine_SmokeStun_6Rnd", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red"};
        respawnMagazinesagazines[] = {"OEC_Magazine_SmokeStun_6Rnd", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red"};


		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisGrenAssign;";
			};
        };
    };

	class O_UAV_01_F;
	class OEC_CIS_Drone: O_UAV_01_F
	{
		scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Spotting Drone";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Specials";
		class EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisSpottingDrone;";
			};
        };
	};

	class OEC_Unit_CIS_Spetsnaz: OEC_Unit_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Spetsnaz";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Specials";
        uniformClass = "OEC_CIS_Uniform_Gorka_Black";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Facewear_APR_Black", "OEC_CIS_Vest_PlateCarrier_Black", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Facewear_APR_Black", "OEC_CIS_Vest_PlateCarrier_Black", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_SCBA_Bag";
        weapons[] = {"OEC_Weapon_ASVal_PSO1","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_ASVal_PSO1","Throw","Put"};
        magazines[] = {"OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "Smokeshell", "Smokeshell"};
        respawnMagazinesagazines[] = {"OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "Smokeshell", "Smokeshell"};


		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisSpetsAssign;";
			};
        };
    };
	
	// CIS HVTs
	class OEC_Unit_CIS_Scientist: OEC_Unit_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Scientist";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_HVTs";
        uniformClass = "OEC_CIS_Uniform_CBRN_White";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Helmet_White", "OEC_CIS_Vest_Beltbag1", "OEC_CIS_Facewear_APR_Black", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Helmet_White", "OEC_CIS_Vest_Beltbag1", "OEC_CIS_Facewear_APR_Black", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Throwbag";
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};

		class EventHandlers {};
    };

	class OEC_Unit_CIS_Officer: OEC_Unit_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Officer";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "Squares"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_HVTs";
        uniformClass = "OEC_CIS_Uniform_M88_Winter";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Ushanka", "OEC_CIS_Vest_Beltbag1", "OEC_CIS_Facewear_Squares_Tinted", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Ushanka", "OEC_CIS_Vest_Beltbag1", "OEC_CIS_Facewear_Squares_Tinted", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_R148";
        weapons[] = {"OEC_Weapon_Makarov", "Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_Makarov", "Throw","Put"};
        magazines[] = {"OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd"};
        respawnMagazines[] = {"OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd"};

		class EventHandlers {};
    };

    //-------------------------------------------------------//
    //ALIENS
    //-------------------------------------------------------//

    class OEC_Unit_Antlion: WBK_C_ExportClass
	{
		gestures = "CfgGesturesAntlion";
		class SoundEnvironExt
		{
			generic[] = {{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear2.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear3.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear4.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear5.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear6.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear7.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_1.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_2.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_3.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_4.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_5.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_6.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_7.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_8.wav",1,1,40}},{"fly",{"\WBK_CombineAlienShit\sounds\antlion\fly.wav",2,1,40}}};
		};
		class SoundEquipment
		{
			soldier[] = {{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear2.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear3.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear4.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear5.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear6.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear7.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_1.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_2.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_3.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_4.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_5.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_6.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_7.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_8.wav",1,1,40}},{"fly",{"\WBK_CombineAlienShit\sounds\antlion\fly.wav",1,1,40}}};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
		};
		class SoundBreathInjured
		{
			Person1[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
		};

		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "Antlion";
        editorCategory = "OEC_EdCat_Aliens";
        editorSubCategory = "OEC_EdSubCat_Antlions";
        faction = "OEC_Faction_Aliens";
		factionClass = "OEC_Faction_Class_Aliens";

		items[] = {};
		uniformClass = "antlion_uniform";
		nakedUniform = "antlion_uniform";
		_generalMacro = "WBK_HL_Aliens";
		vehicleclass = "Men";
		moves = "cfgMovesWbkHAntlion";
		model = "WBK_CombineAlienShit\antlion.p3d";
		armor = 7;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\antlion_tex.paa"};
		hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\antlion.rvmat"};
		attendant = 1;
		class Character
		{
			radius = 200;
			detectionRadius = 500;
			chaseDistance = 51;
			coverRadius = 50;
			escapeRadius = 200;
			damage = 0.4;
			damageHitPoints[] = {{"HitLeftLeg",0.4},{"HitRightLeg",0.4},{"HitBody",0.7}};
			armor = 7;
			attackDistances[] = {2,3};
			allowWalk = 1;
			aggressive = 1;
			secrecy = 0.4;
			curious = 1;
			cowardice = 0;
			societal = 0;
			tactful = 1;
			courage = 1;
			friendly[] = {};
			class Sounds
			{
				idle[] = {};
				attack[] = {};
				hit[] = {};
				other[] = {};
			};
			class Animations
			{
				attack_1[] = {};
				attack_2[] = {};
				attack_3[] = {};
				agry[] = {};
				eat[] = {""};
			};
			class HitPoints
			{
				class HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.08;
					explosionShielding = 0.1;
					minimalHit = 0.01;
				};
				class HitNeck: HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_neck";
					passThrough = 0.1;
					radius = 0.1;
					explosionShielding = 0.5;
					minimalHit = 0.01;
				};
				class HitHead: HitNeck
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 0.5;
					minimalHit = 0.01;
					depends = "HitFace max HitNeck";
				};
				class HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_pelvis";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitAbdomen: HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_spine1";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitDiaphragm: HitAbdomen
				{
					armor = 1;
					material = -1;
					name = "bip01_spine2";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitChest: HitDiaphragm
				{
					armor = 1;
					material = -1;
					name = "bip01_spine3";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitBody: HitChest
				{
					armor = 6500;
					material = -1;
					name = "Body";
					passThrough = 0.1;
					radius = 0.16;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
					depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class HitArms
				{
					armor = 1;
					material = -1;
					name = "arms";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
				};
				class HitHands: HitArms
				{
					armor = 1;
					material = -1;
					name = "hands";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
					depends = "HitArms";
				};
				class HitLegs
				{
					armor = 1;
					material = -1;
					name = "legs";
					passThrough = 1;
					radius = 0.12;
					explosionShielding = 1;
					visual = "injury_legs";
					minimalHit = 0.01;
				};
			};
			armorStructural = 0.4;
			explosionShielding = 0.04;
			minTotalDamageThreshold = 0.001;
			impactDamageMultiplier = 0.5;
		};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {};
	};

	class OEC_Unit_AntlionGuardian: WBK_C_ExportClass
	{
		side = 2;
		gestures = "CfgGesturesAntlionGuardian";
		class SoundEnvironExt
		{
			generic[] = {{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft4.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft5.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft6.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft7.wav",2,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\antlionGuardian\growl_idle.wav",1,1,70}}};
		};
		class SoundEquipment
		{
			soldier[] = {{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft4.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft5.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft6.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft7.wav",2,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\antlionGuardian\growl_idle.wav",1,1,70}}};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
		};
		class SoundBreathInjured
		{
			Person1[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
		};

		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "Antlion Myrmidont";
        editorCategory = "OEC_EdCat_Aliens";
        editorSubCategory = "OEC_EdSubCat_Antlions";
        faction = "OEC_Faction_Aliens";
		factionClass = "OEC_Faction_Class_Aliens";


		items[] = {};
		uniformClass = "AG_uniform";
		nakedUniform = "AG_uniform";
		vehicleclass = "Men";
		moves = "cfgMovesWbkAntlionGuardian";
		model = "WBK_CombineAlienShit\AntlionGuardian.p3d";
		armor = 7;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\antlionGuardian_tex.paa"};
		hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\antlionGuardian.rvmat"};
		attendant = 1;
		class Character
		{
			radius = 200;
			detectionRadius = 500;
			chaseDistance = 51;
			coverRadius = 50;
			escapeRadius = 200;
			damage = 0.4;
			damageHitPoints[] = {{"HitLeftLeg",0.4},{"HitRightLeg",0.4},{"HitBody",0.7}};
			armor = 7;
			attackDistances[] = {2,3};
			allowWalk = 1;
			aggressive = 1;
			secrecy = 0.4;
			curious = 1;
			cowardice = 0;
			societal = 0;
			tactful = 1;
			courage = 1;
			friendly[] = {};
			class Sounds
			{
				idle[] = {};
				attack[] = {};
				hit[] = {};
				other[] = {};
			};
			class Animations
			{
				attack_1[] = {};
				attack_2[] = {};
				attack_3[] = {};
				agry[] = {};
				eat[] = {""};
			};
			class HitPoints
			{
				class HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.08;
					explosionShielding = 0.1;
					minimalHit = 0.01;
				};
				class HitNeck: HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_neck";
					passThrough = 0.1;
					radius = 0.1;
					explosionShielding = 0.5;
					minimalHit = 0.01;
				};
				class HitHead: HitNeck
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 0.5;
					minimalHit = 0.01;
					depends = "HitFace max HitNeck";
				};
				class HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_pelvis";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitAbdomen: HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_spine1";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitDiaphragm: HitAbdomen
				{
					armor = 1;
					material = -1;
					name = "bip01_spine2";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitChest: HitDiaphragm
				{
					armor = 1;
					material = -1;
					name = "bip01_spine3";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitBody: HitChest
				{
					armor = 6500;
					material = -1;
					name = "Body";
					passThrough = 0.1;
					radius = 0.16;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
					depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class HitArms
				{
					armor = 1;
					material = -1;
					name = "arms";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
				};
				class HitHands: HitArms
				{
					armor = 1;
					material = -1;
					name = "hands";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
					depends = "HitArms";
				};
				class HitLegs
				{
					armor = 1;
					material = -1;
					name = "legs";
					passThrough = 1;
					radius = 0.12;
					explosionShielding = 1;
					visual = "injury_legs";
					minimalHit = 0.01;
				};
			};
			armorStructural = 0.4;
			explosionShielding = 0.04;
			minTotalDamageThreshold = 0.001;
			impactDamageMultiplier = 0.5;
		};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {};
	};

	class OEC_Unit_HoundEye: WBK_C_ExportClass
	{
		gestures = "CfgGesturesHoundeye";
		class SoundEnvironExt
		{
			generic[] = {{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step2.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step3.wav",1,1,40}}};
		};
		class SoundEquipment
		{
			soldier[] = {{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step2.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step3.wav",1,1,40}}};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
		};
		class SoundBreathInjured
		{
			Person1[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
		};

		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "Houndeye";
        editorCategory = "OEC_EdCat_Aliens";
        editorSubCategory = "OEC_EdSubCat_Creatures";
        faction = "OEC_Faction_Aliens";
		factionClass = "OEC_Faction_Class_Aliens";

		items[] = {};
		uniformClass = "houndeye_uniform";
		nakedUniform = "houndeye_uniform";
		_generalMacro = "WBK_HL_Aliens";
		vehicleclass = "Men";
		moves = "cfgMovesWbkHoundeye";
		model = "WBK_CombineAlienShit\houndeye.p3d";
		armor = 7;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\houndeye_tex.paa"};
		hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\houndeye.rvmat"};
		attendant = 1;
		class Character
		{
			radius = 200;
			detectionRadius = 500;
			chaseDistance = 51;
			coverRadius = 50;
			escapeRadius = 200;
			damage = 0.4;
			damageHitPoints[] = {{"HitLeftLeg",0.4},{"HitRightLeg",0.4},{"HitBody",0.7}};
			armor = 7;
			attackDistances[] = {2,3};
			allowWalk = 1;
			aggressive = 1;
			secrecy = 0.4;
			curious = 1;
			cowardice = 0;
			societal = 0;
			tactful = 1;
			courage = 1;
			friendly[] = {};
			class Sounds
			{
				idle[] = {};
				attack[] = {};
				hit[] = {};
				other[] = {};
			};
			class Animations
			{
				attack_1[] = {};
				attack_2[] = {};
				attack_3[] = {};
				agry[] = {};
				eat[] = {""};
			};
			class HitPoints
			{
				class HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.08;
					explosionShielding = 0.1;
					minimalHit = 0.01;
				};
				class HitNeck: HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_neck";
					passThrough = 0.1;
					radius = 0.1;
					explosionShielding = 0.5;
					minimalHit = 0.01;
				};
				class HitHead: HitNeck
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 0.5;
					minimalHit = 0.01;
					depends = "HitFace max HitNeck";
				};
				class HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_pelvis";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitAbdomen: HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_spine1";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitDiaphragm: HitAbdomen
				{
					armor = 1;
					material = -1;
					name = "bip01_spine2";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitChest: HitDiaphragm
				{
					armor = 1;
					material = -1;
					name = "bip01_spine3";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitBody: HitChest
				{
					armor = 6500;
					material = -1;
					name = "Body";
					passThrough = 0.1;
					radius = 0.16;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
					depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class HitArms
				{
					armor = 1;
					material = -1;
					name = "arms";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
				};
				class HitHands: HitArms
				{
					armor = 1;
					material = -1;
					name = "hands";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
					depends = "HitArms";
				};
				class HitLegs
				{
					armor = 1;
					material = -1;
					name = "legs";
					passThrough = 1;
					radius = 0.12;
					explosionShielding = 1;
					visual = "injury_legs";
					minimalHit = 0.01;
				};
			};
			armorStructural = 0.4;
			explosionShielding = 0.04;
			minTotalDamageThreshold = 0.001;
			impactDamageMultiplier = 0.5;
		};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {};
	};

	class OEC_Unit_Bullsquid: WBK_C_ExportClass
	{
		gestures = "CfgGesturesBullsquid";
		class SoundEnvironExt
		{
			generic[] = {{"run",{"\WBK_CombineAlienShit\sounds\bullsquid\step1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\bullsquid\step2.wav",1,1,40}}};
		};
		class SoundEquipment
		{
			soldier[] = {{"run",{"\WBK_CombineAlienShit\sounds\bullsquid\step1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\bullsquid\step2.wav",1,1,40}}};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
		};
		class SoundBreathInjured
		{
			Person1[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
		};

		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "Bullsquid";
        editorCategory = "OEC_EdCat_Aliens";
        editorSubCategory = "OEC_EdSubCat_Creatures";
        faction = "OEC_Faction_Aliens";
		factionClass = "OEC_Faction_Class_Aliens";

		items[] = {};
		uniformClass = "bullsquid_uniform";
		nakedUniform = "bullsquid_uniform";
		vehicleclass = "Men";
		moves = "cfgMovesWbkBullsuiqd";
		model = "WBK_CombineAlienShit\bullsquid.p3d";
		armor = 7;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		hiddenSelections[] = {"Camo","CamoB"};
		hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\bullsquid_tex.paa","\WBK_CombineAlienShit\textures\bullsquid_eye_tex.paa"};
		hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\bullsquid.rvmat",""};
		attendant = 1;
		class Character
		{
			radius = 200;
			detectionRadius = 500;
			chaseDistance = 51;
			coverRadius = 50;
			escapeRadius = 200;
			damage = 0.4;
			damageHitPoints[] = {{"HitLeftLeg",0.4},{"HitRightLeg",0.4},{"HitBody",0.7}};
			armor = 7;
			attackDistances[] = {2,3};
			allowWalk = 1;
			aggressive = 1;
			secrecy = 0.4;
			curious = 1;
			cowardice = 0;
			societal = 0;
			tactful = 1;
			courage = 1;
			friendly[] = {};
			class Sounds
			{
				idle[] = {};
				attack[] = {};
				hit[] = {};
				other[] = {};
			};
			class Animations
			{
				attack_1[] = {};
				attack_2[] = {};
				attack_3[] = {};
				agry[] = {};
				eat[] = {""};
			};
			class HitPoints
			{
				class HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.08;
					explosionShielding = 0.1;
					minimalHit = 0.01;
				};
				class HitNeck: HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_neck";
					passThrough = 0.1;
					radius = 0.1;
					explosionShielding = 0.5;
					minimalHit = 0.01;
				};
				class HitHead: HitNeck
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 0.5;
					minimalHit = 0.01;
					depends = "HitFace max HitNeck";
				};
				class HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_pelvis";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitAbdomen: HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_spine1";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitDiaphragm: HitAbdomen
				{
					armor = 1;
					material = -1;
					name = "bip01_spine2";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitChest: HitDiaphragm
				{
					armor = 1;
					material = -1;
					name = "bip01_spine3";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitBody: HitChest
				{
					armor = 6500;
					material = -1;
					name = "Body";
					passThrough = 0.1;
					radius = 0.16;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
					depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class HitArms
				{
					armor = 1;
					material = -1;
					name = "arms";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
				};
				class HitHands: HitArms
				{
					armor = 1;
					material = -1;
					name = "hands";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
					depends = "HitArms";
				};
				class HitLegs
				{
					armor = 1;
					material = -1;
					name = "legs";
					passThrough = 1;
					radius = 0.12;
					explosionShielding = 1;
					visual = "injury_legs";
					minimalHit = 0.01;
				};
			};
			armorStructural = 0.4;
			explosionShielding = 0.04;
			minTotalDamageThreshold = 0.001;
			impactDamageMultiplier = 0.5;
		};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {};
	};

	class OEC_Unit_Zombie: WBK_C_ExportClass
	{

		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "Zombie";
        editorCategory = "OEC_EdCat_Aliens";
        editorSubCategory = "OEC_EdSubCat_Zombies";
        faction = "OEC_Faction_Aliens";
		factionClass = "OEC_Faction_Class_Aliens";

		uniformClass = "OEC_Rebel_Civ_Uniform_White";
		backpack = "";
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		items[] = {};
		linkedItems[] = {"OEC_Misc_Helmet_Headcrab"};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
		};
		class SoundBreathInjured
		{
			Person1[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
		};
	};
};

class CfgVoice
{
	voices[] += {"OEC_Voice_NoVoice"};
	class OEC_Voice_NoVoice
	{
		scope = 2;
		author = "OEC Extension";
		displayName = "[OEC] No Voice";
		protocol = "RadioProtocolENG";
		directories[] = {"",""};
		identityTypes[] = {"OEC_Transhumans"};
		variants[] = {0.95,1,1.05};
		icon = "OECExtension\OEClogo1.paa";
		voiceType = "";
	};
};

class CfgWorlds
{
    class GenericNames
    {
        class OEC_Transhumans
        {
            class FirstNames
            {
                onetwo = "1-2.";
                onethree = "1-3.";
                onefour = "1-4.";
                zerotwo = "0-2.";
                zerothree = "0-3.";
                zerofour = "0-4.";
                zerofive = "0-5.";
            };
            class LastNames
            {
                echo1 = "Echo-1";
                echo3 = "Echo-3";
                echo4 = "Echo-4";
                echo6 = "Echo-6";
                echo7 = "Echo-7";
                echo8 = "Echo-8";
                echo9 = "Echo-9";
                mao = "Maow :3";
                union7 = "Union-7";
                helix2 = "Helix-2";
                helix5 = "Helix-5";
                helix7 = "Helix-7";
                spikewall1 = "Spikewall-1";
                spikewall3 = "Spikewall-3";
                spikewall5 = "Spikewall-5";
                grid4 = "Grid-4";
                grid5 = "Grid-5";
                grid6 = "Grid-6";
                grid8 = "Grid-8";
                jury2 = "Jury-2";
                jury6 = "Jury-6";
                jury10 = "Jury-10";
            };
        };
    };
};

class Extended_InitPost_EventHandlers
{
	class OEC_Unit_Antlion
	{
		class HL_Antlion_Ai_Init
		{
			onRespawn = "true";
			init = "_unit = _this select 0; if (local _unit) then {_unit execVM '\OECExtension\Scripts\xen_antlion.sqf';};";
		};
	};

	class OEC_Unit_AntlionGuardian
	{
		class HL_AG_Ai_Init
		{
			onRespawn = "true";
			init = "_unit = _this select 0; if (local _unit) then {_unit execVM '\OECExtension\Scripts\xen_antlionguardian.sqf';};";
		};
	};

	class OEC_Unit_HoundEye
	{
		class HL_HoundEye_Ai_Init
		{
			onRespawn = "true";
			init = "_unit = _this select 0; if (local _unit) then {_unit execVM '\OECExtension\Scripts\xen_houndEye.sqf';};";
		};
	};

	class OEC_Unit_Bullsquid
	{
		class HL_Bullsquid_Ai_Init
		{
			onRespawn = "true";
			init = "_unit = _this select 0; if (local _unit) then {_unit execVM '\OECExtension\Scripts\xen_bullsquid.sqf';};";
		};
	};

	class OEC_Unit_Zombie
	{
		class HL_ClassicZombie_Ai_Init
		{
			onRespawn = "true";
			init = "_unit = _this select 0; if (local _unit) then {[_unit,false] execVM '\OECExtension\Scripts\xen_zombie.sqf';};";
		};
	};
};