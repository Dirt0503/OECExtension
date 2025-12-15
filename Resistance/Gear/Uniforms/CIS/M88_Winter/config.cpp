class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Uniforms_CIS_M88_Winter
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Uniforms_CIS";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Uniforms_CIS"
        };
        units[] = 
        {
            "OEC_CIS_Uniform_M88_Base_Vehicle",
            "OEC_CIS_Uniform_M88_Winter_Vehicle"
        };
        weapons[] = 
        {
            "OEC_CIS_Uniform_M88_Winter"
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

    class OEC_CIS_Uniform_M88_Winter: OEC_CIS_Uniform_Flora
	{
		scope = 2;
        displayName = "[OEC] M88 (Officer)";
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_afghanka_winter_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_winter.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_co.paa","rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "OEC_CIS_Uniform_M88_Base_Vehicle";
			containerClass = "Supply0";
			mass = 40;
		};
	};
};

class cfgVehicles
{
    class OEC_Units_CIS_Infantry_Base;
	class OEC_CIS_Uniform_M88_Base_Vehicle: OEC_Units_CIS_Infantry_Base
	{
		scope = 1;
		uniformClass = "OEC_CIS_Uniform_M88_Winter";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_winter.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_co.paa","rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_co.paa"};
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
			mat[] = {"rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_w1.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_w2.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka01_pant.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_w1.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_w2.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots_w1.rvmat","rhsafrf\addons\rhs_infantry3\data\afghanka_pant_boots_w2.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
	};

    class Item_Base_F;
    class OEC_CIS_Uniform_M88_Winter_Vehicle: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[OEC] M88 (Officer)";
		author = "OEC Extension";
		vehicleClass = "ItemsHeadgear";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class OEC_CIS_Uniform_M88_Winter
			{
				name = "OEC_CIS_Uniform_M88_Winter";
				count = 1;
			};
		};
    };
};