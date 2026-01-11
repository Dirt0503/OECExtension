class CfgPatches
{
    class OEC_Extension_Resistance_Units
    {
        addonRootClass = "OEC_Extension_Resistance";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance",
            "A3_data_F",
            "A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F"
        };
        units[] = {};
        weapons[] = {};
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
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
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
                        vehicle = "OEC_Units_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
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
                        vehicle = "OEC_Units_CIS_Sergeant";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {1.5,-1.5,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-1.5,-1.5,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_medic";
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
                        vehicle = "OEC_Units_CIS_Sergeant";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {1.5,-1.5,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-1.5,-1.5,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_medic";
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
                        vehicle = "OEC_Units_CIS_Sergeant";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {1.5,-1.5,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-1.5,-1.5,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {2,-2,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-2,-2,0};
                    };
                    class Unit9
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_medic";
                        rank = "PRIVATE";
                        position[] = {2.5,-2.5,0};
                    };
                    class Unit10
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
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
                        vehicle = "OEC_Units_CIS_Sergeant";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Grenadier";
                        rank = "PRIVATE";
                        position[] = {1.5,-1.5,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-1.5,-1.5,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {2,-2,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {-2,-2,0};
                    };
                    class Unit9
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_medic";
                        rank = "PRIVATE";
                        position[] = {2.5,-2.5,0};
                    };
                    class Unit10
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
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
                        vehicle = "OEC_Units_CIS_JrSergeant";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_AT";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_rifleman";
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
                        vehicle = "OEC_Units_CIS_Grenadier";
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
                        vehicle = "OEC_Units_CIS_Spetsnaz";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,30};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Heavy";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Spetsnaz";
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
                        vehicle = "OEC_Units_CIS_Spetsnaz";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,30};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Spetsnaz";
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
                        vehicle = "OEC_Units_CIS_Spetsnaz";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {0.5,-0.5,30};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {-0.5,-0.5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Spetsnaz";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "OEC_Units_CIS_Spetsnaz";
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
                        vehicle = "OEC_Units_Antlion";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
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
                        vehicle = "OEC_Units_Antlion";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-2,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
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
                        vehicle = "OEC_Units_Antlion";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Units_HoundEye";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "OEC_Units_Bullsquid";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "OEC_Units_HoundEye";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-2,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
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
                        vehicle = "OEC_Units_AntlionGuardian";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-2,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
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
                        vehicle = "OEC_Units_AntlionGuardian";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Units_HoundEye";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "OEC_Units_Bullsquid";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "OEC_Units_HoundEye";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
                        rank = "PRIVATE";
                        position[] = {1,-2,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "OEC_Units_Antlion";
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
                        vehicle = "OEC_Units_HoundEye";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Units_HoundEye";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Units_HoundEye";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Units_HoundEye";
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
                        vehicle = "OEC_Units_Bullsquid";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Units_Bullsquid";
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
                        vehicle = "OEC_Units_Zombie";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Units_Zombie";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Units_Zombie";
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
                        vehicle = "OEC_Units_Zombie";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "OEC_Units_Zombie";
                        rank = "SERGEANT";
                        position[] = {1,0,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "OEC_Units_Zombie";
                        rank = "PRIVATE";
                        position[] = {-1,0,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "OEC_Units_Zombie";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "OEC_Units_Zombie";
                        rank = "PRIVATE";
                        position[] = {1,-1,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "OEC_Units_Zombie";
                        rank = "PRIVATE";
                        position[] = {-1,-1,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "OEC_Units_Zombie";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "OEC_Units_Zombie";
                        rank = "PRIVATE";
                        position[] = {1,-2,0};
                    };
                    class Unit8
                    {
                        side = 2;
                        vehicle = "OEC_Units_Zombie";
                        rank = "PRIVATE";
                        position[] = {-1,-2,0};
                    };
                };
            };
        };
    };
};

