class CfgPatches
{
	class ctab_messaging
	{
		name="messaging";
		units[]={};
		weapons[]={};
		requiredVersion=2.02;
		requiredAddons[]=
		{
			"ctab_main",
			"ctab_core"
		};
		author="GrueArbre";
		version=2.8;
		versionStr="2.8";
		versionAr[]={2,8,0,6};
	};
};
class Extended_PreStart_EventHandlers
{
	class ctab_messaging
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\messaging\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ctab_messaging
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\messaging\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ctab_messaging
	{
		init="call compile preprocessFileLineNumbers '\z\ctab\addons\messaging\XEH_postInit.sqf'";
	};
};
class RscEdit;
class RscText;
class RscControlsGroupNoScrollbars;
class RscListBox;
class cTab_RscButton;
class ctab_messaging_templateDialog
{
	idd=990560;
	objects[]={};
};
class ctab_messaging_templateFooter: RscControlsGroupNoScrollbars
{
	h="(pixelH * pixelGridNoUIScale * 0.25) * 70";
	w=1;
	x=0;
	y=0;
	class controls
	{
		class message: RscText
		{
			text="$STR_ctab_messaging_GeneratedMessage";
			x="0.5 + ((pixelW * pixelGridNoUIScale * 0.25) * 2)";
			y=0;
			w="0.5 - ((pixelW * pixelGridNoUIScale * 0.25)*4)";
			h="(pixelH * pixelGridNoUIScale * 0.25) * 8";
			color[]={0.5,0.5,0.5,1};
		};
		class textPreview: RscEdit
		{
			idc=990561;
			style=16;
			canModify=0;
			x="0.5 + ((pixelW * pixelGridNoUIScale * 0.25) * 2)";
			y="(pixelH * pixelGridNoUIScale * 0.25) * 8";
			w="0.5 - ((pixelW * pixelGridNoUIScale * 0.25)*4) - 0.021";
			h="(pixelH * pixelGridNoUIScale * 0.25) * 60";
		};
		class recipientLabel: RscText
		{
			text="$STR_ctab_messaging_Recipient";
			x="((pixelW * pixelGridNoUIScale * 0.25)*2)";
			y="0";
			w="0.5 - ((pixelW * pixelGridNoUIScale * 0.25)*4)";
			h="(pixelH * pixelGridNoUIScale * 0.25) * 8";
		};
		class recipientSelect: RscListBox
		{
			idc=990562;
			style=32;
			x="((pixelW * pixelGridNoUIScale * 0.25)*2)";
			y="(pixelH * pixelGridNoUIScale * 0.25) * 8";
			w="0.5 - ((pixelW * pixelGridNoUIScale * 0.25)*4)";
			h="(pixelH * pixelGridNoUIScale * 0.25) * 30";
		};
		class attachementLabel: RscText
		{
			text="$STR_ctab_messaging_Attachements";
			x="((pixelW * pixelGridNoUIScale * 0.25)*2)";
			y="(pixelH * pixelGridNoUIScale * 0.25) * 38";
			w="0.5 - ((pixelW * pixelGridNoUIScale * 0.25)*4)";
			h="(pixelH * pixelGridNoUIScale * 0.25) * 8";
		};
		class attachementSelect: RscListBox
		{
			idc=990565;
			x="((pixelW * pixelGridNoUIScale * 0.25)*2)";
			y="(pixelH * pixelGridNoUIScale * 0.25) * 46";
			w="0.5 - ((pixelW * pixelGridNoUIScale * 0.25)*4)";
			h="(pixelH * pixelGridNoUIScale * 0.25) * 12";
			canModify=0;
		};
		class sendButton: cTab_RscButton
		{
			idc=990563;
			text="$STR_ctab_messaging_Send";
			x="0.25 + ((pixelW * pixelGridNoUIScale * 0.25)*2)";
			y="(pixelH * pixelGridNoUIScale * 0.25) * 60";
			w="0.25 - ((pixelW * pixelGridNoUIScale * 0.25)*4)";
			h="(pixelH * pixelGridNoUIScale * 0.25) * 8";
			onButtonClick="_this call ctab_messaging_fnc_btnSendTemplatedMessage";
		};
		class cancelButton: cTab_RscButton
		{
			idc=990564;
			text="$STR_ctab_messaging_Cancel";
			x="((pixelW * pixelGridNoUIScale * 0.25)*2)";
			y="(pixelH * pixelGridNoUIScale * 0.25) * 60";
			w="0.25 - ((pixelW * pixelGridNoUIScale * 0.25)*4)";
			h="(pixelH * pixelGridNoUIScale * 0.25) * 8";
			onButtonClick="[_this # 0] call ctab_messaging_fnc_closeTemplateUI";
		};
	};
};
