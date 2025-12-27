class CfgPatches
{
    class OEC_Extension_Overwatch_Weapons_Grenades
    {
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
        units[] = {};
        weapons[] = {};
    };
};

class CfgMagazines
{
    class HandGrenade;
    class OEC_Magazine_MK3A2: HandGrenade
    {
        ammo = "OEC_Ammo_MK3A2";

        displayName = "[OEC] MK3A2 Explosive Grenade";
        displayNameShort = "MK3A2 Grenade";
        descriptionShort = "Repurposed Pre-War Explosive Grenade";

        picture = "\OECExtension\Overwatch\Weapons\data\FragNade.paa";
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