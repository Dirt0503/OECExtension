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
		hit = 12;
		indirectHit = 12;
		indirectHitRange = 6;

        model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\mk3a2\mk3a2";
        effectFly = "OEC_ParticleEffect_MK3A2";
        soundFly[] = {"\OECExtension\Overwatch\Weapons\Ammo\sounds\OEC_5SEC_GRENFUSE.wss",20,1,200};
		class EventHandlers 
		{
            init = "[_this select 0] execVM '\OECExtension\Scripts\OEC_combineGrenade.sqf';";
        };
    };
	class OEC_Ammo_m18Smoke_White: GrenadeHand
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_white_throw";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0.2;
		dangerRadiusHit = -1;
		suppressionRadiusHit = -1;
		typicalspeed = 22;
		cost = 100;
		simulation = "shotSmokeX";
		explosive = 0;
		deflecting = 30;
		explosionTime = 2;
		timeToLive = 60;
		fuseDistance = 0;
		soundHit[] = {"",0,1};
		SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1",1.2589254,1,100};
		SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2",1.2589254,1,100};
		SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3",1.2589254,1,100};
		SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1",0.12589253,1,70};
		SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2",0.12589253,1,70};
		grenadeFireSound[] = {"SmokeShellSoundHit1",0.25,"SmokeShellSoundHit2",0.25,"SmokeShellSoundHit3",0.5};
		grenadeBurningSound[] = {"SmokeShellSoundLoop1",0.5,"SmokeShellSoundLoop2",0.5};
		aiAmmoUsageFlags = "4 + 2";
		smokeColor[] = {1,1,1,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_White";
		whistleDist = 0;
	};
	class OEC_Ammo_m18Smoke_Red: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_red_throw";
		smokeColor[] = {0.8438,0.1383,0.1353,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Red";
	};
	class OEC_Ammo_m18Smoke_Green: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_green_throw";
		smokeColor[] = {0.2125,0.6258,0.48909998,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Green";
	};
	class OEC_Ammo_m18Smoke_Yellow: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_yellow_throw";
		smokeColor[] = {0.9883,0.8606,0.0719,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Yellow";
	};
	class OEC_Ammo_m18Smoke_Purple: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_purple_throw";
		smokeColor[] = {0.4341,0.1388,0.41439998,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Yellow";
	};
	class OEC_Ammo_m18Smoke_Blue: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_blue_throw";
		smokeColor[] = {0.1183,0.1867,1,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Blue";
	};
	class OEC_Ammo_m18Smoke_Orange: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_orange_throw";
		smokeColor[] = {0.6697,0.2275,0.10053,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Orange";
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

		value = 4;
		mass = 8;
		initSpeed = 22;
    };
	class OEC_Magazine_M18smoke_White: HandGrenade
	{
		ammo = "OEC_Ammo_m18Smoke_White";

		author = "OEC Extension";
		displayName = "[OEC] M18 Smoke (White)";
		displayNameShort = "M18 White Smoke";
        descriptionShort = "Repurposed Pre-War Smoke Grenade";

		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_white";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";

		value = 2;
		mass = 4;
		initSpeed = 22;
	};
	class OEC_Magazine_M18smoke_Red: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Red";
		displayName = "[OEC] M18 Smoke (Red)";
		displayNameShort = "M18 Red Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_red_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_red";
	};
	class OEC_Magazine_M18smoke_Green: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Green";
		displayName = "[OEC] M18 Smoke (Green)";
		displayNameShort = "M18 Green Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_green_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_green";
	};
	class OEC_Magazine_M18smoke_Yellow: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Yellow";
		displayName = "[OEC] M18 Smoke (Yellow)";
		displayNameShort = "M18 Yellow Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_yellow_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_yellow";
	};
	class OEC_Magazine_M18smoke_Purple: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Purple";
		displayName = "[OEC] M18 Smoke (Purple)";
		displayNameShort = "M18 Purple Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_purple_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_purple";
	};
	class OEC_Magazine_M18smoke_Blue: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Blue";
		displayName = "[OEC] M18 Smoke (Blue)";
		displayNameShort = "M18 Blue Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_blue_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_blue";
	};
	class OEC_Magazine_M18smoke_Orange: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Orange";
		displayName = "[OEC] M18 Smoke (Orange)";
		displayNameShort = "M18 Orange Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_orange_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_orange";
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
        muzzles[] += {"OEC_Throw_MK3A2", "OEC_Throw_M18smoke_White", "OEC_Throw_M18smoke_Red","OEC_Throw_M18smoke_Green","OEC_Throw_M18smoke_Yellow","OEC_Throw_M18smoke_Purple","OEC_Throw_M18smoke_Blue","OEC_Throw_M18smoke_Orange"};
        class ThrowMuzzle: GrenadeLauncher{};
        class OEC_Throw_MK3A2: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_MK3A2"};
        };
		class OEC_Throw_M18smoke_White: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_White"};
        };
		class OEC_Throw_M18smoke_Red: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Red"};
        };
		class OEC_Throw_M18smoke_Green: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Green"};
        };
		class OEC_Throw_M18smoke_Yellow: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Yellow"};
        };
		class OEC_Throw_M18smoke_Purple: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Purple"};
        };
		class OEC_Throw_M18smoke_Blue: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Blue"};
        };
		class OEC_Throw_M18smoke_Orange: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Orange"};
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