class CfgPatches
{
    class OEC_Extension_Overwatch_Items
    {
        addonRootClass = "OEC_Extension_Overwatch";
        requiredAddons[] = 
        {
            "ace_medical"
        };
        units[] = {};
        weapons[] = 
        {
            "ACE_plasmaIV",
            "ACE_plasmaIV_500",
            "ACE_plasmaIV_250",
			"ToolKit",
			"MineDetector",
			"OEC_Items_Deployable_Bunker",
			"OEC_Items_Deployable_Barricade"
        };
    };
};

class CfgWeapons
{
	class ItemCore;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class InventoryFirstAidKitItem_Base_F;
	class MedikitItem;
    class ACE_plasmaIV: ACE_ItemCore
	{
        author = "OEC Extension";
        displayName = "[OEC] Transfusion Vial - 1000ml";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Combine fluid vial. Contains chemical solution compatible with transhuman blood.";
        picture = "\OECExtension\Overwatch\Weapons\data\Medkit.paa";
		model = "\A3\Weapons_F\Items\Medikit";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		descriptionUse = "$STR_ace_medical_treatment_Plasma_IV_Desc_Use";
		ACE_isMedicalItem = 1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};

    class ACE_plasmaIV_500: ACE_plasmaIV
	{
		displayName = "[OEC] Transfusion Vial - 500ml";
		picture = "\OECExtension\Overwatch\Weapons\data\MedVial.paa";
		model = "\A3\Weapons_F\Items\Medikit";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 5;
		};
	};

    class ACE_plasmaIV_250: ACE_plasmaIV
	{
		displayName = "[OEC] Transfusion Vial - 250ml";
		picture = "\OECExtension\Overwatch\Weapons\data\MedVial.paa";
		model = "\A3\Weapons_F\Items\Medikit";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2.5;
		};
	};

	class InventoryItem_Base_F
	{
		scope = 0;
		type = 0;
	};
	class ToolKitItem: InventoryItem_Base_F
	{
		type = 620;
		allowedSlots[] = {801,701,901};
	};
	class ToolKit: ItemCore
	{
		author = "OEC Extension";
        displayName = "[OEC] Combine Toolkit";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Combine-made bag with all essential tools. Issued to flight personnel and engineers.";
        picture = "\OECExtension\Overwatch\Weapons\data\toolkit.paa";

		_generalMacro = "ToolKit";
		model = "\A3\Weapons_F\Items\Toolkit";
		class ItemInfo: ToolKitItem
		{
			mass = 20;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
	};

	class DetectorCore;
	class MineDetector: DetectorCore
	{
		author = "OEC Extension";
        displayName = "[OEC] Combine Mine Detector";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Combine-made mine detector. Compact and lightweight.";
        picture = "\OECExtension\Overwatch\Weapons\data\MineDetector.paa";

		_generalMacro = "MineDetector";
		type = 131072;
		weaponPoolAvailable = 1;
		detectRange = 15;
		soundMineDetector[] = {"A3\Sounds_F\sfx\blip1.wss",1,1};
		mineDetectorSoundFrequency = 1;
		mineDetectorPitchStart = 1;
		mineDetectorPitchEnd = 2;
		class ItemInfo
		{
			mass = 5;
		};
		model = "\a3\Weapons_F\Ammo\mag_minedetector.p3d";
	};

	class OEC_Items_Deployable_Bunker: ACE_ItemCore
    {
        scope = 2;
        displayName = "[OEC] Deployable Bunker";
        descriptionShort = "Bulky alien tools and materials."
        //descriptionUse = "Assembles into a Combine bunker."
        author = "OEC Extension";
        picture = "\OECExtension\Overwatch\Items\FortifyTool\data\bigBarricadePacked.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
    };

    class OEC_Items_Deployable_Barricade: ACE_ItemCore
    {
        scope = 2;
        displayName = "[OEC] Deployable Barricade";
        descriptionShort = "Alien tools and materials."
        //descriptionUse = "Assembles into a Combine barricade."
        author = "OEC Extension";
        picture = "\OECExtension\Overwatch\Items\FortifyTool\data\smallBarricadePackedAlt.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
    };
};