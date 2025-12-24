class CfgPatches
{
    class OEC_Extension_Overwatch_Gear_Backpacks
    {
        addonRootClass = "OEC_Extension_Overwatch_Gear";
        requiredAddons[] =
        {
        };
        units[] = 
        {
            "OEC_Overwatch_Backpack_Base",
            "OEC_Overwatch_Backpack_Invisible",
            "OEC_Overwatch_Backpack_OxygenTank_Dark",
            "OEC_Overwatch_Backpack_OxygenTank_White",
            "OEC_Overwatch_Backpack_OxygenTank_Airwatch",
            "OEC_Overwatch_Backpack_Dark",
            "OEC_Overwatch_Backpack_White"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class Bag_Base;

    class OEC_Overwatch_Backpack_Base: Bag_Base
    {
        author = "OEC Extension";
        maximumLoad = 140;
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
        class XtdGearInfo
        {
            model = "OEC_ACEX_Backpack_CMB_Oxygen";
            variant = "dark";
        };
    };
    class OEC_Overwatch_Backpack_OxygenTank_White: OEC_Overwatch_Backpack_OxygenTank_Dark
    {
        hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_white.paa","\WBK_Combines\grunt\data\grenade.paa"};
        displayName = "[OEC] Oxygen Tank - Light";
        class XtdGearInfo
        {
            model = "OEC_ACEX_Backpack_CMB_Oxygen";
            variant = "light";
        };
    };
    class OEC_Overwatch_Backpack_OxygenTank_Airwatch: OEC_Overwatch_Backpack_OxygenTank_Dark
    {
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_dark.paa"};
        model = "\WBK_Combines\grunt\backpack_civ.p3d";
        displayName = "[OEC] Oxygen Tank - Airwatch";
        tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
        class XtdGearInfo{};
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
        class XtdGearInfo
        {
            model = "OEC_ACEX_Backpack_CMB_Empty";
            variant = "dark";
        };
    };
    class OEC_Overwatch_Backpack_White: OEC_Overwatch_Backpack_Dark
    {
        hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_white.paa","\WBK_Combines\grunt\data\grenade.paa"};
        displayName = "[OEC] Combine Backpack - Light";
        class XtdGearInfo
        {
            model = "OEC_ACEX_Backpack_CMB_Empty";
            variant = "light";
        };
    };
};

class XtdGearModels
{
    class CfgVehicles
    {
		class OEC_ACEX_Backpack_CMB_Oxygen
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Backpack Variants";
                values[] = 
                {
                    "light",
                    "dark"
                };
                class light { label = "Light"; };
                class dark { label = "Dark"; };
            };
        };

        class OEC_ACEX_Backpack_CMB_Empty
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Backpack Variants";
                values[] = 
                {
                    "light",
                    "dark"
                };
                class light { label = "Light"; };
                class dark { label = "Dark"; };
            };
        };
	};
};