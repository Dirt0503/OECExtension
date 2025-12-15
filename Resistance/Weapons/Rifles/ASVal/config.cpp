class CfgPatches
{
    class OEC_Extension_Resistance_Weapons_Rifles_ASVal
    {  
        addonRootClass = "OEC_Extension_Resistance_Weapons_Rifles";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Weapons_Rifles",
            "OEC_Extension_Resistance_Weapons_Rifles_AKS74N"
        };
        units[] = {};
        weapons[] = 
        {
            "OEC_Weapons_ASVal", 
            "OEC_Weapons_ASVal_PSO1"
        };
    };
};

class CfgSoundSets
{
    class RHS_AK74_shot_SoundSet;
    class RHS_rifle_small_Tail_SoundSet;

    class RHS_sd_AK74_Shot_SoundSet;
    class RHS_sd_Rifle1_Tail_SoundSet;
};

class underbarrelSlot;
class MuzzleSlot;

class WeaponSlotsInfo;
class PointerSlot;
class CowsSlot;

class Single;
class Mode_SemiAuto;
class Mode_FullAuto;
class mode_burst;

class CfgWeapons 
{
	class arifle_MX_F;
    class OEC_Weapons_AKS74N: arifle_MX_F
    {
        class GunParticles;
    };
    class OEC_Weapons_ASVal: OEC_Weapons_AKS74N
	{
		author = "OEC Extension";
        displayName = "[OEC] AS Val";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_asval_ca.paa";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "CIS Special Forces Rifle";
		recoil = "rhs_recoil_asval";
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 3;
		magazines[] = {"OEC_Magazine_9x39mm_SP5_20Rnd"};
		magazineWell[] = {};
		discreteDistance[] = {100,150,200,220,250,270,300,320,350,370,400,420};
		discreteDistanceCameraPoint[] = {"eye","eye_150","eye_200","eye_220","eye_250","eye_270","eye_300","eye_320","eye_350","eye_370","eye_400","eye_420"};
		cameraDir = "eye_look";
		maxZeroing = 420;
		model = "\rhsafrf\addons\rhs_weapons2\asval\rhs_asval";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons2\asval\data\asval_co.paa","rhsafrf\addons\rhs_weapons2\asval\data\mag_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval.rtm"};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		initSpeed = -1.0535;
		dexterity = 1.7;
		inertia = 0.45;

		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 74.5;
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {};
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {};
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {"OEC_Acc_Scope_PSO1"};
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = {};
            };
        };

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

	    changeFiremodeSound[]=
	    {
		    "A3\sounds_f\weapons\closure\firemode_changer_2",
		    0.56234133,
		    1,
		    20
	    };

        modes[] = {"Single","FullAuto","close","short","medium", "far_optic2"};
        class Single: Mode_SemiAuto
        {
            aiBurstTerminable = 1;
            reloadTime = 0.08;
            dispersion = 0.00163;
            minRange = 2;
            minRangeProbab = 0.01;
            midRange = 150;
            midRangeProbab = 0.01;
            maxRange = 250;
            maxRangeProbab = 0.01;
            class StandardSound
			{
				soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet","RHS_ASVAL_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
			};
            class SilencedSound
			{
				soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet","RHS_ASVAL_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
			};
        };
        class FullAuto: Mode_Fullauto
        {
            aiBurstTerminable = 1;
            reloadTime = 0.08;
            dispersion = 0.00163;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 20;
            maxRangeProbab = 0.04;
            aiRateOfFire = 1e-006;
            class StandardSound
			{
				soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet","RHS_ASVAL_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
			};
            class SilencedSound
			{
				soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet","RHS_ASVAL_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
			};
        };
        class close: FullAuto
		{
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
        class short: close
		{
			burst = 3;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 150;
			minRange = 30;
			minRangeProbab = 0.05;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
        class medium: close
		{
			burst = 2;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 350;
			minRange = 100;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.1;
		};
        class far_optic2: close
		{
			burst = 3;
			requiredOpticType = 2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 650;
			minRange = 150;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.4;
			maxRange = 250;
			maxRangeProbab = 0.01;
		};

		class LinkedItems{};
		baseWeapon = "OEC_Weapons_ASVal";
		_generalMacro = "OEC_Weapons_ASVal";
		// rhs_pso1m21_type = "rhs_acc_pso1m21";

	};

    class OEC_Weapons_ASVal_PSO1: OEC_Weapons_ASVal
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "OEC_Acc_Scope_PSO1";
            };
        };
    };
};