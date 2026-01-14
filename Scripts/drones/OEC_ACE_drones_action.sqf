/* =================================================
   Author: 
      	HBTurpin
	Description:
		This function will return the actions for the player to place a drone based on the items/magazines they have in their inventory.
	Arguments:
		0: Object - Player
	Return:
		Array - Actions for the player to place drones
    Notes:
        - This function is cached to prevent performance issues with large inventories.
        - It will return an array of actions that can be used in the ACE interaction menu.
        - The actions will include options to hand deploy or place the drone on the ground.
* =================================================*/

params ["_target", "_player", "_params"];

private _drone_magazines = [];
private _drone_magazines_total = [];
{
    _x params ["_xClassname", "_xCount", "_xLoaded", "_xType", "_xContainer"];
    private _drone_class = getText (configFile >> "CfgMagazines" >> _xClassname >> "GX_Drone");

    if (_drone_class != "") then {
		if (_xContainer in ["Vest","Backpack","Uniform"]) then { // Do not allow magazines in weapons.
            private _index = _drone_magazines find [_xClassname, _xCount];
            if (_index == -1) then {
                _drone_magazines pushBack [_xClassname, _xCount];
                _drone_magazines_total pushBack 1;
            } else {
                _drone_magazines_total set [_index, (_drone_magazines_total select _index) + 1];
            };
        };
    };
} forEach (hasWeapon _player);

GX_fnc_getSubActions = {
    params ["_target", "_player", "_params"];
    
    private _sub_actions = [];    
    if (_player hasWeapon "OEC_Floor_Turret_Folded") then 
    {
        private _deployAction = [
            "GX_DRONE_DEPLOY_PLACE",
            "Place", 
            "\A3\ui_f\data\igui\cfg\actions\take_ca.paa",
            {
                params ["_target", "_player", "_params"];
                [_player, _params # 0, _player, "GROUND", nil, _params # 1] call GX_fnc_drone_place;
            },
            {true},
            {},
            _this # 2
        ] call ace_interact_menu_fnc_createAction;
        _sub_actions pushBack [_deployAction, [], _player];
    };

    _sub_actions
};

//Create the action children for all appropriate magazines
private _actions = [];
{
    private _magazine_class_name = _x # 0;
    private _magazine_count = _x # 1;
    private _magazine_count_max = getNumber (configFile >> "CfgMagazines" >> _magazine_class_name >> "count");
    private _magazine_percent = ceil((_magazine_count / _magazine_count_max) * 100);
    private _magazine_total = (_drone_magazines_total select (_forEachIndex));
    private _magazine_display_name = getText (configFile >> "CfgMagazines" >> _magazine_class_name >> "descriptionShort"); //getText (configFile >> "CfgMagazines" >> _magazine_class_name >> "displayName");
    private _magazine_picture = getText (configFile >> "CfgMagazines" >> _magazine_class_name >> "picture");

    private _magazine_display_count = "";
	private _percent_colour = "#2dc937";
	switch (true) do {
		case (_magazine_percent >= 80): { _percent_colour = "#2dc937"; };
		case (_magazine_percent >= 60): { _percent_colour = "#99c140"; };
		case (_magazine_percent >= 40): { _percent_colour = "#e7b416"; };
		case (_magazine_percent >= 20): { _percent_colour = "#db7b2b"; };
		case (_magazine_percent > 0)   : { _percent_colour = "#cc3232"; };
		default { _percent_colour = "#2dc937"; };
	};

    if (_magazine_percent < 100) then {
        _magazine_display_count = format ["<t size='0.6' color='%2'>(%1%%)</t>", _magazine_percent, _percent_colour];
    };
    
    private _magazine_display_total = "";
    if (_magazine_total > 1) then {
        _magazine_display_total = format ["<t size='0.6' color='#FFEE8C'>x%1</t>", _magazine_total];
    };
    
    private _magazine_action = [
        format ["%1_%2", _magazine_class_name, _magazine_count], 
        format ["%1 %2 %3", _magazine_display_name, _magazine_display_count, _magazine_display_total],
        _magazine_picture, 
        {
            params ["_target", "_player", "_params"]; 
            [_player, _params # 0, _player, "DEFAULT", nil, _params # 1] call GX_fnc_drone_place
        },
        {true}, 
        {call GX_fnc_getSubActions}, 
        _x
    ] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_magazine_action, [], _player];
} forEach _drone_magazines;

_actions
