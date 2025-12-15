class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Uniforms_CIS_CBRN
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Uniforms_CIS";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Uniforms_CIS"
        };
        units[] = 
        {
            "OEC_CIS_Uniform_CBRN_Base_Vehicle",
            "OEC_CIS_Uniform_CBRN_White_Vehicle"
        };
        weapons[] = 
        {
            "OEC_CIS_Uniform_CBRN_White"
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

    class OEC_CIS_Uniform_CBRN_White: OEC_CIS_Uniform_Flora
	{
		scope = 2;
        displayName = "[OEC] CBRN Overalls - White";
		author = "OEC Extension";
		picture = "\a3\Characters_F_Enoch\Uniforms\data\ui\icon_U_C_CBRN_Suit_01_White_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_White_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_CBRN_Man_Oversuit_01_White_F";
			containerClass = "Supply30";
			mass = 45;
		};
	};
};

class cfgVehicles
{
    class OEC_CIS_Uniform_TTSKO_Base_Vehicle;
	class OEC_CIS_Uniform_CBRN_Base_Vehicle: OEC_CIS_Uniform_TTSKO_Base_Vehicle
	{
		scope = 1;
		uniformClass = "OEC_CIS_Uniform_CBRN_White";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		attenuationEffectType = "CarAttenuation";
		modelSides[] = {0,1,2,3,4,5,6,7};
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_White_CO.paa"};
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
			mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_F.rvmat","a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_injury_F.rvmat","a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_injury_F.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
	};

    class Item_Base_F;
    class OEC_CIS_Uniform_CBRN_White_Vehicle: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[OEC] CBRN Overalls - White";
		author = "OEC Extension";
		vehicleClass = "ItemsHeadgear";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class OEC_CIS_Uniform_CBRN_White
			{
				name = "OEC_CIS_Uniform_CBRN_White";
				count = 1;
			};
		};
    };
};