class CfgPatches
{
	class LujkeZeusMusic
	{
		name = "Lujkes Custom Music";
		author = "Lujke";
		requiredVersion = 1.00;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
      	        worlds[] = {};
	};
};

class CfgMusicClasses
{
	class MyMusicClass1
	{
		displayName = "SFP Music";
	};
};

class CfgMusic
{
	
/*
	class 
	{
		name = "";
		sound[] = {"\addons\.ogg",1,1};
		duration=;
		musicClass = "MyMusicClass1";
	};	
*/
	
	class weAreOverwatch
	{
		name = "We Are Overwatch";
		sound[] = {"\addons\We Are Overwatch.ogg",1,1};
		duration=50;
		musicClass = "MyMusicClass1";
	};
	
	class chant
	{
		name = "Gregorian Chant";
		sound[] = {"\addons\gregorian-chant-by-kevin-macleod.ogg",1,1};
		duration=184;
		musicClass = "MyMusicClass1";
	};
	
	class heroDown
	{
		name = "Hero Down";
		sound[] = {"\addons\hero-down-by-kevin-macleod.ogg",1,1};
		duration=210;
		musicClass = "MyMusicClass1";
	};
	
	class hitman
	{
		name = "Hitman";
		sound[] = {"\addons\hitman-by-kevin-macleod.ogg",1,1};
		duration=200;
		musicClass = "MyMusicClass1";
	};
	
	class instinct
	{
		name = "Instinct";
		sound[] = {"\addons\instinct-bensound.ogg",1,1};
		duration=204;
		musicClass = "MyMusicClass1";
	};	
	
	class showdown
	{
		name = "Showdown";
		sound[] = {"\addons\showdown-by-kevin-macleod.ogg",1,1};
		duration=73;
		musicClass = "MyMusicClass1";
	};	
	
	class descent
	{
		name = "The Descent";
		sound[] = {"\addons\the-descent-by-kevin-macleod.ogg",1,1};
		duration=191;
		musicClass = "MyMusicClass1";
	};	
	
	class gate
	{
		name = "Gate Theme Song";
		sound[] = {"\addons\gate.ogg",1,1};
		duration=191;
		musicClass = "MyMusicClass1";
	};	
	
	class punch
	{
		name = "One Punch Man Intro";
		sound[] = {"\addons\one punch man.ogg",1,1};
		duration=191;
		musicClass = "MyMusicClass1";
	};	
	
	class advance
	{
		name = "Advance Australia";
		sound[] = {"\addons\advance australia.ogg",1,1};
		duration=191;
		musicClass = "MyMusicClass1";
	};
	
	class aidan
	{
		name = "Light of Aidan";
		sound[] = {"\addons\Light of Aidan.ogg",1,1};
		duration=184;
		musicClass = "MyMusicClass1";
	};
/*	
	class arrival
	{
		name = "Arrival";
		sound[] = {"\addons\Arrival - Halo 4.ogg",1,1};
		duration=334;
		musicClass = "MyMusicClass1";
	};
	
	class bioUnit
	{
		name = "Bio Unit";
		sound[] = {"\addons\Bio_Unit - Kevin Macleod.ogg",1,1};
		duration=209;
		musicClass = "MyMusicClass1";
	};
	
	class surf
	{
		name = "Charlie Don't Surf";
		sound[] = {"\addons\Charlie Don't Surf - COD4.ogg",1,1};
		duration=100;
		musicClass = "MyMusicClass1";
	};
	
	class daredevil
	{
		name = "Daredevil";
		sound[] = {"\addons\Daredevil - ACE combat.ogg",1,1};
		duration=307;
		musicClass = "MyMusicClass1";
	};
	
	class maze
	{
		name = "Enter the Maze";
		sound[] = {"\addons\Enter the Maze - Kevin Macleod.ogg",1,1};
		duration=178;
		musicClass = "MyMusicClass1";
	};
	
	class ghostsOfReach
	{
		name = "Ghosts of Reach";
		sound[] = {"\addons\Ghosts of Reach - Halo legends.ogg",1,1};
		duration=82;
		musicClass = "MyMusicClass1";
	};
	
	class amberClad
	{
		name = "In Amber Clad";
		sound[] = {"\addons\In Amber Clad - Halo 2.ogg",1,1};
		duration=99;
		musicClass = "MyMusicClass1";
	};
	
	class timeComing
	{
		name = "Long Time Coming";
		sound[] = {"\addons\Long Time Coming - Kevin Macleod.ogg",1,1};
		duration=274;
		musicClass = "MyMusicClass1";
	};
		
	class machine
	{
		name = "Machines and Might";
		sound[] = {"\addons\Machines and Might - Halo legends.ogg",1,1};
		duration=62;
		musicClass = "MyMusicClass1";
	};

	class finalEffort
	{
		name = "One Final Effort - Extended";
		sound[] = {"\addons\One Final Effort - Extended - Halo 3.ogg",1,1};
		duration=240;
		musicClass = "MyMusicClass1";
	};
	
	class perchanceDream
	{
		name = "Perchance To Dream";
		sound[] = {"\addons\Perchance To Dream - Halo OST.ogg",1,1};
		duration=116;
		musicClass = "MyMusicClass1";
	};
	
	class peril
	{
		name = "Peril";
		sound[] = {"\addons\Peril - Halo 2.ogg",1,1};
		duration=166;
		musicClass = "MyMusicClass1";
	};
	
	class phantom
	{
		name = "Phantom from Space";
		sound[] = {"\addons\Phantom from Space - Kevin Macleod.ogg",1,1};
		duration=156;
		musicClass = "MyMusicClass1";
	};
	
	class SCOTLAND
	{
		name = "SCOTLAND THE BRAVE";
		sound[] = {"\addons\SCOTLAND THE BRAVE.ogg",1,1};
		duration=163;
		musicClass = "MyMusicClass1";
	};
	
	class spirit
	{
		name = "Spirit of Fire";
		sound[] = {"\addons\Spirit of Fire - Halo wars.ogg",1,1};
		duration=131;
		musicClass = "MyMusicClass1";
	};
	
	class takeLead
	{
		name = "Take the Lead";
		sound[] = {"\addons\Take the Lead - Kevin Macleod.ogg",1,1};
		duration=224;
		musicClass = "MyMusicClass1";
	};
	
	class aTeam
	{
		name = "The A-Team Theme";
		sound[] = {"\addons\The A-Team Full Theme - The Daniel Caine Orchestra.ogg",1,1};
		duration=192;
		musicClass = "MyMusicClass1";
	};
	
	class gunAtUniverse
	{
		name = "The Gun Pointed At The Head Of The Universe";
		sound[] = {"\addons\The Gun Pointed At The Head Of The Universe - Halo OST.ogg",1,1};
		duration=146;
		musicClass = "MyMusicClass1";
	};
	
	class storm
	{
		name = "The Storm";
		sound[] = {"\addons\The Storm - Halo 3.ogg",1,1};
		duration=128;
		musicClass = "MyMusicClass1";
	};
	
	class unforgotten
	{
		name = "Unforgotten";
		sound[] = {"\addons\Unforgotten - Halo 2.ogg",1,1};
		duration=131;
		musicClass = "MyMusicClass1";
	};
	
	class zero
	{
		name = "Zero";
		sound[] = {"\addons\Zero - ACE combat.ogg",1,1};
		duration=295;
		musicClass = "MyMusicClass1";
	};
*/
};
