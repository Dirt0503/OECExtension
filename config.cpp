class CfgPatches
{
    class OEC_Extension
    {
        name = "OEC Extension";
        author = "Dirt & Petee";
        requiredAddons[] = 
        {
            "A3_data_F",
            "A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F",
            "A3_Soft_F",
            "A3_CargoPoses_F",
            "WBK_Combinus",
            "rhs_c_weapons",
            "rhs_c_heavyweapons",
            "rhsusf_c_weapons",
            "A3_Data_F_Oldman_Loadorder",
            "A3_Armor_F",
            "cup_weapons_grenadelaunchers",
            "A3_Characters_F_Enoch_Vests",
            "a3_sounds_f_exp",
            "CUP_Weapons_XM29",
            "HL_CMB_Weapons"
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