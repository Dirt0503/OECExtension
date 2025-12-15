class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Vests_CIS_Misc
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Vests_CIS";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Vests_CIS"
        };
        units[] = {};
        weapons[] = 
        {
            "OEC_CIS_Vest_Chicom",
            "OEC_CIS_Vest_Chicom_Khaki",
            "OEC_CIS_Vest_Beltbag1"
        };
    };
};

class CfgWeapons
{
    class ItemCore;
    class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
    class OEC_CIS_Vest_Chicom: Vest_Camo_Base
	{
		author = "Dirt's OEC Extension";
        displayName = "[OEC] Chicom";
		scope = 2;
        scopeArsenal = 2;
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_ca.paa";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_chicom";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\chicom_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_chicom";
			containerClass = "Supply90";
			mass = 10;
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 3;
					passThrough = 0.6;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 0.8;
				};
			};
		};

        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_Chicom";
            variant = "olive";
        };
	};

    class OEC_CIS_Vest_Chicom_Khaki: OEC_CIS_Vest_Chicom
	{
		author = "Dirt's OEC Extension";
        displayName = "[OEC] Chicom - Khaki";
		scope = 2;
        scopeArsenal = 2;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_chicom_ca.paa";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\chicom_tan_co.paa"};

        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_Chicom";
            variant = "khk";
        };
	};

    class OEC_CIS_Vest_Beltbag1: OEC_CIS_Vest_Chicom
	{
		author = "Dirt's OEC Extension";
        displayName = "[OEC] Beltbag";
		scope = 2;
        scopeArsenal = 2;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_belt_AK4_ca.paa";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4_back";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4";
			containerClass = "Supply40";
			mass = 10;
		};

        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_Pouches";
            variant = "belt1";
        };
	};
};

class XtdGearModels
{
    class CfgWeapons
    {
		class OEC_ACEX_Vest_Chicom
        {
            label = "";
            author = "Dirt's OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Chicom Variants";
                values[] = 
                {
                    "olive",
                    "khk"
                };
                class olive { label = "Olive"; };
                class khk { label = "Khaki"; };
            };
        };

        class OEC_ACEX_Vest_Pouches
        {
            label = "";
            author = "Dirt's OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Pouch Variants";
                values[] = 
                {
                    "belt1"
                };
                class belt1 { label = "Single"; };
            };
        };
	};
};