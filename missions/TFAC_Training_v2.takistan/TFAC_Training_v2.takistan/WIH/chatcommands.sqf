[] spawn{

  // #hint string
  // sent hint message
  ["hint",{
    hint (_this select 0);
  },"admin"] call CBA_fnc_registerChatCommand;

  //#skipTime Int
  //skip time by x hours
  ["skipTime",{
    parseNumber (_this select 0) remoteExec ["skipTime"];
    }, "admin"] call CBA_fnc_registerChatCommand;

  //#kill string
  //kill selected player
  ["kill", {
    params ["_name"];
    // pick unit that matches given name
    // reports null when no or more than one unit was found
    private _fnc_findMatch = {
        params ["_name"];

        private _matches = [];

        {
            if ([_name, name _x] call BIS_fnc_inString) then {
                _matches pushBack _x;
            };
        } forEach ([] call CBA_fnc_players);

        if (count _matches == 1) exitWith {_matches select 0};
        objNull
    };
    private _unit = _name call _fnc_findMatch;
    _unit setDamage 1;
    }, "admin"] call CBA_fnc_registerChatCommand;

  //#tp string string
};
