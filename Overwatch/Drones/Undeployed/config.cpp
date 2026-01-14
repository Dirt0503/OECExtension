class CfgPatches
{
    class OEC_Extension_Overwatch_Drones_Undeployed
    {
        addonRootClass = "OEC_Extension_Overwatch";
        requiredAddons[] = {};
        units[] = {};
        weapons[] = 
        {
            "OEC_Floor_Turret_Folded"
        };
    };
};

class CfgSkeletons 
{
	class Default
	{
		isDiscrete = 1;
		skeletonInherit = "";
		skeletonBones[] = {};
	};
	class OEC_turretFolded: Default
	{
		skeletonInherit = "Default";
		skeletonBones[] =
		{
			"base"
		};
	};
};

class CfgModels
{
	class Default
	{
		sectionsInherit = "";
		sections[] = {};
		sekeletonName = "";
	};
	class OEC_turretFolded: Default
	{
		sections[] = {};
		skeletonName = "OEC_turretFolded";
	};
};

class CfgWeapons
{
    class OEC_Weapons_SIPL_base;
    class OEC_Floor_Turret_Folded: OEC_Weapons_SIPL_base
	{
		oec_droneType = "turretCombine";
		displayName = "[OEC] Combine Restrictor (Folded)";
		descriptionShort = "An undeployed Combine 'Restrictor'";
		author = "OEC Extension";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "OEC_Floor_Turret_Folded";
		picture = "\OECExtension\Overwatch\Weapons\data\turretFolded.paa";
		//hiddenSelectionsTextures[] = {"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_olive_01_F_co","\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
        magazines[] = {};
        magazineWells[] = {};
        reloadAction = "";
        model = "OECExtension\Overwatch\Drones\data\folded\OEC_turretFolded.p3d";

        class ACE_CSW
		{
			type = "mount";
			deployTime = 1;
			pickupTime = 1;
			deploy = "OEC_Floor_Turret";
		};
	};
};