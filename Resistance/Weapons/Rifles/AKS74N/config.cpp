class CfgPatches
{
    class OEC_Extension_Resistance_Weapons_Rifles_AKS74N
    {  
        addonRootClass = "OEC_Extension_Resistance_Weapons_Rifles";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Weapons_Rifles",
            "a3_sounds_f_exp"
        };
        units[] = {};
        weapons[] = 
        {
            "OEC_Weapons_AKS74N"
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
class PointerSlot;
class CowsSlot;
class Mode_SemiAuto;

class CfgWeapons 
{
    class arifle_MX_Base_F;
    class arifle_MX_F: arifle_MX_Base_F
    {
        class WeaponSlotsInfo;
        class GunParticles;
        class FullAuto;
    };

    class OEC_Weapons_AKS74N: arifle_MX_F
    {
        author = "OEC Extension";
        displayName = "[OEC] AKS-74N";
        baseWeapon = "OEC_Weapons_AKS74N";
        magazines[] = {"OEC_Magazine_545x39_30Rnd_Bakelite","OEC_Magazine_545x39_30Rnd_Black", "OEC_Magazine_545x39_30Rnd_Taped"};
        magazineWell[] = {};
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_aks74n_ca.paa";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		cameraDir = "eye_look";
		model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_aks74.rtm"};
        optics = 0;
		reloadAction = "RHS_GestureReloadAK_1hand";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 74.5;
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {"OEC_Acc_Suppressor_DTK4", "OEC_Acc_Muzzle_DTK"};
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {"OEC_Acc_Pointer_Zenit"};
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {"OEC_Acc_Scope_PKAS", "OEC_Acc_Collimator_EKP802", "OEC_Acc_Scope_PSO1"};
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
            aiBurstTerminable	= 1;
            reloadTime			= 0.0923;
            dispersion			= 0.00093;
            minRange			= 2;
            minRangeProbab		= 0.01;
            midRange			= 200;
            midRangeProbab		= 0.01;
            maxRange			= 375;
            maxRangeProbab		= 0.01;
            class StandardSound
            {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet","RHS_rifle_small_Tail_SoundSet"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet","RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class FullAuto: Fullauto
        {
            aiBurstTerminable	= 1;
            reloadTime			= 0.0923;
            dispersion			= 0.00093;
            minRange			= 0;
            minRangeProbab		= 0.3;
            midRange			= 5;
            midRangeProbab		= 0.7;
            maxRange			= 10;
            maxRangeProbab		= 0.04;
            aiRateOfFire		= 1e-006;
            class StandardSound
            {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet","RHS_rifle_small_Tail_SoundSet"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet","RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class close: Fullauto
		{
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
        class short: close
		{
			burst = 3;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 150;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.04;
		};
        class medium: close
		{
			burst = 2;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 350;
			minRange = 150;
			minRangeProbab = 0.05;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
		};
        class far_optic2: close
		{
			burst = 3;
			requiredOpticType = 2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 650;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.4;
			maxRange = 450;
			maxRangeProbab = 0.01;
		};

        class LinkedItems
        {
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "OEC_Acc_Muzzle_DTK";
            };
        };
    };  
};
