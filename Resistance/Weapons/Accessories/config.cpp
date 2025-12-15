class CfgPatches
{
    class OEC_Extension_Resistance_Accessories
    {  
        addonRootClass = "OEC_Extension_Resistance_Weapons";
        requiredAddons[] = {"OEC_Extension_Resistance_Weapons"};
        units[] = {};
        weapons[] = 
        {
            "OEC_Acc_Scope_PKAS",
            "OEC_Acc_Collimator_EKP802",
            "OEC_Acc_Scope_PSO1",
            "OEC_Acc_Pointer_Zenit",
            "OEC_Acc_Suppressor_DTK4",
            "OEC_Acc_Muzzle_DTK",
            "OEC_Acc_Muzzle_PSG64"
        };
    };
};

class ItemInfo;
class Flashlight;
class CfgWeapons
{
    class rhs_acc_pkas;
    class OEC_Acc_Scope_PKAS: rhs_acc_pkas
    {
        author = "OEC Extension";
        displayName = "[OEC] PK-AS Short Scope";
    };

    class rhs_acc_ekp8_02;
    class OEC_Acc_Collimator_EKP802: rhs_acc_ekp8_02
    {
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\accessories\rhs_acc_ekp8_02_ca.paa";
        scope=2;
        author = "OEC Extension";
        displayName = "[OEC] EKP-8-02 Collimator Sights";
        model = "\rhsafrf\addons\rhs_accessory\scopes\ekp-8-02\rhs_ekp_8_02";

        inertia = 0;
    };

    class rhs_acc_pso1m21;
    class OEC_Acc_Scope_PSO1: rhs_acc_pso1m21
    {
        author = "OEC Extension";
        displayName = "[OEC] PSO-1 Scope";
    };
    
    class rhs_acc_2dpZenit;
    class OEC_Acc_Pointer_Zenit: rhs_acc_2dpZenit
    {
        author = "OEC Extension";
        displayName = "[OEC] Zenit Flashlight";
    };

    class rhs_acc_dtk4short;
    class OEC_Acc_Suppressor_DTK4: rhs_acc_dtk4short
    {
      author = "OEC Extension";
      displayName = "[OEC] DTK4 Suppressor";
    };

    class rhs_acc_dtk;
    class OEC_Acc_Muzzle_DTK: rhs_acc_dtk
    {
      author = "OEC Extension";
      displayName = "[OEC] DTK (Standard)";
    };

    class rhs_acc_pgs64_74u;
    class OEC_Acc_Muzzle_PGS64: rhs_acc_pgs64_74u
    {
      author = "OEC Extension";
      displayName = "[OEC] PGS64";
    };
};