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
	class ColorGrey: Default
	{
		name = "Command";
		color[] = {0.5, 0.5, 0.5, 1};
		scope = 2;
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
	class ColorPink: Default
	{
		name = "909 EAW";
		color[] = {1,0.412,0.706,1};
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
		name = "Brown";
		color[] = {0.5, 0.25, 0, 1};
	};
	class ColorOrange: Default
	{
		name = "Orange";
		color[] = {0.85, 0.4, 0, 1};
	};
	class ColorYellow: Default
	{
		name = "Yellow";
		color[] = {0.85, 0.85, 0, 1};
	};
	class ColorWhite: Default
	{
		name = "White";
		color[] = {1, 1, 1, 1};
		scope = 2;
	};
	class ColorWEST: Default
	{
		name = "BLUFOR";
		color[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])", "(profilenamespace getvariable ['Map_BLUFOR_G',1])", "(profilenamespace getvariable ['Map_BLUFOR_B',1])", "(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
		scope = 2;
	};
	class ColorEAST: Default
	{
		name = "OPFOR";
		color[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])", "(profilenamespace getvariable ['Map_OPFOR_G',1])", "(profilenamespace getvariable ['Map_OPFOR_B',1])", "(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
		scope = 2;
	};
	class ColorGUER: Default
	{
		name = "Independent";
		color[] = {"(profilenamespace getvariable ['Map_Independent_R',0])", "(profilenamespace getvariable ['Map_Independent_G',1])", "(profilenamespace getvariable ['Map_Independent_B',1])", "(profilenamespace getvariable ['Map_Independent_A',0.8])"};
		scope = 2;
	};
	class ColorCIV: Default
	{
		name = "Civilian";
		color[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])", "(profilenamespace getvariable ['Map_Civilian_G',1])", "(profilenamespace getvariable ['Map_Civilian_B',1])", "(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
		scope = 2;
	};
	class ColorUNKNOWN: Default
	{
		name = "Unknown side";
		color[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])", "(profilenamespace getvariable ['Map_Unknown_G',1])", "(profilenamespace getvariable ['Map_Unknown_B',1])", "(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
		scope = 2;
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