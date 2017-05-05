["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;



if (hasInterface) then
	{
		[] execVM "wih\briefing.sqf";

		setViewDistance 2000;
		setObjectViewDistance 1800;

		player setVariable ["Ace_medical_medicClass", 1];

		debug_davis = false;

		// Load Player Position and Inventory
		call compilefinal preprocessFileLineNumbers "oo_pdw.sqf";
		[] spawn {
		_pdw = ["new", "profile"] call OO_PDW;

				["loadPlayer", player] call _pdw;
				["LoadInventory", ["TFAC-Morbus-pgear", player]] call _pdw;

		// Start player save loop (Clientside)
			while {true} do
			{
				sleep 5;
				 ["savePlayer", player] call _pdw;
				 ["saveInventory", ["TFAC-Morbus-pgear", player]] call _pdw;
			};
		};

	execVM "WIH\introhint.sqf";
	};
// [missionNamespace,"arsenalOpened",{ (_this select 0) displayAddEventHandler ["KeyDown",{(_this select 3) and {(_this select 1) in [19,24,31,46]}}]; {((_this select 0) displayCtrl _x) ctrlEnable false;} forEach [44146,44147,44148,44149,44150]; }] call BIS_fnc_addScriptedEventHandler;