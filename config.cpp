class CfgPatches
{
    class Dirts_OEC_Extension
    {
        name = "Dirt's OEC Extension";
        author = "Dirt";
        requiredAddons[] = 
        {
            "WBK_Combinus"
        };
        units[] = {};
        weapons[] = {};
    };
};

class CfgMods
{
    class Mod_Base;
    class Dirts_OEC_Extension_Base: Mod_Base
    {
        dir = "@DirtsOECExtension";
        name = "Dirt's OEC Extension";
        picture = "\DirtsOECExtension\OEClogo1.paa";
        logo = "\DirtsOECExtension\OEClogo1.paa";
        logoSmall = "\DirtsOECExtension\OEClogo1.paa";
        logoOver = "\DirtsOECExtension\OEClogo1.paa";
        tooltip = "Dirt's OEC Extension";
        tooltipOwned = "Dirt's OEC Extension";
    };
};

class Extended_PostInit_EventHandlers
{
    class Dirts_Visor_Extension
    {
        init = "call compile preprocessFileLineNumbers '\DirtsOECExtension\patchHelmets.sqf'";
    };
};