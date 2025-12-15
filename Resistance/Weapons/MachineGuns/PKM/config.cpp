class CfgPatches
{
    class OEC_Extension_Resistance_Weapons_MachineGuns_PKM
    {  
        addonRootClass = "OEC_Extension_Resistance_Weapons_MachineGuns";
        requiredAddons[] = {"OEC_Extension_Resistance_Weapons_MachineGuns"};
        units[] = {};
        weapons[] = 
        {
            "OEC_Weapons_PKM"
        };
    };
};
class Eventhandlers;

class Mode_SemiAuto;
class Mode_FullAuto;

class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class UnderBarrelSlot;
class PointerSlot;

class GunParticles;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class OEC_Weapons_PKM: Rifle_Long_Base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] PKM";
        baseWeapon = "OEC_Weapons_PKM";
		scope = 2;
        inertia = 0.85;
		dexterity = 1.0;
		magazines[] = {"OEC_Magazine_762x51_150Rnd"};
        magazineWell[] = {};
		reloadAction = "GestureReloadM200";
		recoil = "rhs_recoil_pkm";
		cursor = "mg";
		cursorAim = "EmptyCursor";
		nameSound = "Mgun";
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_pkm_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons\pkm\pkm.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\pkm\pkm_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkm.rtm"};
        hasBipod = 1;
		maxRecoilSway = 0.015;
		swayDecaySpeed = 1.25;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		aimTransitionSpeed = 0.5;

		class ItemInfo
		{
			priority = 1;
		};

		magazineReloadSwitchPhase = 0.46;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{

		 class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {};
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {};
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {};
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = {};
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
		};

        changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.56234133,1,20};
		muzzles[] = {"this"};
		modes[] = {"FullAuto","Single","close","short","medium"};
		discreteDistance[] = {420,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000","eye_1100","eye_1200","eye_1300","eye_1400","eye_1500"};
		discreteDistanceInitIndex = 0;
		cameraDir = "eye_look";
		maxZeroing = 1500;

		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
			class RHS_BarrelRefract
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne up";
				effectName = "RHS_BarrelRefract";
			};
        };

		class Eventhandlers: Eventhandlers
		{
			class RHS_pk_firedSoundHandler
			{
				fired = "_this params ['_unit','_weapon']; private _soundArray = ['RHS_rattle_pk_1','RHS_rattle_pk_2','RHS_rattle_pk_3','RHS_rattle_pk_4','RHS_rattle_pk_5','RHS_rattle_pk_6'];[_unit,_weapon,_soundArray,3] call RHS_fnc_beltRattle; private _sound = 'RHS_boltSnap_pk';[_unit,_weapon,_sound] call RHS_fnc_boltSnap";
			};
		};

		WW2_boltSnapSound = "RHS_boltSnap_pk";
		WW2_boltSnapDelay = 0.1;

        class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.092;
			dispersion = 0.0014545;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiBurstTerminable = 0;
			aiRateOfFire = 1e-006;
			showToPlayer = 1;
			class StandardSound
            {
                soundSetShot[] = {"RHS_pk_Shot_SoundSet","RHS_rifle_med_Tail_SoundSet"};
            };
			class SilencedSound
            {
                soundSetShot[] = {"RHS_pk_Shot_SoundSet","RHS_rifle_med_Tail_SoundSet"};
            };
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.092;
			dispersion = 0.00101;
			autoFire = 0;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
			class StandardSound
            {
                soundSetShot[] = {"RHS_pk_Shot_SoundSet","RHS_rifle_med_Tail_SoundSet"};
            };
			class SilencedSound
            {
                soundSetShot[] = {"RHS_pk_Shot_SoundSet","RHS_rifle_med_Tail_SoundSet"};
            };
		};
		class close: FullAuto
		{
			burst = 40;
			burstRangeMax = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 30;
			burstRangeMax = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 20;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 375;
			midRangeProbab = 0.6;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};

        aiDispersionCoefY = 14;
		aiDispersionCoefX = 8;
	};
};
