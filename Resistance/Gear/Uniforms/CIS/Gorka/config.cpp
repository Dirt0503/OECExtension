class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Uniforms_CIS_Gorka
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Uniforms_CIS";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Uniforms_CIS"
        };
        units[] = 
        {
            "OEC_CIS_Uniform_Gorka_Base_Vehicle",
            "OEC_CIS_Uniform_Gorka_Black_Vehicle"
        };
        weapons[] = 
        {
            "OEC_CIS_Uniform_Gorka_Black"
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

    class OEC_CIS_Uniform_Gorka_Black: OEC_CIS_Uniform_Flora
	{
		scope = 2;
        displayName = "[OEC] Gorka Black";
		author = "OEC Extension";
		picture = "\a3\Characters_F_Enoch\Uniforms\data\ui\icon_U_O_R_Gorka_01_black_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "OEC_CIS_Uniform_Gorka_Base_Vehicle";
			containerClass = "Supply0";
			mass = 40;
		};
	};
};

class cfgVehicles
{
    class OEC_CIS_Uniform_TTSKO_Base_Vehicle;
	class OEC_CIS_Uniform_Gorka_Base_Vehicle: OEC_CIS_Uniform_TTSKO_Base_Vehicle
	{
		scope = 1;
		uniformClass = "OEC_Uniform_Gorka_Black";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelections[] = {"camo_1","camo_2","insignia"};
        modelSides[] = {0,3,2};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"};
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
			mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\Gorka_01.rvmat","a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
	};

    class Item_Base_F;
    class OEC_CIS_Uniform_Gorka_Black_Vehicle: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[OEC] Gorka Black";
		author = "OEC Extension";
		vehicleClass = "ItemsHeadgear";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class OEC_CIS_Uniform_Gorka_Black
			{
				name = "OEC_CIS_Uniform_Gorka_Black";
				count = 1;
			};
		};
    };
};