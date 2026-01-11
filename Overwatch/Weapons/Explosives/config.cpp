class CfgPatches
{
    class OEC_Extension_Overwatch_Weapons_Grenades
    {
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
        units[] = 
		{
			"hopperBoundingMine"
		};
        weapons[] = {};
    };
};

class CfgMineTriggers
{
	class RangeTrigger;
	class RangeTriggerHopper: RangeTrigger
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
    class HopperMine_Range_Ammo: BoundingMineBase
	{
		hit = 50;
		indirectHit = 50;
		indirectHitRange = 6.5;
		model = "\A3\Weapons_F\explosives\mine_AP_bouncing";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_bouncing_d";
		defaultMagazine = "HopperMine_Range_Mag";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_01",3.1622777,1,1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_02",3.1622777,1,2000};
		multiSoundHit[] = {"soundHit1",0.5,"soundHit2",0.5};
		soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",1.9952624,1,20};
		explosionEffects = "BoundingMineExplosion";
		CraterEffects = "BoundingMineCrater";
		mineJumpEffects = "MineJumpEffect";
		whistleDist = 60;
		cost = 300;
		mineBoundingTime = 0.55;
		mineBoundingDist = 2.5;
		mineInconspicuousness = 40;
		mineTrigger = "RangeTriggerHopper";


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
    class HopperMine_Range_Mag: ATMine_Range_Mag
	{
		author = "OEC Extension";
        displayName = "[OEC] Combine Hopper Mine";
        displayNameShort = "Hopper Mine";
        descriptionShort = "Combine-made bounding mine with IFF capabilities";

		mass = 15;
		ammo = "HopperMine_Range_Ammo";
		picture = "\A3\Weapons_F\Data\UI\gear_mine_AP_bouncing_CA.paa";
		model = "\A3\Weapons_F\explosives\mine_AP_bouncing_i";
		class Library
		{
			libTextDesc = "test description1. Tell Petee if you found this";
		};
		descriptionUse = "DEPLOY HOPPER1";
		allowedSlots[] = {901,701};

		ace_explosives_setupObject = "ACE_Explosives_Place_APERSBoundingMine";
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
			magazines[] = {"HopperMine_Range_Mag"};
			displayName = "Deploy Hopper2";
		};
	};
};

class cfgVehicles
{
	class MineGeneric;
	class MineBase: MineGeneric {};
	/*class hopperBoundingMine: MineBase
	{
		ammo = "HopperMine_Range_Ammo";
	};*/

	class hopperBoundingMine: MineBase
	{
		author = "OEC Extension";
		mapSize = 0.08;
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\APERSBoundingMine.jpg";
		scopeCurator = 2;
		scope = 2;
		ammo = "HopperMine_Range_Ammo";
		displayName = "[OEC] Hopper Mine";
		icon = "iconExplosiveAP";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\A3\Weapons_F\explosives\mine_AP_bouncing";
		descriptionShort = "hopper description 5";
	};
};