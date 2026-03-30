WBK_AlternativeRunning_StartMoving = {
if (
(getText (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _this >> "actions") == "MoveWithInjuredManCarrierRflStill") or
(getText (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _this >> "actions") == "MoveWithInjuredManCarrierNonStill") or
(getText (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _this >> "actions") == "MoveWithInjuredManCarrierPstStill") or
(getText (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _this >> "actions") == "MoveWithInjuredManDraggerRfl") or
(getText (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _this >> "actions") == "MoveWithInjuredManDraggerPst") or
(getText (configfile >> "CfgMovesMaleSdr" >> "States" >> animationState _this >> "actions") == "MoveWithInjuredManDraggerNon")
) exitWith {};
if (
    (animationState _this == "ARMA_AlternativeRunWithLauncher") or 
	(animationState _this == "ARMA_AlternativePistol") or 
	(animationState _this == "ARMA_AlternativeRun_Water_Light") or 
	(animationState _this == "ARMA_AlternativeRun") or 
	(animationState _this == "ARMA_AlternativeRunLowered") or 
	(animationState _this == "ARMA_AlternativeRun_Water_Heavy") or 
	(animationState _this == "ARMA_AlternativeRun_WW2Style")
) exitWith {
    switch true do {
		case (primaryWeapon _this == currentWeapon _this && ((animationState _this == "ARMA_AlternativeRun_Water_Heavy") || (animationState _this == "ARMA_AlternativeRun_Water_Light"))): {player playMoveNow "AmovPercMstpSrasWrflDnon";};
	    case (primaryWeapon _this == currentWeapon _this): {_this playMoveNow "ARMA_AlternativeRun_MainWeap_Stop";};
		case (currentWeapon _this == secondaryWeapon _this): {_this playMoveNow "AmovPercMstpSrasWlnrDnon";};
		case (currentWeapon _this == handgunWeapon _this): {_this playMoveNow "AmovPercMstpSrasWpstDnon";};
	};
};
if (((_this getHit "legs") < 0.5) and (isSprintAllowed _this) and !(currentWeapon _this == "") and !(stance _this == "UNDEFINED") and (_this == vehicle _this) and ((getPosASL _this select 2) > -1.45) and ((getStamina _this) >= 3) and (currentWeapon _this != binocular _this) and (isNull(findDisplay 312))) then {
if (secondaryWeapon _this == currentWeapon _this) exitWith {player playMoveNow "ARMA_AlternativeRunWithLauncher";};
if (handgunWeapon _this == currentWeapon _this) exitWith {player playMoveNow "ARMA_AlternativePistol";};
switch true do {
	    case ((getPosASL _this select 2) < -0.6): {
	        _weapInfo = getNumber (configfile >> "CfgMagazines" >> currentMagazine _this >> "count");
	        if (_weapInfo >= 40) then {
	        	_this playMoveNow "ARMA_AlternativeRun_Water_Heavy";
	        }else{
	        	_this playMoveNow "ARMA_AlternativeRun_Water_Light";
	        };
	    };
	    default {
		    _weapInfo = getNumber (configfile >> "CfgMagazines" >> currentMagazine _this >> "count");
		    switch true do {
		        case (_weapInfo <= 10): {_this playMoveNow WBK_AR_WhatAnimationWillBeUsed_BOLT;};
				case (_weapInfo >= 40): {_this playMoveNow WBK_AR_WhatAnimationWillBeUsed_MG;};
				default {_this playMoveNow WBK_AR_WhatAnimationWillBeUsed_Default;};
		    };
		};
	};
};
};



[ 
    "AR_DefaultAnimationPlayed", 
    "LIST", 
    ["Animation for Automatic rifles","Animation that will be played for weapons that have between 10-40 rounds in their mag, thats the way how system detects weapon type."],
    "Alternative Running (Client Settings)",
    [["ARMA_AlternativeRun","ARMA_AlternativeRunLowered","ARMA_AlternativeRun_WW2Style"], ["Weapon Up", "Fast run (side to side)","WW2 Style"], 0],
    0,
    {   
        params ["_value"]; 
        WBK_AR_WhatAnimationWillBeUsed_Default = _value; 
    }
] call CBA_fnc_addSetting;


[ 
    "AR_DefaultAnimationPlayed_MG", 
    "LIST", 
    ["Animations for Machineguns","Animation that will be played for weapons that has more then 40 rounds in a mag, thats the way how system detects weapon type."],
    "Alternative Running (Client Settings)",
    [["ARMA_AlternativeRun","ARMA_AlternativeRunLowered","ARMA_AlternativeRun_WW2Style"], ["Weapon Up", "Fast run (side to side)","WW2 Style"], 1],
    0,
    {   
        params ["_value"]; 
        WBK_AR_WhatAnimationWillBeUsed_MG = _value; 
    }
] call CBA_fnc_addSetting;


[ 
    "AR_DefaultAnimationPlayed_Bolt", 
    "LIST", 
    ["Animation for Bolt-action rifles","Animation that will be played for weapons that has less then 10 rounds in a mag, thats the way how system detects weapon type."],
    "Alternative Running (Client Settings)",
    [["ARMA_AlternativeRun","ARMA_AlternativeRunLowered","ARMA_AlternativeRun_WW2Style"], ["Weapon Up", "Fast run (side to side)","WW2 Style"], 2],
    0,
    {   
        params ["_value"]; 
        WBK_AR_WhatAnimationWillBeUsed_BOLT = _value; 
    }
] call CBA_fnc_addSetting;