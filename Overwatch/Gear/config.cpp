class CfgPatches
{
    class OEC_Extension_Overwatch_Gear
    {
        name = "OEC Extension - Gear";
        author = "Dirt & Petee";
        requiredAddons[] = 
        {
            "A3_data_F",
            "A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F",
            "WBK_Combinus"
        };
        units[] = 
        {
            "OEC_Overwatch_Unit_Base"
        };
        weapons[] = {};
    };
};

class CfgFaces
{
    class Default
    {
        class Custom;
    };
    class Man_A3: Default
    {
        class WBK_CombineHead;
        class OEC_Head: WBK_CombineHead
        {
            identityTypes[] = {"OEC_Transhumans"};
        };
    };
};

class CfgWorlds
{
    class GenericNames
    {
        class OEC_Transhumans
        {
            class FirstNames
            {
                O9 = "O-9";
                O8 = "O-8";
                O7 = "O-7";
                O6 = "O-6";
                O5 = "O-5";
                O4 = "O-4";
                O3 = "O-3";
            };
            class LastNames
            {
                echo1 = "Echo-1";
                echo3 = "Echo-3";
                mao = "Maow :3";
                union7 = "Union-7";
                helix2 = "Helix-2";
                helix5 = "Helix-5";
                spikewall1 = "Spikewall-1";
            };
        };
    };
};

