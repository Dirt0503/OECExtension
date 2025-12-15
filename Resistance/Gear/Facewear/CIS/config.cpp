class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Facewear_CIS
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Facewear";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Facewear"
        };
        units[] = {};
        weapons[] = {};
    };
};

class UniformItem;
class CfgGlasses
{
    class G_Balaclava_blk;
	class None
	{
		identityTypes[] += {"OEC_scarf",130};
	};
	
	class OEC_CIS_Facewear_Scarf : G_Balaclava_blk
	{
        scope = 2;
        scopeArsenal = 2;
		author = "OEC Extension";
        displayName = "[OEC] Scarf";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_scarf";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_scarf_ca.paa";
		identityTypes[] = {"NoGlasses",0,"OEC_scarf",30};
	};

	class OEC_CIS_Facewear_Balaclava_Olive: G_Balaclava_blk
	{
		author = "OEC Extension";
        displayName = "[OEC] Balaclava Olive";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_bala1";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_balaclava_ca.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"};
        scope = 2;
        scopeArsenal = 2;
        identityTypes[] = {"NoGlasses",0,"OEC_scarf",30};
        class XtdGearInfo
        {
            model = "OEC_ACEX_Goggles_CIS_Bala";
            variant = "bala1";
        };
	};

    class OEC_CIS_Facewear_Balaclava_Olive2: G_Balaclava_blk
	{
		author = "OEC Extension";
        displayName = "[OEC] Balaclava Olive";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_bala2";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_balaclava_ca.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"};
        scope = 2;
        scopeArsenal = 2;
        identityTypes[] = {"NoGlasses",0,"OEC_scarf",30};
        class XtdGearInfo
        {
            model = "OEC_ACEX_Goggles_CIS_Bala";
            variant = "bala2";
        };
	};

    class OEC_CIS_Facewear_Empty: None
	{
		author = "OEC Extension";
        displayName = "[OEC] Empty";
        scope = 2;
        scopeArsenal = 2;
        identityTypes[] = {"NoGlasses",0,"OEC_scarf",30};
	};

    class G_AirPurifyingRespirator_02_olive_F;
    class OEC_CIS_Facewear_APR: G_AirPurifyingRespirator_02_olive_F
    {
        author = "OEC Extension";
        displayName = "[OEC] Air Purifying Respirator (Olive)";
        scope = 2;
        scopeArsenal = 2;

        class XtdGearInfo
        {
            model = "OEC_ACEX_Goggles_CIS_APR";
            variant = "olive";
        };
    }; 

    class G_AirPurifyingRespirator_02_black_F;
    class OEC_CIS_Facewear_APR_Black: G_AirPurifyingRespirator_02_black_F
    {
        author = "OEC Extension";
        displayName = "[OEC] Air Purifying Respirator (Black)";
        scope = 2;
        scopeArsenal = 2;

        class XtdGearInfo
        {
            model = "OEC_ACEX_Goggles_CIS_APR";
            variant = "black";
        };
    }; 

    class OEC_CIS_Facewear_Squares_Tinted: None
	{
		author = "OEC Extension";
        displayName = "[OEC] Square Glasses";
        scope = 2;
        scopeArsenal = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_squares_tinted";
		picture = "\A3\Characters_F\data\ui\icon_g_squares_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\civil\data\nikos_wear_co.paa"};
		identityTypes[] = {"Squares", 100};
		mass = 2;
	};
};


class XtdGearModels
{
    class CfgGlasses
    {
		class OEC_ACEX_Goggles_CIS_APR
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Respirator Variants";
                values[] = 
                {
                    "olive",
                    "black"
                };
                class olive { label = "Olive"; };
                class black { label = "Black"; };
            };
        };


		class OEC_ACEX_Goggles_CIS_Bala
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Balaclava Variants";
                values[] = 
                {
                    "bala1",
                    "bala2"
                };
                class bala1 { label = "Var. 1"; };
                class bala2 { label = "Var. 2"; };
            };
        };
	};
};