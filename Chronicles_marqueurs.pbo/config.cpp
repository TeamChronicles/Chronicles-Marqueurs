////////////////////////////////////////////////////////////////////
//				   	Team Chronicles								  //
//					 By Jack Lania								  //
//			SiteWeb : http://team-chronicles.fr 				  //
////////////////////////////////////////////////////////////////////

#define _ARMA_

enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class chronicles_marqueurs
	{
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMarkerClasses
{
	class chronicles_marqueurs_class
	{
		displayName = "Ch Markers (Chronicles)";
	};
};
class CfgMarkers
{
	class chronicles_mark_chronicles
	{
		name = "icon Chronicles";
		icon = "\chronicles_marqueurs\icons\chronicles_marqueurs_logo.pac";
		color[] = {1,1,1,1};
		size = 32;
		scope = 2;
		scopeCurator = 2;
		shadow = 1;
		markerClass = "chronicles_marqueurs_class";
	};
};
