class CfgPatches
{
    class OEC_Extension_Overwatch_Gear_Backpacks
    {
        addonRootClass = "OEC_Extension_Overwatch_Gear";
        requiredAddons[] =
        {
        };
        units[] = {};
        weapons[] = 
        {
        };
    };
};

class CfgVehicles
{
    class Bag_Base;

    class OEC_Overwatch_Backpack_Base: Bag_Base
    {
        author = "OEC Extension";
        maximumLoad = 320;
        mass = 20;
    };

    class OEC_Overwatch_Backpack_Invisible: OEC_Overwatch_Backpack_Base
    {
        scope = 2;
        model = "OECExtension\Overwatch\Gear\Backpacks\data\Empty.p3d";
        displayName = "[OEC] Invisible Backpack";
    };

    class OEC_Overwatch_Backpack_OxygenTank_Dark: OEC_Overwatch_Backpack_Base
    {
        scope = 2;
        picture = "\WBK_Combines\grunt\data\icon_backpack.paa";
        model = "\WBK_Combines\grunt\backpack.p3d";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_dark.paa","\WBK_Combines\grunt\data\grenade.paa"};
		hiddenSelectionsMaterials[] = {};
        displayName = "[OEC] Oxygen Tank - Dark";
    };
    class OEC_Overwatch_Backpack_OxygenTank_White: OEC_Overwatch_Backpack_OxygenTank_Dark
    {
        hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_white.paa","\WBK_Combines\grunt\data\grenade.paa"};
        displayName = "[OEC] Oxygen Tank - White";
    };
    
    class OEC_Overwatch_Backpack_Dark: OEC_Overwatch_Backpack_Base
    {
        scope = 2;
        picture = "\WBK_Combines\grunt\data\icon_backpack.paa";
		model = "\WBK_Combines\grunt\backpack_nobaloons.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_dark.paa","\WBK_Combines\grunt\data\grenade.paa"};
		hiddenSelectionsMaterials[] = {};
        displayName = "[OEC] Combine Backpack - Dark";
    };
    class OEC_Overwatch_Backpack_White: OEC_Overwatch_Backpack_Dark
    {
        hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_white.paa","\WBK_Combines\grunt\data\grenade.paa"};
        displayName = "[OEC] Combine Backpack - White";
    };
};