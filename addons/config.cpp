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
    class SFPMusic
    {
        displayName = "SFP Music";
    };

    class HaloCE
    {
        displayName = "SFP - Halo CE";
    };

    class Halo2
    {
        displayName = "SFP - Halo 2";
    };

    class Halo3
    {
        displayName = "SFP - Halo 3";
    };

    class Halo3ODST
    {
        displayName = "SFP - Halo 3 ODST";
    };

    class HaloReach
    {
        displayName = "SFP - Halo Reach";
    };

    class Infinite
    {
        displayName = "SFP - Halo Infinite";
    };

    class HaloOther
    {
        displayName = "SFP - Halo Other";
    };
};

class CfgMusic
{

/*
    class xxx
    {
        name = "";
        sound[] = {"\addons\music\.ogg",1,1};
        duration=;
        musicClass = "SFPMusic";
    };
 */


    //Infinite
    class endless
    {
        name = "Endless";
        sound[] = {"\addons\music\Halo Infinite\Endless.ogg",1,1};
        duration = 262;
        musicClass = "Infinite";
    };

    class knowMyLegend
    {
        name = "Endless";
        sound[] = {"\addons\music\Halo Infinite\Know My Legend.ogg",1,1};
        duration = 136;
        musicClass = "Infinite";
    };

    class theRoad
    {
        name = "The Road";
        sound[] = {"\addons\music\Halo Infinite\The Road.ogg",1,1};
        duration = 126;
        musicClass = "Infinite";
    };

    class weAreOverwatch
    {
        name = "We Are Overwatch";
        sound[] = {"\addons\music\other\We Are Overwatch.ogg",1,1};
        duration = 50;
        musicClass = "SFPMusic";
    };

    class chant
    {
        name = "Gregorian Chant";
        sound[] = {"\addons\music\other\gregorian-chant-by-kevin-macleod.ogg",1,1};
        duration = 184;
        musicClass = "SFPMusic";
    };

    class heroDown
    {
        name = "Hero Down";
        sound[] = {"\addons\music\other\hero-down-by-kevin-macleod.ogg",1,1};
        duration = 210;
        musicClass = "SFPMusic";
    };

    class hitman
    {
        name = "Hitman";
        sound[] = {"\addons\music\other\hitman-by-kevin-macleod.ogg",1,1};
        duration = 200;
        musicClass = "SFPMusic";
    };

    class instinct
    {
        name = "Instinct";
        sound[] = {"\addons\music\other\instinct-bensound.ogg",1,1};
        duration = 204;
        musicClass = "SFPMusic";
    };

    class showdown
    {
        name = "Showdown";
        sound[] = {"\addons\music\other\showdown-by-kevin-macleod.ogg",1,1};
        duration = 73;
        musicClass = "SFPMusic";
    };

    class descent
    {
        name = "The Descent";
        sound[] = {"\addons\music\other\the-descent-by-kevin-macleod.ogg",1,1};
        duration = 191;
        musicClass = "SFPMusic";
    };

    class gate
    {
        name = "Gate Theme Song";
        sound[] = {"\addons\music\other\gate.ogg",1,1};
        duration = 191;
        musicClass = "SFPMusic";
    };

    class advanceAus
    {
        name = "Advance Australia";
        sound[] = {"\addons\music\other\advance australia.ogg",1,1};
        duration = 191;
        musicClass = "SFPMusic";
    };

    class aidan
    {
        name = "Light of Aidan";
        sound[] = {"\addons\music\halo 3 odst\Light of Aidan.ogg",1,1};
        duration = 184;
        musicClass = "Halo3ODST";
    };

    class arrival
    {
        name = "Arrival";
        sound[] = {"\addons\music\halo other\Arrival - Halo 4.ogg",1,1};
        duration = 334;
        musicClass = "HaloOther";
    };

    class bioUnit
    {
        name = "Bio Unit";
        sound[] = {"\addons\music\other\Bio_Unit - Kevin Macleod.ogg",1,1};
        duration = 209;
        musicClass = "SFPMusic";
    };

    class surf
    {
        name = "Charlie Don't Surf";
        sound[] = {"\addons\music\other\Charlie Don't Surf - COD4.ogg",1,1};
        duration = 100;
        musicClass = "SFPMusic";
    };

    class daredevil
    {
        name = "Daredevil - Ace Combat";
        sound[] = {"\addons\music\other\Daredevil - ACE combat.ogg",1,1};
        duration = 307;
        musicClass = "SFPMusic";
    };

    class maze
    {
        name = "Enter the Maze";
        sound[] = {"\addons\music\other\Enter the Maze - Kevin Macleod.ogg",1,1};
        duration = 178;
        musicClass = "SFPMusic";
    };

    class ghostsOfReach
    {
        name = "Ghosts of Reach";
        sound[] = {"\addons\music\halo other\Ghosts of Reach - Halo legends.ogg",1,1};
        duration = 82;
        musicClass = "HaloOther";
    };

    class amberClad
    {
        name = "In Amber Clad";
        sound[] = {"\addons\music\halo 2\In Amber Clad - Halo 2.ogg",1,1};
        duration = 99;
        musicClass = "Halo2";
    };

    class timeComing
    {
        name = "Long Time Coming";
        sound[] = {"\addons\music\other\Long Time Coming - Kevin Macleod.ogg",1,1};
        duration = 274;
        musicClass = "SFPMusic";
    };

    class machine
    {
        name = "Machines and Might";
        sound[] = {"\addons\music\hlao other\Machines and Might - Halo legends.ogg",1,1};
        duration = 62;
        musicClass = "HaloOther";
    };

    class finalEffort
    {
        name = "One Final Effort - Extended";
        sound[] = {"\addons\music\halo 3\One Final Effort - Extended - Halo 3.ogg",1,1};
        duration = 240;
        musicClass = "Halo3";
    };

    class perchanceDream
    {
        name = "Perchance To Dream";
        sound[] = {"\addons\music\halo ce\Perchance To Dream - Halo OST.ogg",1,1};
        duration = 116;
        musicClass = "HaloCE";
    };

    class peril
    {
        name = "Peril";
        sound[] = {"\addons\music\halo 2\Peril - Halo 2.ogg",1,1};
        duration = 166;
        musicClass = "Halo2";
    };

    class phantom
    {
        name = "Phantom from Space";
        sound[] = {"\addons\music\other\Phantom from Space - Kevin Macleod.ogg",1,1};
        duration = 156;
        musicClass = "SFPMusic";
    };

    class SCOTLAND
    {
        name = "Scotland the Brave";
        sound[] = {"\addons\music\other\SCOTLAND THE BRAVE.ogg",1,1};
        duration = 163;
        musicClass = "SFPMusic";
    };

    class spirit
    {
        name = "Spirit of Fire";
        sound[] = {"\addons\music\halo other\Spirit of Fire - Halo wars.ogg",1,1};
        duration = 131;
        musicClass = "HaloOther";
    };

    class takeLead
    {
        name = "Take the Lead";
        sound[] = {"\addons\music\other\Take the Lead - Kevin Macleod.ogg",1,1};
        duration = 224;
        musicClass = "SFPMusic";
    };

    class aTeam
    {
        name = "The A-Team Theme";
        sound[] = {"\addons\music\other\The A-Team Full Theme - The Daniel Caine Orchestra.ogg",1,1};
        duration = 192;
        musicClass = "SFPMusic";
    };

    class gunAtUniverse
    {
        name = "The Gun Pointed At The Head Of The Universe";
        sound[] = {"\addons\music\halo ce\The Gun Pointed At The Head Of The Universe - Halo OST.ogg",1,1};
        duration = 146;
        musicClass = "HaloCE";
    };

    class storm
    {
        name = "The Storm";
        sound[] = {"\addons\music\halo 3\The Storm - Halo 3.ogg",1,1};
        duration = 128;
        musicClass = "Halo3";
    };

    class unforgotten
    {
        name = "Unforgotten";
        sound[] = {"\addons\music\halo 2\Unforgotten - Halo 2.ogg",1,1};
        duration = 131;
        musicClass = "Halo2";
    };

    class zero
    {
        name = "Zero - Ace Combat";
        sound[] = {"\addons\music\other\Zero - ACE combat.ogg",1,1};
        duration = 295;
        musicClass = "SFPMusic";
    };

    class BF3
    {
        name = "Battlefield 3 Theme";
        sound[] = {"\addons\music\other\BF3 - Solomon's Theme.ogg",1,1};
        duration = 172;
        musicClass = "SFPMusic";
    };

    class paleHorse
    {
        name = "Halo - On a Pale Horse";
        sound[] = {"\addons\music\halo ce\Halo - On a Pale Horse.ogg",1,1};
        duration = 95;
        musicClass = "HaloCE";
    };

    class impend
    {
        name = "Halo 2 - Impend";
        sound[] = {"\addons\music\halo 2\Halo 2 - Impend.ogg",1,1};
        duration = 141;
        musicClass = "Halo2";
    };

    class WTMain
    {
        name = "War Thunder - Main Theme";
        sound[] = {"\addons\music\other\War Thunder - Main Theme.ogg",1,1};
        duration = 181;
        musicClass = "SFPMusic";
    };

    class epilogue
    {
        name = "Epilogue";
        sound[] = {"\addons\music\halo 2\Epilogue.ogg",1,1};
        duration = 229;
        musicClass = "Halo2";
    };

    class hereticHero
    {
        name = "Heretic, Hero";
        sound[] = {"\addons\music\halo 2\Halo 2 Soundtrack - Heretic, Hero.ogg",1,1};
        duration = 154;
        musicClass = "Halo2";
    };

    class lastSpartan
    {
        name = "The Last Spartan";
        sound[] = {"\addons\music\halo 2\Halo 2 The Last Spartan.ogg",1,1};
        duration = 138;
        musicClass = "Halo2";
    };

    class endingTribute
    {
        name = "Ending (Tribute)";
        sound[] = {"\addons\music\halo 3\Halo 3 - Ending (Tribute).ogg",1,1};
        duration = 172;
        musicClass = "Halo3";
    };

    class openSuite
    {
        name = "Opening Suite";
        sound[] = {"\addons\music\halo CE\Opening Suite.ogg",1,1};
        duration = 58;
        musicClass = "HaloCE";
    };

    class madrigal
    {
        name = "The siege of Madrigal";
        sound[] = {"\addons\music\halo other\The siege of Madrigal.ogg",1,1};
        duration = 64;
        musicClass = "HaloOther";
    };

    class themeMashup
    {
        name = "Ultimate Theme Mashup";
        sound[] = {"\addons\music\halo other\Ultimate Theme Mashup.ogg",1,1};
        duration = 421;
        musicClass = "HaloOther";
    };

    class underNight
    {
        name = "Under Cover Of Night";
        sound[] = {"\addons\music\halo ce\Under Cover Of Night.ogg",1,1};
        duration = 221;
        musicClass = "HaloCE";
    };

    class walkInWood
    {
        name = "A Walk In The Woods";
        sound[] = {"\addons\music\halo ce\A Walk In The Woods.ogg",1,1};
        duration = 113;
        musicClass = "HaloCE";
    };

    class ashes
    {
        name = "Ashes";
        sound[] = {"\addons\music\reach\Ashes.ogg",1,1};
        duration = 166;
        musicClass = "HaloReach";
    };

    class anyCost
    {
        name = "At Any Cost";
        sound[] = {"\addons\music\reach\At Any Cost.ogg",1,1};
        duration = 150;
        musicClass = "HaloReach";
    };

    class rain
    {
        name = "Rain (Deference for Darkness)";
        sound[] = {"\addons\music\halo 3 odst\Rain - Deference for Darkness.ogg",1,1};
        duration = 190;
        musicClass = "Halo3ODST";
    };

    class hardPlace
    {
        name = "Rock In A Hard Place";
        sound[] = {"\addons\music\halo ce\Rock In A Hard Place.ogg",1,1};
        duration = 80;
        musicClass = "HaloCE";
    };

    class skyline
    {
        name = "Skyline";
        sound[] = {"\addons\music\halo 3 odst\Skyline.ogg",1,1};
        duration = 94;
        musicClass = "Halo3ODST";
    };

    class strung
    {
        name = "Strung";
        sound[] = {"\addons\music\halo ce\Strung.ogg",1,1};
        duration = 109;
        musicClass = "HaloCE";
    };

    class walkingAway
    {
        name = "Walking Away";
        sound[] = {"\addons\music\reach\Walking Away.ogg",1,1};
        duration = 113;
        musicClass = "HaloReach";
    };

    class goingAnywhere
    {
        name = "We're Not Going Anywhere";
        sound[] = {"\addons\music\reach\We're Not Going Anywhere.ogg",1,1};
        duration = 74;
        musicClass = "HaloReach";
    };
};
