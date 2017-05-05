if(isDedicated) exitWith{};
if (hasInterface) then {
	waitUntil {!isNull player};

    [] spawn {
		private ["_date","_dateh","_datem","_datec", "_name","_playercount"];
		_date = date;
		_dateh = _date select 3;
		_datem = _date select 4;
		_datec = format ["%1:%2",_dateh,_datem];
		_name = name player;
		_playercount = count AllPlayers;

		_title = "<t size='1.2' color='#e5b348' shadow='1' shadowColor='#000000'>Operation Morbus wk4</t>
		<img color='#ffffff' image='images\img_line_ca.paa' align='left' size='0.60' /><br/>";

		_title2 = "<t size='1.2' color='#e5b348' shadow='1' shadowColor='#000000'>Statistics</t>
		<img color='#ffffff' image='images\img_line_ca.paa' align='left' size='0.60' /><br/>";

        _text = format["%1<t>Welcome %2...<br/>* Regroup with your Section<br/>* Read the mission briefing<br/>* Shoulder your weapon<br/>* Check your radio frequency</t>
		<br/><br/>%3Mission Time: %4<br/>Total Online Players: %5",_title, _name,_title2,_datec,_playercount];

        ["openSideTop",1.4] call ALIVE_fnc_displayMenu;
        ["setSideTopText",_text] call ALIVE_fnc_displayMenu;
    };
};