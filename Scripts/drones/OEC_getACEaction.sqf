params ["_target", "_player", "_params"];

private _drone = [];
_drone_class_undeployed = "OEC_Floor_Turret_Folded";

if (secondaryWeapon _player == _drone_class_undeployed) then
{
    _className = OEC_Floor_Turret_Folded;
    _count = 1;

    _drone pushBack [_className, _count];
};

OEC_subActions_turret = {
    params ["_target", "_player", "_params"];
    
    private _sub_actions = [];    
    if (_player hasWeapon "OEC_Floor_Turret_Folded") then 
    {
        private _deployAction = [
            "OEC_droneACEaction",
            "Place", 
            "\OECExtension\Overwatch\Weapons\data\turret.paa",
            {
                params ["_target", "_player", "_params"];
                [_player] call OEC_fnc_spawnDrone;
            },
            {true},
            {},
            _drone
        ] call ace_interact_menu_fnc_createAction;
        _sub_actions pushBack [_deployAction, [], _player];
    };
    _sub_actions
};


private _actions = [];
{
    private _magazine_class_name = OEC_Floor_Turret_Folded;
    private _magazine_display_name = "Combine Sterilizer";
    private _magazine_picture = "\OECExtension\Overwatch\Weapons\data\turret.paa";

    
    private _magazine_action = [
        _magazine_class_name, 
        _magazine_display_name,
        _magazine_picture, 
        {
            params ["_target", "_player", "_params"]; 
            [_player] call OEC_fnc_spawnDrone
        },
        {true}, 
        {call OEC_subActions_turret}, 
        _x
    ] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_magazine_action, [], _player];
} forEach _drone;

_actions