class CfgPatches
{
    class OEC_Extension_Resistance_Weapons_Rifles_AKS74U
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
            "OEC_Weapons_AKS74U"
        };
    };
};

class underbarrelSlot;
class MuzzleSlot;
class PointerSlot;
class CowsSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class mode_burst;
class CfgWeapons 
{
    class arifle_MX_Base_F;
    class arifle_MXC_F: arifle_MX_Base_F
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class OEC_Weapons_AKS74U: arifle_MXC_F
    {
        author = "OEC Extension";
        displayName = "[OEC] AKS-74U";
        baseWeapon = "OEC_Weapons_AKS74U";
        magazines[] = {"OEC_Magazine_545x39_30Rnd_Bakelite","OEC_Magazine_545x39_30Rnd_Black", "OEC_Magazine_545x39_30Rnd_Taped"};
        magazineWell[] = {};
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_aks74u_ca.paa";
		discreteDistance[] = {350,500};
	    discreteDistanceInitIndex = 0;
	    discreteDistanceCameraPoint[] = {"eye","eye_500"};
        initSpeed = -0.835;
        dexterity = 1.6;
	    inertia = 0.33;
		cameraDir = "eye_look";
		model = "\rhsafrf\addons\rhs_weapons2\aks74u\rhs_aks74u";	
	    hiddenSelections[] = {"camo"};
	    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons2\aks74u\data\rhs_aks74u_co.paa"};
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_aks74u.rtm"};
        optics = 0;
		reloadAction = "RHS_GestureReloadAKSU";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 59;
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {"OEC_Acc_Muzzle_PGS64"};
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {};
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {};
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

        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto
        {
            aiBurstTerminable = 1;
            reloadTime = 0.08;
            dispersion = 0.00139;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.04;
            class StandardSound
            {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet","RHS_rifle_small_Tail_SoundSet"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet","RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class Single_AI: Single
        {
            showToPlayer = 0;
            burstRangeMax = 3;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 375;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 2;
        };
        class FullAuto: Mode_FullAuto
        {
            aiBurstTerminable = 1;
            reloadTime = 0.08;
            dispersion = 0.00139;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            class StandardSound
            {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet","RHS_rifle_small_Tail_SoundSet"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet","RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class single_medium_optics1: Single
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
        };
        class fullauto_medium: FullAuto
        {
            showToPlayer = 0;
            burst = 2;
            burstRangeMax = 5;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1.0;
            aiRateOfFireDispersion	= 2;
        };
      
        class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "OEC_Acc_Muzzle_PGS64";
			};
		};
    };
};