class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Uniforms_CIS_6sh112
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Uniforms_CIS";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Uniforms_CIS",
			"rhs_c_troops"
        };
        units[] = 
        {
            "OEC_CIS_Uniform_6sh112_Vehicle",
            "OEC_CIS_Uniform_6sh112_Base_Vehicle"
        };
        weapons[] = 
        {
            "OEC_CIS_Uniform_6sh112"
        };
    };
};

class CfgWeapons
{
    class UniformItem;
    class Uniform_Base;
	class OEC_CIS_Uniform_Flora
	{
		class ItemInfo;
	};

    class OEC_CIS_Uniform_6sh112: OEC_CIS_Uniform_Flora
	{
		scope = 2;
        displayName = "[OEC] 6sh112";
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_6sh122_v2_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass = "OEC_CIS_Uniform_6sh112_Base_Vehicle";
		};
	};
};

class cfgVehicles
{
    class Item_Base_F;
    class OEC_CIS_Uniform_6sh112_Vehicle: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[OEC] 6sh112";
		author = "OEC Extension";
		vehicleClass = "ItemsHeadgear";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class OEC_CIS_Uniform_6sh112
			{
				name = "OEC_CIS_Uniform_6sh112";
				count = 1;
			};
		};
	};

    class OEC_CIS_Uniform_TTSKO_Base_Vehicle;
	class OEC_CIS_Uniform_6sh112_Base_Vehicle: OEC_CIS_Uniform_TTSKO_Base_Vehicle
	{
		scope = 1;
		uniformClass = "OEC_CIS_Uniform_6sh112";
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\122_vest_fall_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\122_pant_fall_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"};
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
			mat[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest.rvmat","rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest_w1.rvmat","rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_vest_w2.rvmat","rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant.rvmat","rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant_w1.rvmat","rhsafrf\addons\rhs_infantry3\ratnik\data\emr_122_pant_w2.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
	};

};