if (!(hasInterface) or (isDedicated)) exitWith {};
[] spawn
{
	waitUntil { !isNull findDisplay 46 };
	(findDisplay 46) displayAddEventHandler ["KeyDown", {
		_key = _this select 1;
		if (
		((_key in actionKeys "MoveBack") or (_key in actionKeys "TurnLeft") or (_key in actionKeys "TurnRight")) and 
		(
		(animationState player == "ARMA_AlternativeRunWithLauncher") or 
		(animationState player == "ARMA_AlternativePistol") or 
		(animationState player == "ARMA_AlternativeRun_Water_Light") or 
		(animationState player == "ARMA_AlternativeRun") or 
		(animationState player == "ARMA_AlternativeRunLowered") or 
		(animationState player == "ARMA_AlternativeRun_Water_Heavy") or 
		(animationState player == "ARMA_AlternativeRun_WW2Style")
		)
		) then {
			switch true do {
				case (primaryWeapon player == currentWeapon player && ((animationState player == "ARMA_AlternativeRun_Water_Heavy") || (animationState player == "ARMA_AlternativeRun_Water_Light"))): {player playMoveNow "AmovPercMstpSrasWrflDnon";};
				case (primaryWeapon player == currentWeapon player): {player playMoveNow "ARMA_AlternativeRun_MainWeap_Stop";};
				case (currentWeapon player == secondaryWeapon player): {player playMoveNow "AmovPercMstpSrasWlnrDnon";};
				case (currentWeapon player == handgunWeapon player): {player playMoveNow "AmovPercMstpSrasWpstDnon";};
			};
		};
	}];



	(findDisplay 46) displayAddEventHandler ["KeyDown", {
		_key = _this select 1;
		if (
		(_key in actionKeys "MoveDown") and 
		( 
		(animationState player == "ARMA_AlternativeRunWithLauncher") or 
		(animationState player == "ARMA_AlternativePistol") or 
		(animationState player == "ARMA_AlternativeRun_Water_Light") or 
		(animationState player == "ARMA_AlternativeRun") or 
		(animationState player == "ARMA_AlternativeRunLowered") or 
		(animationState player == "ARMA_AlternativeRun_Water_Heavy") or 
		(animationState player == "ARMA_AlternativeRun_WW2Style")
		)
		) then {
			switch true do {
				case (primaryWeapon player == currentWeapon player): {player playMoveNow "AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon";};
				case (currentWeapon player == secondaryWeapon player): {player playMoveNow "AmovPknlMSTPSrasWlnrDnon";};
				case (currentWeapon player == handgunWeapon player): {player playMoveNow "AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon_2";};
			};
		};
	}];

	(findDisplay 46) displayAddEventHandler ["KeyDown", {
		_key = _this select 1;
		if (
		(_key in actionKeys "MoveUp") and 
		(
		(animationState player == "ARMA_AlternativeRunWithLauncher") or 
		(animationState player == "ARMA_AlternativePistol") or 
		(animationState player == "ARMA_AlternativeRun_Water_Light") or 
		(animationState player == "ARMA_AlternativeRun") or 
		(animationState player == "ARMA_AlternativeRunLowered") or 
		(animationState player == "ARMA_AlternativeRun_Water_Heavy") or 
		(animationState player == "ARMA_AlternativeRun_WW2Style")
		)
		) then {
			switch true do {
				case (primaryWeapon player == currentWeapon player): {player playMoveNow "AmovPercMevaSrasWrflDf_AmovPknlMstpSrasWrflDnon";};
				case (currentWeapon player == secondaryWeapon player): {player playMoveNow "AmovPknlMSTPSrasWlnrDnon";};
				case (currentWeapon player == handgunWeapon player): {player playMoveNow "AmovPknlMSTPSrasWPSTDnon";};
			};
		};
	}];


	[] spawn {
		while {true} do {
			if ((animationState player == "ARMA_AlternativeRun_Water_Light") or (animationState player == "ARMA_AlternativeRun_Water_Heavy") or (animationState player == "ARMA_AlternativeRun_WW2Style") or (animationState player == "ARMA_AlternativeRunWithLauncher") or (animationState player == "ARMA_AlternativeRun") or (animationState player == "ARMA_AlternativePistol") or (animationState player == "ARMA_AlternativeRunLowered")) then {
				switch true do {
					case (((getPosASL player select 2) < -1.45) or (((getStamina player) <= 3) and !(animationState player == "ARMA_AlternativeRun_Water_Light") and !(animationState player == "ARMA_AlternativeRun_Water_Heavy")) or ((player getHit "legs") >= 0.5) or !(isSprintAllowed player) or !(isNull(findDisplay 312))): {
						switch true do {
							case (primaryWeapon player == currentWeapon player && ((animationState player == "ARMA_AlternativeRun_Water_Heavy") || (animationState player == "ARMA_AlternativeRun_Water_Light"))): {player playMoveNow "AmovPercMstpSrasWrflDnon";};
							case (primaryWeapon player == currentWeapon player): {player playMoveNow "ARMA_AlternativeRun_MainWeap_Stop";};
							case (currentWeapon player == secondaryWeapon player): {player playMoveNow "AmovPercMstpSrasWlnrDnon";};
							case (currentWeapon player == handgunWeapon player): {player playMoveNow "AmovPercMstpSrasWpstDnon";};
						};
					};
					case (((getPosASL player select 2) < -0.6) and ((animationState player == "ARMA_AlternativeRun_WW2Style") or (animationState player == "ARMA_AlternativeRunWithLauncher") or (animationState player == "ARMA_AlternativeRun") or (animationState player == "ARMA_AlternativePistol") or (animationState player == "ARMA_AlternativeRunLowered"))): {
							_weapInfo = getNumber (configfile >> "CfgMagazines" >> currentMagazine player >> "count");
							if (_weapInfo >= 40) then {
								player playMoveNow "ARMA_AlternativeRun_Water_Heavy";
							}else{
								player playMoveNow "ARMA_AlternativeRun_Water_Light";
							};
					};
					case (((getPosASL player select 2) > -0.6) and ((animationState player == "ARMA_AlternativeRun_Water_Light") or (animationState player == "ARMA_AlternativeRun_Water_Heavy"))): {
							_weapInfo = getNumber (configfile >> "CfgMagazines" >> currentMagazine player >> "count");
							switch true do {
								case (_weapInfo <= 10): {player playMoveNow WBK_AR_WhatAnimationWillBeUsed_BOLT;};
								case (_weapInfo >= 40): {player playMoveNow WBK_AR_WhatAnimationWillBeUsed_MG;};
								default {player playMoveNow WBK_AR_WhatAnimationWillBeUsed_Default;};
							};
					};
				};
			};
			uisleep 0.1;
		};
	};
};