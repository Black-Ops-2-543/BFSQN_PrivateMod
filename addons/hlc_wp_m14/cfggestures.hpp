class CfgMovesBasic {
	class DefaultDie;

	class ManActions {
		HLC_GestureReload_M14 = "HLC_GestureReload_M14"; 
		HLC_GestureReload_M14_X14 = "HLC_GestureReload_M14_X14";
		HLC_GestureReload_M14_Tactical = "HLC_GestureReload_M14_Tactical";
		HLC_GestureReload_M14_X14_Tactical = "HLC_GestureReload_M14_X14_Tactical";

	};

	class Actions {
		class NoActions : ManActions {
			HLC_GestureReload_M14[] = { "HLC_GestureReload_M14", "Gesture" };
			HLC_GestureReload_M14_X14[] = { "HLC_GestureReload_M14_X14", "Gesture" };
			HLC_GestureReload_M14_Tactical[] = { "HLC_GestureReload_M14_Tactical", "Gesture" };
			HLC_GestureReload_M14_X14_Tactical[] = { "HLC_GestureReload_M14_X14_Tactical", "Gesture" };

		};
		class RifleBaseStandActions;
		class RifleProneActions : RifleBaseStandActions
		{
			HLC_GestureReload_M14[] = { "HLC_GestureReload_M14_Prone", "Gesture" };
			HLC_GestureReload_M14_X14[] = { "HLC_GestureReload_M14_X14_Prone", "Gesture" };
			HLC_GestureReload_M14_Tactical[] = { "HLC_GestureReload_M14_Tactical_Prone", "Gesture" };
			HLC_GestureReload_M14_X14_Tactical[] = { "HLC_GestureReload_M14_X14_Tactical_Prone", "Gesture" };



		};
		  //Commented out
		  //reason: Does not work. 
		  //God it's crushing how close to working having dedicated deployed weapon reloads are 
		class DeployedProneActions : RifleProneActions
		{
			HLC_GestureReload_M14[] = { "HLC_GestureReload_M14_Deployed", "Gesture" };
			HLC_GestureReload_M14_X14[] = { "HLC_GestureReload_M14_X14_Prone_Deployed", "Gesture" };
			HLC_GestureReload_M14_Tactical[] = { "HLC_GestureReload_M14_Tactical_Prone_Deployed", "Gesture" };
			HLC_GestureReload_M14_X14_Tactical[] = { "HLC_GestureReload_M14_X14_Tactical_Prone_Deployed", "Gesture" };


		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions : RifleAdjustProneBaseActions
		{
			HLC_GestureReload_M14[] = { "HLC_GestureReload_M14_Context", "Gesture" };
			HLC_GestureReload_M14_X14[] = { "HLC_GestureReload_M14_X14_Context", "Gesture" };
			HLC_GestureReload_M14_Tactical[] = { "HLC_GestureReload_M14_Tactical_Context", "Gesture" };
			HLC_GestureReload_M14_X14_Tactical[] = { "HLC_GestureReload_M14_X14_Tactical_Context", "Gesture" };


		};
		class RifleAdjustLProneActions : RifleAdjustProneBaseActions
		{
			HLC_GestureReload_M14[] = { "HLC_GestureReload_M14_Context", "Gesture" };
			HLC_GestureReload_M14_X14[] = { "HLC_GestureReload_M14_X14_Context", "Gesture" };
			HLC_GestureReload_M14_Tactical[] = { "HLC_GestureReload_M14_Tactical_Context", "Gesture" };
			HLC_GestureReload_M14_X14_Tactical[] = { "HLC_GestureReload_M14_X14_Tactical_Context", "Gesture" };

		};
		class RifleAdjustFProneActions : RifleAdjustProneBaseActions
		{
			HLC_GestureReload_M14[] = { "HLC_GestureReload_M14", "Gesture" };
			HLC_GestureReload_M14_X14[] = { "HLC_GestureReload_M14_X14", "Gesture" };
			HLC_GestureReload_M14_Tactical[] = { "HLC_GestureReload_M14_Tactical", "Gesture" };
			HLC_GestureReload_M14_X14_Tactical[] = { "HLC_GestureReload_M14_X14_Tactical", "Gesture" };

		};
	};
	};



class CfgGesturesMale {
	class Default;
	class GestureReloadBase;

	class States {
		class HLC_GestureReload_M14 :Default
		{
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine.rtm";
			speed = -(125 / 30);
			looped = false;
			mask = "handsWeapon";
			canPullTrigger = 0;
			headBobStrength = 0.4;
			headBobMode = 2;
			rightHandIKCurve[] = {
				(76 / 125), 1,
				(79 / 125), 0,
				(111 / 125), 0,
				(116 / 125), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(7 / 125), 1,
				(11 / 125), 0,
				(74 / 125), 0,
				(78 / 125), 1
			};
		};
		class HLC_GestureReload_M14_Prone :Default
		{
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine_prone.rtm";
			speed = -(125 / 30);
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			canPullTrigger = 0;
			headBobMode = 2;
			rightHandIKCurve[] = {
				(5 / 125), 1,
				(8 / 125), 0,
				(111 / 125), 0,
				(115 / 125), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(1 / 125), 1,
				(125/125), 1
			};
			rightHandIKEnd = true;
		};
		class HLC_GestureReload_M14_Context : HLC_GestureReload_M14
		{
			mask = "NIA_handsWeapon_context_Toadie";
		};
		class HLC_GestureReload_M14_Deployed : HLC_GestureReload_M14_Prone
		{
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine_deployed.rtm";
			//mask = "NIA_handsWeapon_deployed_Toadie";
			rightHandIKCurve[] = {
				(76 / 125), 1,
				(79 / 125), 0,
				(111 / 125), 0,
				(116 / 125), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(7 / 125), 1,
				(11 / 125), 0,
				(74 / 125), 0,
				(78 / 125), 1
			};
		};

		class HLC_GestureReload_M14_X14 :HLC_GestureReload_M14
		{
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine.rtm";
			speed = -(125 / 30);
			rightHandIKCurve[] = {
				(76 / 125), 1,
				(79 / 125), 0,
				(111 / 125), 0,
				(116 / 125), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(7 / 125), 1,
				(11 / 125), 0,
				(74 / 125), 0,
				(78 / 125), 1
			};
		};
		class HLC_GestureReload_M14_X14_Prone :HLC_GestureReload_M14_Prone
		{
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine_prone.rtm";
			speed = -(125 / 30);
			rightHandIKCurve[] = {
			(5 / 125), 1,
			(8 / 125), 0,
			(111 / 125), 0,
			(115 / 125), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(1 / 125), 1,
				(125 / 125), 1
			};
		};
		class HLC_GestureReload_M14_X14_context :HLC_GestureReload_M14_X14
		{
			mask = "NIA_handsWeapon_context_Toadie";
		};
		class HLC_GestureReload_M14_X14_Prone_Deployed :HLC_GestureReload_M14_X14_Prone
		{
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine_deployed.rtm";
			rightHandIKCurve[] = {
				(76 / 125), 1,
				(79 / 125), 0,
				(111 / 125), 0,
				(116 / 125), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(7 / 125), 1,
				(11 / 125), 0,
				(74 / 125), 0,
				(78 / 125), 1
			};
		};

		class HLC_GestureReload_M14_Tactical :HLC_GestureReload_M14
		{
			speed = -(92 / 30);
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine_Tactical.rtm";
			rightHandIKCurve[] = {
				(1 / 92), 1,
				(92 / 92), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(7 / 92), 1,
				(11 / 92), 0,
				(74 / 92), 0,
				(84 / 92), 1
			};
		};
		class HLC_GestureReload_M14_Tactical_Prone :HLC_GestureReload_M14_Prone
		{
			speed = -(92 / 30);
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine_Tactical_prone.rtm";
			rightHandIKCurve[] = {
				(5 / 92), 1,
				(8 / 92), 0,
				(76 / 92), 0,
				(82 / 92), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(1 / 125), 1,
				(125 / 125), 1
			};
		};
		class HLC_GestureReload_M14_Tactical_context :HLC_GestureReload_M14_Tactical
		{
			mask = "NIA_handsWeapon_context_Toadie";
		};
		class HLC_GestureReload_M14_Tactical_Prone_Deployed :HLC_GestureReload_M14_Tactical_Prone
		{
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_reloadmagazine_Tactical_deployed.rtm";
			rightHandIKCurve[] = {
				(1 / 92), 1,
				(92 / 92), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(7 / 92), 1,
				(11 / 92), 0,
				(74 / 92), 0,
				(84 / 92), 1
			};
		};

		class HLC_GestureReload_M14_X14_Tactical :HLC_GestureReload_M14
		{
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine_Tactical.rtm";
			speed = -(92 / 30);
			rightHandIKCurve[] = {
				(1 / 92), 1,
				(92 / 92), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(7 / 92), 1,
				(11 / 92), 0,
				(74 / 92), 0,
				(84 / 92), 1
			};
		};
		class HLC_GestureReload_M14_X14_Tactical_Prone :HLC_GestureReload_M14_Prone
		{
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine_Tactical_prone.rtm";
			speed = -(92 / 30);
			rightHandIKCurve[] = {
				(5 / 92), 1,
				(8 / 92), 0,
				(76 / 92), 0,
				(82 / 92), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(1 / 125), 1,
				(125 / 125), 1
			};
		};
		class HLC_GestureReload_M14_X14_Tactical_context :HLC_GestureReload_M14_X14_Tactical
		{
			mask = "NIA_handsWeapon_context_Toadie";
		};
		class HLC_GestureReload_M14_X14_Tactical_Prone_Deployed :HLC_GestureReload_M14_X14_Tactical_Prone
		{
			file = "hlc_wp_m14\gesture\newgesture\NIA_M14_X14_reloadmagazine_Tactical_deployed.rtm";
			rightHandIKCurve[] = {
				(1 / 92), 1,
				(92 / 92), 1
			};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = {
				(7 / 92), 1,
				(11 / 92), 0,
				(74 / 92), 0,
				(84 / 92), 1
			};
		};

	};
	class BlendAnims
	{
		//NIA_handsWeapon_deployed_Toadie[] = { "head",0,"neck1",0,"neck",0,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0,"Spine1",0,"Spine2",0,"Spine3",1 };
	};
};
