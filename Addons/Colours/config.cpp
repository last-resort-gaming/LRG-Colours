#include "script_component.hpp"

class CfgPatches
{
	class LRG_Colours
	{
		author = AUTHOR;
		name = NAME;
		url = URL;
		units[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
		version = VERSION;
		authors[] = {"Mokka"};
		weapons[] = {};
	};
};

class CfgMods {
	class LRG_Fundamentals {
		dir = "@LRG Colours";
		name = "LRG Colours";

		author = "LastResortGaming";

		hidePicture = 0;
		hideName = 1;

		description = "LRG Colours provides standardized marker colours that are in use during LRG Official Operations.";
		overview = "LRG Colours provides standardized marker colours that are in use during LRG Official Operations.";

		picture = LOGO_PATH;
		logo = LOGO_PATH;
		logoOver = LOGO_PATH;
		logoSmall = LOGO_PATH;
	};
};

class CfgMarkerColors
{
	class Default
	{
		scope = 1;
	};
	class ColorBlack: Default
	{
		name = "$STR_CFG_MARKERCOL_BLACK";
		color[] = {0,0,0,1};
		scope = 2;
	};
	class ColorRed: Default
	{
		name = "Platoon";
		color[] = {1,0,0,1};
		scope = 2;
	};
	class ColorPink: Default
	{
		name = "Command";
		color[] = {1,0.412,0.706,1};
		Scope = 2;
	};
	class ColorBlue: Default
	{
		name = "1 Section";
		color[] = {0,0,1,1};
		scope = 2;
	};
	class ColorGreen: Default
	{
		name = "2 Section";
		color[] = {0,1,0,1};
		scope = 2;
	};
	class ColorKhaki: Default
	{
		name = "3 Section";
		color[] = {0.471,0.318,0.663,1};
		Scope = 2;
	};
	class ColorYellow: Default
	{
		name = "909 EAW";
		color[] = {1,0.647,0,1};
		Scope = 2;
	};
	class ColorAqua: Default
	{
		name = "Support";
		color[] = {0,1,1,1};
		Scope = 2;
	};
	class ColorBrown: Default
	{
		name = "BLUFOR";
		color[] = {0,0.3,0.6,1};
		Scope = 2;
	};
	class ColorGrey: Default
	{
		name = "OPFOR";
		color[] = {0.5,0,0,1};
		scope = 2;
	};
	class ColorWhite: Default
	{
		scope = 1;
	};
	class ColorWEST: Default
	{
		scope = 1;
	};
	class ColorEAST: Default
	{
		scope = 1;
	};
	class ColorGUER: Default
	{
		scope = 1;
	};
	class ColorCIV: Default
	{
		scope = 1;
	};
	class ColorUNKNOWN: Default
	{
		scope = 1;
	};
	class colorBLUFOR: ColorWEST
	{
		scope = 0;
	};
	class colorOPFOR: ColorEAST
	{
		scope = 0;
	};
	class colorIndependent: ColorGUER
	{
		scope = 0;
	};
	class colorCivilian: ColorCIV
	{
		scope = 0;
	};
};