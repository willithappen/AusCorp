//--- Disable Saving
execVM "R3F_LOG\init.sqf";
execVM "WIH\chatCommands.sqf";

enableSaving [false, false];

adv_aceCPR_quotient = 2;
adv_aceCPR_onlyDoctors = 0;

/*

CAMERA = {
	switch (_this) do {

                //Key Y
		case 55: {
			nul = player exec "camera.sqs";
		};
	};
};

waituntil {!isnull (finddisplay 46)};
(findDisplay 46) displayAddEventHandler ["KeyDown","_this select 1 call CAMERA;false;"];

*/
