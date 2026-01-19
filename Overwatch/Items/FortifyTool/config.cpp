class CfgPatches
{
    class OEC_Extension_Overwatch_Items_FortifyTool
    {
        addonRootClass = "OEC_Extension_Overwatch_Items";
        requiredAddons[] = 
        {
            "OEC_Extension_Overwatch_Items",
            "ace_fortify"
        };
        units[] = {};
        weapons[] = {};
        currencyItem = "OEC_Items_Deployable_Barricade";
        externalPlaceables[] = 
        {
            "HL_CMB_Static_barricade_short01a",
            "HL_CMB_Static_booth_short01a"
        };
    };
};

/*class ACEX_Fortify_Presets
{
    class Combine
    {
        displayName = "Combine";
        objects[] = {{"HL_CMB_Static_barricade_short01a", 0},{"HL_CMB_Static_booth_short01a", 0}};
    };
};*/

class Extended_PreInit_EventHandlers 
{
    class OEC_Extension_Overwatch_Items_FortifyTool 
    {
        init = "call compileFinal preprocessFileLineNumbers 'OECExtension\Scripts\FortifyTool\OEC_XEHpreInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers 
{
    class OEC_Extension_Overwatch_Items_FortifyTool 
    {
        init = "call compileFinal preprocessFileLineNumbers 'OECExtension\Scripts\FortifyTool\OEC_XEHpostInit.sqf'";
    };
};