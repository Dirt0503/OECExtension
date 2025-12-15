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


class CfgFactionClasses
{
    class OEC_Faction_CIS
    {
		displayName = "[OEC] CISDF";
		priority = -9;
		side = 0;
		icon = "\rhsafrf\addons\rhs_main\data\icons\msv.paa";
		flag = "\rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};
};

class CfgVehicleClasses
{
    class OEC_Vehclass_Infantry
    {
        displayName = "Infantry";
    };
    class OEC_Vehclass_Trucks
    {
        displayName = "Truck";
    };
    class OEC_Vehclass_AA
    {
        displayName = "Anti-Air";
    };
    class OEC_Vehclass_APC
    {
        displayName = "APC";
    };
};

class CfgEditorCategories
{
    class OEC_EdCat_CIS
    {
       displayName = "[OEC] CISDF";
    };
};

class CfgEditorSubCategories
{

    class OEC_EdSubCat_Infantry
    {
        displayName = "1. Infantry";
    };

    class OEC_EdSubCat_Specials
    {
        displayName = "2. Infantry Specials";
    };

    class OEC_EdSubCat_HVTs
    {
        displayName = "3. High Value Persons";
    };

    class OEC_EdSubCat_Turrets
    {
        displayName = "4. Turrets";
    };
    
    class OEC_EdSubCat_Cars
    {
        displayName = "5. Cars + Trucks";
    };

    class OEC_EdSubCat_AFV
    {
        displayName = "6. Armored Fighting Vehicles";
    };

    class OEC_EdSubCat_AA
    {
        displayName = "0. Anti-Air";
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
        };
    };
};

