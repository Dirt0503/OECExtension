class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Helmets_Misc
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Helmets";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Helmets"
        };
        units[] = 
        {
            "OEC_Misc_Helmet_Headcrab"
        };
        weapons[] = {};
    };
};

class CfgWeapons
{
    class H_HelmetB;
	class HeadgearItem;
	class OEC_Misc_Helmet_Headcrab: H_HelmetB
	{
        author = "OEC Extension";
        displayName = "[OEC] Headcrab";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_6b26_ca.paa";
		Scope = 1;
		allowedFacewear[] = {};

		model = "WBK_CombineAlienShit\HLA_Headgear_Headcrab_Spine3.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\headcrab_tex.paa"};
		hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\headcrab.rvmat"};
		class ItemInfo: HeadgearItem
		{
			modelSides[] = {2};
			_generalMacro = "HeadgearItem";
			hitpointName = "HitHead";
			containerclass = "Supply200";
			mass = 30;
			uniformmodel = "WBK_CombineAlienShit\HLA_Headgear_Headcrab_Spine3.p3d";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\headcrab_tex.paa"};
			hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\headcrab.rvmat"};
		};
	};
};