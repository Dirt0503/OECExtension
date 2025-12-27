class CfgPatches
{
  class OEC_Extension_Overwatch_Weapons_Sniper
  {  
    addonRootClass = "OEC_Extension_Overwatch_Weapons";
    requiredAddons[] = 
    {
        "OEC_Extension_Overwatch_Weapons",
		"OEC_Extension_Overwatch_Weapons_Acc",
        "rhsusf_c_weapons"
    };
    units[] = {};
    weapons[] = {"OEC_Weapon_cmbSrifle"};
  };
};

class CfgMagazines
{
	class CA_Magazine;
	class OEC_Magazine_cmbSrifle: CA_Magazine
	{
		scope = 2;
		ammo = "OEC_Ammo_cmbSrifle_normal";
		author = "OEC Extension";
		displayName = "[OEC] R-2X Cell - Standard";
		displaynameshort = "Standard Cell";
		descriptionShort = "Standard R-2X cell. High damage, decent penetration, 1200m dissipation range";
		count = 1;
		initSpeed = 1000;
		picture = "\OECExtension\Overwatch\Weapons\data\sniperMag.paa";
		tracersEvery = 1;
		mass = 2.5;
	};
	class OEC_Magazine_cmbSrifle_AP: OEC_Magazine_cmbSrifle
	{
		scope = 2;
		ammo = "OEC_Ammo_cmbSrifle_AP";
		author = "OEC Extension";
		displayName = "[OEC] R-2X Cell - Piercer";
		displaynameshort = "Piercer Cell";
		descriptionShort = "Anti-materiel R-2X cell. Medium damage, extreme penetration, 1200m dissipation range";
		count = 1;
		initSpeed = 1000;
		picture = "\OECExtension\Overwatch\Weapons\data\sniperMagAP.paa";
		tracersEvery = 1;
		mass = 5;
	};
}; 

class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class OEC_Shot_Sniper_Soundset: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"WBK_SniperRifle_HL_Shot_FireClose","WBK_SniperRifle_HL_Shot_FireDistance"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};

class Mode_SemiAuto;
class CfgWeapons
{
    class srifle_GM6_F
	{
		class WeaponSlotsInfo;
	};
	class OEC_Weapon_cmbSrifle: srifle_GM6_F
	{
		selectionfireanim = "muzzleFlash";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot{};
			class MuzzleSlot{};
			class UnderBarrelSlot{};
			class PointerSlot
			{
				compatibleItems[] = {"OEC_pointer_blue"};
			};
		};

        modelOptics[] = {"\A3\Weapons_F\acc\reticle_lrps_F","\A3\Weapons_F\acc\reticle_lrps_z_F"};
        class OpticsModes
        {
            class scope
            {
                opticsID = 1;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
                opticsZoomMin = "0.25/25";
                opticsZoomMax = "0.25/6";
                opticsZoomInit = "0.25/6";
                discreteinitIndex = 0;
                discretefov[] = {"0.25/6","0.25/25"};
                memoryPointCamera = "opticView";
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                visionMode[] = {};
                thermalMode[] = {};
                opticsFlare = 1;
                opticsDisplayName = "R-2X";
                opticsDisablePeripherialVision = 0;
                cameraDir = "";
            };
        };

        author = "OEC Extension";
        displayName = "[OEC] R-2X Pulse Sniper Rifle";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Special Issue Pulse Sniper Rifle";
		class Library
		{
			libTextDesc = "Overwatch Special Issue Pulse Sniper Rifle. Pulse ammo has no damage dropoff and is not affected by gravity, but will dissipate beyond 1200m.";
		};
		baseWeapon = "OEC_Weapon_cmbSrifle";
		drySound[] = {"WBK_Combines\weapons\shotgun_empty.wav",1,1,10};
		reloadAction = "WBK_HLA_OrdinalArReload";
		reloadMagazineSound[] = {"WBK_Combines\weapons\sniper_reload.wav",2,1,30};
		model = "WBK_Combines\weapons\assasin_sniper.p3d";
		picture = "\OECExtension\Overwatch\Weapons\data\R2Xsniper.paa";
		handAnim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\assasin_sniper_idle.rtm"};
		magazines[] = {"OEC_Magazine_cmbSrifle", "OEC_Magazine_cmbSrifle_AP", "OEC_Magazine_cmbSrifle_HE"};
        magazineWell[] = {};

		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OEC_Shot_Sniper_Soundset"};
				begin1[] = {"OECExtension\Overwatch\Weapons\data\combinesniperfire.wss",0.9,1,1000};
				soundBegin[] = {"begin1", 1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			dispersion = 0.000093;
			reloadTime = 2;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
			minRange = 20;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 0;
			aiDispersionCoefY = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
};