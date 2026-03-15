class CfgPatches
{
    class OEC_Extension
    {
        name = "OEC Extension";
        author = "Dirt & Petee";
        requiredAddons[] = 
        {
            "A3_Data_F_Loadorder",
            "rhs_main_loadorder",
            "A3_Data_F_Enoch_Loadorder",
            
            "cup_weapons_grenadelaunchers",
            "CUP_Weapons_XM29",
            "HL_CMB_Weapons",
            "Nemez_Combine_Pack"
        };
        units[] = {};
        weapons[] = {};
    };
};

class CfgMods
{
    class Mod_Base;
    class OEC_Extension_Base: Mod_Base
    {
        dir = "OECExtension";
        name = "OEC Extension";
        picture = "\@1auxtest\addons\OECExtension\OEClogo1.paa";
        logo = "\@1auxtest\addons\OECExtension\OEClogo1.paa";
        logoSmall = "\@1auxtest\addons\OECExtension\OEClogo1.paa";
        logoOver = "\@1auxtest\addons\OECExtension\OEClogo1.paa";
        tooltip = "OEC Extension";
        tooltipOwned = "OEC Extension";
        overview = "OEC Extension, made for Overwatch Expeditionary Corps.";
        dlcColor[] = {0,0,0,1};
		hideName = 1;
		hidePicture = 0;
    };
};

class Extended_PostInit_EventHandlers
{
    class Dirts_Visor_Extension
    {
        init = "call compile preprocessFileLineNumbers '\OECExtension\Scripts\OEC_patchHelmets.sqf'";
    };
};

class CfgFunctions
{
    class OEC
    {
        tag = "OEC";
        class functions
        {
            class getACEaction
            {
                file = "\OECExtension\Scripts\drones\OEC_getACEaction.sqf";
				description = "gives player ace options to deploy turret";
            };
            class spawnDrone
            {
                file = "\OECExtension\Scripts\drones\OEC_spawnDrone.sqf";
				description = "spawns turret";
            };
        };
    };
};

class CfgFactionClasses
{
    class OEC_Faction_Class_CIS
    {
		displayName = "[OEC] CISDF";
		priority = -9;
		side = 0;
		icon = "\rhsafrf\addons\rhs_main\data\icons\msv.paa";
		flag = "\rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};
    class OEC_Faction_Class_Aliens
    {
		displayName = "[OEC] Aliens";
		priority = -9;
		side = 2;
		icon = "\rhsafrf\addons\rhs_main\data\icons\msv.paa";
		flag = "\rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};
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
    class OEC_Vehclass_IFV
    {
        displayName = "APC";
    };
    class OEC_Vehclass_Tank
    {
        displayName = "APC";
    };
    class OEC_Vehclass_Air
    {
        displayName = "Air";
    };
};

class CfgEditorCategories
{
    class OEC_EdCat_CIS
    {
       displayName = "[OEC] CISDF";
    };
    class OEC_EdCat_Aliens
    {
       displayName = "[OEC] Aliens";
    };
    class OEC_EdCat_Supply
    {
       displayName = "[OEC] Supply Objects";
    };
    class OEC_EdCat_Combine
    {
       displayName = "[OEC] Combine";
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


    class OEC_EdSubCat_Antlions
    {
        displayName = "1. Antlions";
    };
    class OEC_EdSubCat_Creatures
    {
        displayName = "2. Xen Creatures";
    };
    class OEC_EdSubCat_Zombies
    {
        displayName = "3. Zombies";
    };


    class OEC_EdSubCat_resup
    {
        displayName = "1. Combine Resupply";
    };
     class OEC_EdSubCat_Pods
    {
        displayName = "2. Airwatch Pods";
    };
    class OEC_EdSubCat_Air
    {
        displayName = "7. Air";
    };

};

class CfgVehicles
{
	class Man;
	class CAManBase: Man 
	{
		class ACE_SelfActions
		{
            class ACE_OEC_drones
            {
                displayName = "Combine Drones";
                condition = "true";
                exceptions[] = {"isNotDragging","isNotSwimming","notOnMap","isNotInside","isNotSitting"};
                statement = "";
                icon = "\OECExtension\Weapons\data\cmbACElogo.paa";
                insertChildren = "call OEC_fnc_getACEaction";
            };
		};
	};
};