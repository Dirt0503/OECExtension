class CfgPatches
{
    class Dirts_OEC_Extension_Weapons_Grenades
    {
        addonRootClass = "Dirts_OEC_Extension_Weapons";
        requiredAddons[] = 
        {
            "A3_data_F",
            "A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F"
        };
        units[] = {};
        weapons[] = 
        {
            "OEC_Magazine_MK3A2"
        };
    };
};

class CfgMagazines
{
    class HandGrenade;
    class OEC_Magazine_MK3A2: HandGrenade
    {
        ammo = "OEC_Ammo_MK3A2";

        displayName = "[OEC] MK3A2 Explosive Grenade";
        displayNameShort = "[OEC] MK3A2 Grenade";
        descriptionShort = "Repurposed Pre-War Explosive Grenade";

        picture = "\rhsusf\addons\rhsusf_weapons\icons\g_mk3a2_ca.paa";
        model = "\rhsusf\addons\rhsusf_weapons\grenades\mk3a2\mk3a2";
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
};