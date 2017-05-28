// Set player position to group leader in case of JIP or DC

_unit = _this select 1;
_sqleader = leader group _unit;
_unit setVehiclePosition [getPos _sqleader, [], 10];