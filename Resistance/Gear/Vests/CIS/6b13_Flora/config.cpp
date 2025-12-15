class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Vests_CIS_6b13_Flora
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Vests_CIS";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Vests_CIS"
        };
        units[] = {};
        weapons[] = 
        {
            "OEC_CIS_Vest_6b13",
            "OEC_CIS_Vest_6b13_9sh93",
            "OEC_CIS_Vest_6b13_9sh93_VOG",
            "OEC_CIS_Vest_6b13_9sh93_Radio",
            "OEC_CIS_Vest_6b13_9sh93_Headset"
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
	class OEC_CIS_Vest_6b13: Vest_Camo_Base
	{
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_ca.paa";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[OEC] 6b13";
		descriptionShort = "CIS Standard Issue Vest";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_vsr_co.paa","rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13";
			containerClass = "Supply80";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 10;
					PassThrough = 0.4;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.4;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.4;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
                class Pelvis
                {
                    hitpointName = "HitPelvis";
					armor = 6;
					PassThrough = 0.4;
                };
                
			};
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CIS_6B13";
            variant = "plain";
        };
	};

    class OEC_CIS_Vest_6b13_9sh93: OEC_CIS_Vest_6b13
	{
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_ca.paa";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[OEC] 6b13/6sh92 Pouches";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92";
			containerClass = "Supply80";
			mass = 80;	
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CIS_6B13";
            variant = "pouches";
        };
	};

    class OEC_CIS_Vest_6b13_9sh93_VOG: OEC_CIS_Vest_6b13
	{
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_vog_ca.paa";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[OEC] 6b13/6sh92 Pouches, VOGs";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_vog";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_vog";
			containerClass = "Supply500";
			mass = 80;
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CIS_6B13";
            variant = "VOG";
        };
	};

    class OEC_CIS_Vest_6b13_9sh93_Radio: OEC_CIS_Vest_6b13
	{
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_radio_ca.paa";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[OEC] 6b13/6sh92 Pouches, Radio";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";
			containerClass = "Supply80";
			mass = 80;
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CIS_6B13";
            variant = "radio";
        };
	};

    class OEC_CIS_Vest_6b13_9sh93_Headset: OEC_CIS_Vest_6b13
	{
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_headset_mapcase_ca.paa";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[OEC] 6b13/6sh92 Pouches, Headset, Tablet";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_headset_mapcase";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_headset_mapcase";
			containerClass = "Supply80";
			mass = 80;
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CIS_6B13";
            variant = "headset";
        };
	};
		
};

class XtdGearModels
{
    class CfgWeapons
    {
		class OEC_ACEX_Vest_CIS_6B13
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "6b13 Variants";
                values[] = 
                {
                    "plain",
                    "pouches",
                    "VOG",
					"radio",
					"headset"
                };
                class plain { label = "Plain"; };
                class Pouches { label = "Pouches"; };
                class VOG { label = "VOGs"; };
				class radio { label = "Radio"; };
				class headset { label = "Headset"; };
            };
        };
	};
};
