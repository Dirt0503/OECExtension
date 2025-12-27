class CfgPatches
{
    class OEC_Extension_Overwatch_Accessories
    {  
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
        units[] = {};
        weapons[] = 
        {
            "OEC_Accessories_SniperLaser"
        };
    };
};

class CfgWeapons
{
    class ItemCore;
    class InventoryFlashLightItem_Base_F;
    
    class OEC_Accessories_SniperLaser: ItemCore
    {
        author = "OEC Extension";
        scope = 2;
        displayName = "[OEC] Sniper Laser";
        //picture = "\ls\core\addons\weapons_westar\data\ui\westar35sa_pointer_ui_ca.paa";
        //model = "\ls\core\addons\weapons_westar\westar35sa\ls_pointer_westar35sa_laser.p3d";
        class ItemInfo: InventoryFlashLightItem_Base_F
        {
            mass = 6;
            class Pointer
            {
                irLaserPos = "flash dir";
                irLaserEnd = "flash";
                irDistance = 5;
            };
            class FlashLight{};
        };
    };
};