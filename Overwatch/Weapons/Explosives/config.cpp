class CfgPatches
{
    class OEC_Extension_Overwatch_Weapons_Grenades
    {
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
        units[] = 
		{
			"OEC_HopperMine"
		};
        weapons[] = {};
    };
};

class CfgSounds
{
    sounds[] = {};
    class OEC_HopperMine_Planted
    {
        name = "OEC_HopperMine_Planted";
        sound[] = {"OECExtension\Overwatch\Weapons\data\hoppermine\combineMine_planted.wss",3.1622777,1};
        titles[] = {};
    };
	class OEC_HopperMine_Alert
	{
		name = "OEC_HopperMine_Alert";
        sound[] = {"OECExtension\Overwatch\Weapons\data\hoppermine\combineMine_alert.wss",3.1622777,1};
        titles[] = {};
	};
	class OEC_HopperMine_Triggered
	{
		name = "OEC_HopperMine_Triggered";
        sound[] = {"OECExtension\Overwatch\Weapons\data\hoppermine\combineMine_triggered.wss",3.1622777,1};
        titles[] = {};
	};
};

class CfgMineTriggers
{
	class RangeTrigger;
	class OEC_RangeTrigger_Hopper: RangeTrigger
	{
		mineTriggerRange = 7;
		mineTriggerActivationRange = 7;
		restrictZoneCenter[] = {0,0,0};
		restrictZoneRadius = 7;
		mineDelay = 0.5;
	};
};

class cfgAmmo
{
	class GrenadeHand;
    class OEC_Ammo_MK3A2: GrenadeHand
    {
        model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\mk3a2\mk3a2";
        effectFly = "OEC_ParticleEffect_MK3A2";
        simulation = "shotNVGMarker";
        soundFly[] = {"\OECExtension\Overwatch\Weapons\Ammo\sounds\OEC_5SEC_GRENFUSE.wss",20,1,200};
        class NVGMarkers{};
    };

    class BoundingMineBase;
    class OEC_Ammo_HopperMine_Range: BoundingMineBase
	{
		hit = 50;
		indirectHit = 50;
		indirectHitRange = 6.5;
		model = "\OECExtension\Overwatch\Weapons\data\hoppermine\combine_mine.p3d";
		mineModelDisabled = "\OECExtension\Overwatch\Weapons\data\hoppermine\combine_mine_folded.p3d";
		defaultMagazine = "OEC_Magazine_HopperMine_Range";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_01",3.1622777,1,1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_02",3.1622777,1,2000};
		multiSoundHit[] = {"soundHit1",0.5,"soundHit2",0.5};
		soundActivation[] = {};
		soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",1.9952624,1,20};
		explosionEffects = "BoundingMineExplosion";
		CraterEffects = "BoundingMineCrater";
		mineJumpEffects = "MineJumpEffect";
		whistleDist = 60;
		cost = 300;
		mineBoundingTime = 0.55;
		mineBoundingDist = 2.5;
		mineInconspicuousness = 40;
		mineTrigger = "OEC_RangeTrigger_Hopper";

		soundTrigger[] = {"OECExtension\Overwatch\Weapons\data\hoppermine\combineMine_triggered.wss",3,10,75};

        triggerWhenDestroyed = 0;
        ace_explosives_defuseTime = 3;
        ace_explosives_size = 1;

		class EventHandlers 
		{
            init = "[_this select 0] execVM '\OECExtension\Scripts\OEC_hopperMine.sqf';";
        };
	};
};

class CfgMagazines
{
    class HandGrenade;
    class OEC_Magazine_MK3A2: HandGrenade
    {
        ammo = "OEC_Ammo_MK3A2";

		author = "OEC Extension";
        displayName = "[OEC] MK3A2 Explosive Grenade";
        displayNameShort = "MK3A2 Grenade";
        descriptionShort = "Repurposed Pre-War Explosive Grenade";

        picture = "\OECExtension\Overwatch\Weapons\data\FragNade.paa";
        model = "\rhsusf\addons\rhsusf_weapons\grenades\mk3a2\mk3a2";
    };

    class CA_Magazine;
	class ATMine_Range_Mag: CA_Magazine {};
    class OEC_Magazine_HopperMine_Range: ATMine_Range_Mag
	{
		author = "OEC Extension";
        displayName = "[OEC] Combine Hopper Mine";
        displayNameShort = "Hopper Mine";
        descriptionShort = "Combine-made bounding mine with IFF capabilities";

		mass = 10;
		ammo = "OEC_Ammo_HopperMine_Range";
		picture = "\OECExtension\Overwatch\Weapons\data\hopper.paa";
		model = "OECExtension\Overwatch\Weapons\data\hoppermine\combine_mine_folded.p3d";
		class Library
		{
			libTextDesc = "test description1. Tell Petee if you found this";
		};
		//descriptionUse = "Deeploy Hopper";
		allowedSlots[] = 
		{
			701, // Vest
			801, // Uniform
			901  // Backpack
		};
		priority = 1;

		ace_explosives_setupObject = "OEC_Place_HopperMine";
		useAction = 1;
        ace_explosives_placeable = 1;
		
	};
};

class CfgWeapons
{
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
        muzzles[] += {"OEC_Throw_MK3A2"};
        class ThrowMuzzle: GrenadeLauncher{};
        class OEC_Throw_MK3A2: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_MK3A2"};
        };
    };

    class Default;
	class Put: Default
	{
        muzzles[] += {"OEC_Put_Hopper"};
		class PutMuzzle;
		class MineMuzzle: PutMuzzle{};
        class ClassicMineRangeMuzzle: PutMuzzle {};
        class OEC_Put_Hopper: ClassicMineRangeMuzzle
		{
			magazines[] = {"OEC_Magazine_HopperMine_Range"};
			displayName = "Deploy Hopper Mine";
		};
	};
};

class CfgVehicles
{
	class MineGeneric;
	class MineBase: MineGeneric {};

	class ACE_Explosives_Place_APERSBoundingMine;

	class OEC_HopperMine: MineBase
	{
		author = "OEC Extension";
		mapSize = 0.08;
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\APERSBoundingMine.jpg";
		scopeCurator = 2;
		scope = 2;
		ammo = "OEC_Ammo_HopperMine_Range";
		displayName = "[OEC] Hopper Mine";
		icon = "iconExplosiveAP";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "OECExtension\Overwatch\Weapons\data\hoppermine\combine_mine_folded.p3d";
		descriptionShort = "Combine Hopper Mine";
	};

	class OEC_Place_HopperMine: ACE_Explosives_Place_APERSBoundingMine
	{
		model = "OECExtension\Overwatch\Weapons\data\hoppermine\combine_mine_folded.p3d";
	};
};