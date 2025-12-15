class CfgPatches
{
    class OEC_Extensions_Resistance_Weapons_Rifles_AKS74N_GP25
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
            "OEC_Weapons_AKS74N_GP25", 
            "OEC_Weapons_AKS74N_GP25_PKAS"
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
    class UGL_F;
    class OEC_Weapons_AKS74N;
    class OEC_Weapons_AKS74N_GP25: OEC_Weapons_AKS74N
    {
        author = "OEC Extension";
        displayName = "[OEC] AKS-74N (GP-25)";
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_aks74n_gp25_ca.paa";
        model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n_gp25";
        dexterity = 1.8;
        inertia = 0.67;
        handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
        muzzles[] = {"this","OEC_Muzzle_GP25"};
        scope = 2;
        baseWeapon = "OEC_Weapons_AKS74N_GP25";
        _generalMacro = "OEC_Weapons_AKS74N_GP25";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 107;
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {"OEC_Acc_Suppressor_DTK4", "OEC_Acc_Muzzle_DTK"};
            };
            class PointerSlot {};
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {"OEC_Acc_Scope_PKAS", "OEC_Acc_Collimator_EKP802", "OEC_Acc_Scope_PSO1"};
            };
            class UnderBarrelSlot {};
        };

        class OEC_Muzzle_GP25: UGL_F
        {
            displayName = "[OEC] GP-25";
            descriptionShort = "Grenade launcher<br/>Caliber: 40mm";
            useModelOptics = 0;
            useExternalOptic = 0;
            reloadaction = "RHS_GestureReloadGP30";
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
            magazines[] = {"OEC_Magazine_VOG25","OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_Red"};
            magazineWell[] = {};
            recoil = "rhs_recoil_gp25";

            class Single: Mode_SemiAuto
            {
                sounds[] = {"StandardSound"};
                class BaseSoundModeType
                {
                    closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1.0,1,10};
                    soundClosure[] = {"closure1",1};
                };
                class StandardSound: BaseSoundModeType
                {
                    begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.70794576,1,200};
                    begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.70794576,1,200};
                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                };
                minRange = 20;
                minRangeProbab = 0.1;
                midRange = 40;
                midRangeProbab = 0.7;
                maxRange = 250;
                maxRangeProbab = 0.05;
                showToPlayer = 1;
                artilleryCharge = 1;
                artilleryDispersion = 1;
                canShootInWater = 0;
                requiredOpticType = -1;
            };
            modes[] = {"Single"};
            cameraDir = "OP_look";
            discreteDistance[] = {50,100,150,200,250,300,350,400};
            discreteDistanceCameraPoint[] = {"OP_eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6","OP_eye7"};
            discreteDistanceInitIndex = 2;
            magazineReloadSwitchPhase = 0.36;
        };
    };

    class OEC_Weapons_AKS74N_GP25_PKAS: OEC_Weapons_AKS74N_GP25
    {
        class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OEC_Acc_Scope_PKAS";
			};
        };
    };
};
