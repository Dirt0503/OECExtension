class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Uniforms_CIS_Izlom
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Uniforms_CIS";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Uniforms_CIS"
        };
        units[] = 
        {
            "OEC_CIS_Uniform_Izlom_Vehicle",
            "OEC_CIS_Uniform_Izlom_Base_Vehicle"
        };
        weapons[] = 
        {
            "OEC_CIS_Uniform_Izlom"
        };
    };
};

class CfgWeapons
{
	class OEC_CIS_Uniform_Flora
    {
        class ItemInfo;
    };

    class OEC_CIS_Uniform_Izlom: OEC_CIS_Uniform_Flora
	{
		scope = 2;
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_afghanka_para_ttsko_ca.paa";
		displayName = "[OEC] Izlom";
		class ItemInfo: ItemInfo
		{
			uniformClass = "OEC_CIS_Uniform_Izlom_Base_Vehicle";
		};
	};
};

class cfgVehicles
{
    class Item_Base_F;
    class OEC_CIS_Uniform_Izlom_Vehicle: Item_Base_F
	{
        scope = 2;
		scopeCurator = 2;
		displayName = "[OEC] Izlom";
		author = "OEC Extension";
        vehicleClass = "ItemsHeadgear";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class OEC_CIS_Uniform_Izlom
			{
				name = "OEC_CIS_Uniform_Izlom";
				count = 1;
			};
		};
	};

    class OEC_CIS_Uniform_TTSKO_Base_Vehicle;
	class OEC_CIS_Uniform_Izlom_Base_Vehicle: OEC_CIS_Uniform_TTSKO_Base_Vehicle
	{
		uniformClass = "rhs_uniform_mvd_izlom";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_emr_base.p3d";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\T_izlom_co.paa","rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa","rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"};
		modelSides[] = {0,2,3};
		class Wounds
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_infantry2\data\rhs_emr.rvmat","rhsafrf\addons\rhs_infantry2\data\rhs_emr_w1.rvmat","rhsafrf\addons\rhs_infantry2\data\rhs_emr_w2.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
	};

};