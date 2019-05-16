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
		displayName = "Lujke's Custom Music";
	};
};

class CfgMusic
{
	class weAreOverwatch
	{
		name = "We Are Overwatch";
		sound[] = {"addons\We Are Overwatch.ogg",1,1};
		duration=50;
		musicClass = "MyMusicClass1";
	};
	
	class chant
	{
		name = "Gregorian Chant";
		sound[] = {"addons\gregorian-chant-by-kevin-macleod.ogg",1,1};
		duration=184;
		musicClass = "MyMusicClass1";
	};
	
	class heroDown
	{
		name = "Hero Down";
		sound[] = {"addons\hero-down-by-kevin-macleod.ogg",1,1};
		duration=210;
		musicClass = "MyMusicClass1";
	};
	
	class hitman
	{
		name = "Hitman";
		sound[] = {"addons\hitman-by-kevin-macleod.ogg",1,1};
		duration=200;
		musicClass = "MyMusicClass1";
	};
	
	class instinct
	{
		name = "Instinct";
		sound[] = {"addons\instinct-bensound.ogg",1,1};
		duration=204;
		musicClass = "MyMusicClass1";
	};	
	
	class showdown
	{
		name = "Showdown";
		sound[] = {"addons\showdown-by-kevin-macleod.ogg",1,1};
		duration=73;
		musicClass = "MyMusicClass1";
	};	
	
	class descent
	{
		name = "The Descent";
		sound[] = {"addons\the-descent-by-kevin-macleod.ogg",1,1};
		duration=191;
		musicClass = "MyMusicClass1";
	};	
	
	class gate
	{
		name = "Gate Theme Song";
		sound[] = {"addons\gate.ogg",1,1};
		duration=191;
		musicClass = "MyMusicClass1";
	};	
	
	class punch
	{
		name = "One Punch Man Intro";
		sound[] = {"addons\one punch man.ogg",1,1};
		duration=191;
		musicClass = "MyMusicClass1";
	};	
	
	class advance
	{
		name = "Advance Australia";
		sound[] = {"addons\advance australia.ogg",1,1};
		duration=191;
		musicClass = "MyMusicClass1";
	};
};
