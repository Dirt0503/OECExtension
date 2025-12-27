params ["_player", "_didJIP"];

diag_log text (["[OEC]", "[ZEUS LOGIN]", "TRACE:", "Registered new zeus interactions for:", _this] joinString " ");

_insertChildren = {
	params ["_target", "_player", "_params"];

	private _curZeus = missionnamespace getVariable ["OEC_ZL_activeZeusUserObject", objNull];

	private _curZeusName = "";
	if(isNull _curZeus) then {
		_curZeusName = "n/a";
	} else {
		_curZeusName = name _curZeus;
	};

	_children = [
		[["Login to Zeus", "Login to Zeus", "", {
			params ["_target", "_player", "_params"];
			[_target, _player, _params] call OEC_fnc_ZL_login;
		}, {
			private _val = missionnamespace getVariable ["OEC_ZL_activeZeusUser", false];
			if (_val) then {
				private _usr = missionnamespace getVariable ["OEC_ZL_activeZeusUserObject", objNull];
				if (isNull _usr or not (alive _usr)) then {
					_val = false;
					[_target, _player, _params] call OEC_fnc_ZL_logout;
				};
			};

			(not _val) && OEC_ZL_Enabled;
		}] call ace_interact_menu_fnc_createAction, [], _target],

		[["Zeus Name", _curZeusName, "", {
			// Do nothing.
		}, {
			missionnamespace getVariable ["OEC_ZL_activeZeusUser", false];
		}] call ace_interact_menu_fnc_createAction, [], _target],

		[["Logout of Zeus", "Logout of Zeus", "", {
			params ["_target", "_player", "_params"];
			[_target, _player, _params] call OEC_fnc_ZL_logout;
		}, {
			params ["_target", "_player", "_params"];

			private _curZeus = missionnamespace getVariable ["OEC_ZL_activeZeusUserObject", objNull];
			private _val = missionnamespace getVariable ["OEC_ZL_activeZeusUser", false];
			
			private _res = false;
			if (not (isNull _curZeus) and (alive _curZeus)) then {
				_res = _curZeus isEqualTo _player;
				if (isDedicated) then {
					_res = _res or (admin _player) != 0;
				};
			} else {
				if (_val) then {
					[_target, _player, _params] call OEC_fnc_ZL_logout;
				};
			};

			_res;
		}] call ace_interact_menu_fnc_createAction, [], _target]
	];

	_children;
};

_action = ["Zeus", "Zeus", "", {}, {true}, _insertChildren] call ace_interact_menu_fnc_createAction;

[(typeOf player), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
