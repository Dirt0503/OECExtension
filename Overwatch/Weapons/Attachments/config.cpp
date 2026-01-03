class CfgPatches
{
    class OEC_Extension_Overwatch_Weapons_Acc
    {
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = 
        {
            "OEC_Extension_Overwatch_Weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "OEC_pointer_blue"
        };
    };
};

// blue laser
class CfgWeapons
{
   class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;

    class OEC_pointer_blue: ItemCore
	{
		author = "OEC Extension";
        displayName = "[OEC] Combine Sniper Laser";
		scopeArsenal = 2;
		scope = 2;
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\A3\weapons_f\acc\accv_pointer_F";
		descriptionShort = "Combine blue laser";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 6;
			class Pointer
			{
                isIR = 0;
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				DotSize = 0.2;
                irDotSize = 0.2;
                dotColor[] = {438,748,973};
				beamThickness = 0.12;
				beamMaxLength = 1200;
				beamColor[] = {471,867,891};
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};

};