class CfgPatches
{
  class OEC_Extension_Overwatch_Weapons_SPAS
  {  
    addonRootClass = "OEC_Extension_Overwatch_Weapons";
    requiredAddons[] = 
    {
        "OEC_Extension_Overwatch_Weapons",
        "HL_CMB_Weapons_shot_SPAS12"
    };
    units[] = {};
    weapons[] = {"OEC_Weapon_SPAS12"};
  };
};

class CfgMagazines
{
    class 30Rnd_65x39_caseless_mag;
    class OEC_Magazine_SPAS12_8Rnd: 30Rnd_65x39_caseless_mag
    {
        author = "OEC Extension";
        scope = 2;
        displayName = "[OEC] 8 SPAS-12 Buckshot Shells";
        displayNameShort = "Buckshot";
        descriptionshort = "Buckshot shell for SPAS-12 Shotgun.";
        picture = "\OECExtension\Overwatch\Weapons\data\buckshotMag.paa";
        ammo = "OEC_Ammo_SPAS12_Buckshot";
        count = 8;
        initSpeed = 600;
        mass = 15;
        tracersEvery = 1;
    };
    class OEC_Magazine_SPAS12_8Rnd_Slug: OEC_Magazine_SPAS12_8Rnd
    {
        displayName = "[OEC] 8 SPAS-12 Slug Shells";
        displayNameShort = "Slug";
        descriptionshort = "Slug shell for SPAS-12 Shotgun.";
        picture = "\OECExtension\Overwatch\Weapons\data\slugMag.paa";
        ammo = "OEC_Ammo_SPAS12_Slug";
        tracersEvery = 1;
        mass = 15;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_PicatinnyTopShortMount;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class OEC_Weapon_SPAS12: Rifle_Base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] SPAS-12 Shotgun";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Standard Issue Ballistic Shotgun";
		model = "CUP\Weapons\CUP_Weapons_SPAS12\CUP_sgun_SPAS12";
		picture = "\OECExtension\Overwatch\Weapons\data\SPAS12.paa";
		magazines[] = {"OEC_Magazine_SPAS12_8Rnd", "OEC_Magazine_SPAS12_8Rnd_Slug"};
        magazineWell[] = {};
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_SPAS12\data\anim\spas_hand.rtm"};
		inertia = 0.5;
		aimTransitionSpeed = 0.9;
		bullet1[] = {"a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01",0.5011872,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02",0.5011872,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03",0.5011872,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04",0.5011872,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01",0.39810717,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02",0.39810717,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03",0.39810717,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04",0.39810717,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01",0.2238721,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02",0.2238721,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03",0.2238721,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04",0.2238721,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		reloadMagazineSound[] = {"WBK_Combines\weapons\shotgun_reloadSnd.ogg",1,1,30};
		drySound[] = {"CUP\Weapons\CUP_Weapons_SPAS12\data\sfx\Dry",1,1,35};
		cursor = "sgun";
		optics = 1;
		modelOptics = "-";
		selectionFireAnim = "zasleh";
        reloadAction = "WBK_HLA_ChargerShotgun_reload";
		modes[] = {"Single", "FullAuto"};
		discreteDistance[] = {100};
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		fireSpreadAngle = 0.7848246;
		jsrs_soundeffect = "JSRS2_Distance_Effects_Shotgun";
		ACE_twistDirection = 0;
		ACE_barrelTwist = 0.0;
		ACE_barrelLength = 469.9;
		class Single: Mode_SemiAuto
		{
            sounds[] = {"StandardSound"};
			class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"WBK_SPAS_Shot_Base_Soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
            };
            aiRateOfFire = 1;
			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 0.25;
			magazineReloadTime = 6;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
		};
        class FullAuto: Mode_FullAuto
		{
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"WBK_SPAS_Shot_Base_Soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
            };
            aiRateOfFire = 1;
			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 0.25;
			magazineReloadTime = 6;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
		};
		class Library
		{
			libTextDesc = "$STR_CUP_lib_spas12";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95.8;
			class CowsSlot{};
			class PointerSlot{};
			class MuzzleSlot{};
		};
	};
};
