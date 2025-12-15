class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Helmets_CIS
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Helmets";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Helmets"
        };
        units[] = 
        {
            "OEC_CIS_Helmet_6B26_Flora",
            "OEC_CIS_Helmet_6b26_ESS",
            "OEC_CIS_Helmet_6b26_Green",
            "OEC_CIS_Helmet_6b26_ESS_Green",
            "OEC_CIS_Helmet_Alytn",
            "OEC_CIS_Helmet_Alytn_VisorDown",
            "OEC_CIS_Beanie_Green",
            "OEC_CIS_Helmet_White",
            "OEC_CIS_Helmet_Black",
            "OEC_CIS_HeadSet_Black",
            "OEC_CIS_Ushanka",
            "OEC_CIS_Helmet_Tsh4",
            "OEC_CIS_Helmet_Tsh4_Balaclava",
            "OEC_CIS_Helmet_Tsh4_ESS"
        };
        weapons[] = {};
    };
};

class CfgWeapons
{
    class ItemCore;
    class H_HelmetB: ItemCore
    {
	    class ItemInfo;
    };
    class HeadGearItem;

    class OEC_CIS_Helmet_6b26_Flora: H_HelmetB
	{
		author = "OEC Extension";
        displayName = "[OEC] 6b24 Flora";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_6b26_ca.paa";
		descriptionShort = "CIS Standard Issue Helmet";
		Scope = 2;
        scopeArsenal = 2;
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b26_co.paa"};
		allowedFacewear[] = {"OEC_CIS_Facewear_Scarf","OEC_CIS_Facewear_Balaclava_Olive","OEC_CIS_Facewear_Empty"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1"};
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 5;
					passThrough = 0.5;
				};
			};
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_6b26";
            variant = "flora";
        };
	};

    class OEC_CIS_Helmet_6b26_ESS: OEC_CIS_Helmet_6b26_Flora
	{
		author = "OEC Extension";
        displayName = "[OEC] 6b24 Flora (Combat Goggles)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_6b26_ess_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess";
		class ItemInfo: ItemInfo
		{
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess";
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_6b26";
            variant = "floraess";
        };
	};

    class OEC_CIS_Helmet_6b26_Green: OEC_CIS_Helmet_6b26_Flora
	{
		author = "OEC Extension";
        displayName = "[OEC] 6b24";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_6b26_green_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green";
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_6b26";
            variant = "green";
        };
	};

    class OEC_CIS_Helmet_6b26_ESS_Green: OEC_CIS_Helmet_6b26_Flora
	{
		author = "OEC Extension";
        displayName = "[OEC] 6b24 (Combat Goggles)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_6b26_ess_green_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_ess";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_ess";
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_6b26";
            variant = "greeness";
        };
	};

	class OEC_CIS_Helmet_Altyn: OEC_CIS_Helmet_6b26_Flora
	{
		author = "OEC Extension";
        displayName = "[OEC] Altyn Superheavy Helmet (Visor Up)";
		descriptionShort = "CIS Specialized Protection Helmet";
		Scope = 2;
        scopeArsenal = 2;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_altyn_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_altyn_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1"};
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 13;
					passThrough = 0.5;
				};
			};
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Altyn";
            variant = "up";
        };
	};

	class OEC_CIS_Helmet_Altyn_VisorDown: OEC_CIS_Helmet_Altyn
	{
        displayName = "[OEC] Altyn Superheavy Helmet (Visor Down)";
		descriptionShort = "CIS Specialized Protection Helmet";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_altyn_visordown_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 13;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 13;
					passThrough = 0.5;
				};
			};
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Altyn";
            variant = "down";
        };
	};

	class rhs_beanie_green;
	class OEC_CIS_Beanie_Green: rhs_beanie_green
	{
		displayName = "[OEC] Green Beanie";
		descriptionShort = "Warm.";
	};

	class H_PASGT_basic_base_F;
	class OEC_CIS_Helmet_White: H_PASGT_basic_base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] White Helmet";
		Scope = 2;
        scopeArsenal = 2;
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_PASGT_basic_white_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_white_CO.paa"};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Basic";
            variant = "white";
        };
	};

	class OEC_CIS_Helmet_Black: H_PASGT_basic_base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] Black Helmet";
		Scope = 2;
        scopeArsenal = 2;
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_PASGT_basic_black_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_black_CO.paa"};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Basic";
            variant = "black";
        };
	};

	class H_HeadSet_black_F;
	class OEC_CIS_HeadSet_Black: H_HeadSet_black_F
	{
		author = "OEC Extension";
        displayName = "[OEC] Headset";
		Scope = 2;
        scopeArsenal = 2;
	};

	class OEC_CIS_Ushanka: OEC_CIS_Beanie_Green
	{
		author = "OEC Extension";
        displayName = "[OEC] Ushanka";
		Scope = 2;
        scopeArsenal = 2;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_ushanka_ca.paa";
		descriptionShort = "No Armor";
		model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_ushanka";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\ushanka_co.paa"};
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[] = {"Camo"};
			uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_ushanka";
		};
	};

	class OEC_CIS_Helmet_Tsh4: H_HelmetB
	{
		author = "OEC Extension";
        displayName = "[OEC] Tsh-4";
		Scope = 2;
        scopeArsenal = 2;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_tsh4_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 5;
			hiddenSelections[] = {"camo1"};
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Tsh4";
            variant = "standard";
        };
	};

	class OEC_CIS_Helmet_Tsh4_Balaclava: OEC_CIS_Helmet_Tsh4
	{
		displayName = "[OEC] Tsh-4 + Balaclava";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_tsh4_bala_ca.paa";
		allowedFacewear[] = {};
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_bala";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_bala";
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Tsh4";
            variant = "bala";
        };
	};

	class OEC_CIS_Helmet_Tsh4_ESS: OEC_CIS_Helmet_Tsh4
	{
		displayName = "[OEC] Tsh-4 + Balaclava + ESS";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_tsh4_ess_bala_ca.paa";
		allowedFacewear[] = {};
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess_bala";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess_bala";
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Tsh4";
            variant = "ess";
        };
	};

};

class XtdGearModels
{
    class CfgWeapons
    {
		class OEC_ACEX_Helmet_CIS_Basic
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Helmet Variants";
                values[] = 
                {
                    "white",
                    "black"
                };
                class white { label = "White"; };
                class black { label = "Black"; };
            };
        };

		class OEC_ACEX_Helmet_CIS_Altyn
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Helmet Variants";
                values[] = 
                {
                    "up",
                    "down"
                };
                class up { label = "Visor Up"; };
                class down { label = "Visor Down"; };
            };
        };

		class OEC_ACEX_Helmet_CIS_6b26
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Helmet Variants";
                values[] = 
                {
                    "green",
                    "greeness",
					"flora",
                    "floraess"
                };
                class green { label = "Green"; };
                class greeness { label = "Green + ESS"; };
				class flora { label = "Flora"; };
                class floraess { label = "Flora + ESS"; };
            };
        };

		class OEC_ACEX_Helmet_CIS_Tsh4
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Helmet Variants";
                values[] = 
                {
                    "standard",
                    "bala",
					"ess"
                };
                class standard { label = "Standard"; };
                class bala { label = "Balaclava"; };
				class ess { label = "ESS"; };
            };
        };
	};
};
