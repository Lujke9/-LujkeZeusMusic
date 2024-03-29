class CfgPatches
{
    class LujkeZeusMusic
    {
        name = "Lujke's Custom Music Mod";
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
        sound[] = {"music\music\.ogg",1,1};
        duration=;
        musicClass = "SFPMusic";
    };
 */


    //Infinite
    class endless
    {
        name = "Endless";
        sound[] = {"music\music\Halo Infinite\Endless.ogg",1,1};
        duration = 262;
        musicClass = "Infinite";
    };

    class knowMyLegend
    {
        name = "Know My Legend";
        sound[] = {"music\music\Halo Infinite\Know My Legend.ogg",1,1};
        duration = 136;
        musicClass = "Infinite";
    };

    class theRoad
    {
        name = "The Road";
        sound[] = {"music\music\Halo Infinite\The Road.ogg",1,1};
        duration = 126;
        musicClass = "Infinite";
    };

    class weAreOverwatch
    {
        name = "We Are Overwatch";
        sound[] = {"music\music\other\We Are Overwatch.ogg",1,1};
        duration = 50;
        musicClass = "SFPMusic";
    };

    class chant
    {
        name = "Gregorian Chant";
        sound[] = {"music\music\other\gregorian-chant-by-kevin-macleod.ogg",1,1};
        duration = 184;
        musicClass = "SFPMusic";
    };

    class heroDown
    {
        name = "Hero Down";
        sound[] = {"music\music\other\hero-down-by-kevin-macleod.ogg",1,1};
        duration = 210;
        musicClass = "SFPMusic";
    };

    class hitman
    {
        name = "Hitman";
        sound[] = {"music\music\other\hitman-by-kevin-macleod.ogg",1,1};
        duration = 200;
        musicClass = "SFPMusic";
    };

    class instinct
    {
        name = "Instinct";
        sound[] = {"music\music\other\instinct-bensound.ogg",1,1};
        duration = 204;
        musicClass = "SFPMusic";
    };

    class showdown
    {
        name = "Showdown";
        sound[] = {"music\music\other\showdown-by-kevin-macleod.ogg",1,1};
        duration = 73;
        musicClass = "SFPMusic";
    };

    class descent
    {
        name = "The Descent";
        sound[] = {"music\music\other\the-descent-by-kevin-macleod.ogg",1,1};
        duration = 191;
        musicClass = "SFPMusic";
    };

    class gate
    {
        name = "Gate Theme Song";
        sound[] = {"music\music\other\gate.ogg",1,1};
        duration = 191;
        musicClass = "SFPMusic";
    };

    class advanceAus
    {
        name = "Advance Australia";
        sound[] = {"music\music\other\advance australia.ogg",1,1};
        duration = 191;
        musicClass = "SFPMusic";
    };

    class aidan
    {
        name = "Light of Aidan";
        sound[] = {"music\music\halo 3 odst\Light of Aidan.ogg",1,1};
        duration = 184;
        musicClass = "Halo3ODST";
    };

    class arrival
    {
        name = "Arrival";
        sound[] = {"music\music\halo other\Arrival - Halo 4.ogg",1,1};
        duration = 334;
        musicClass = "HaloOther";
    };

    class bioUnit
    {
        name = "Bio Unit";
        sound[] = {"music\music\other\Bio_Unit - Kevin Macleod.ogg",1,1};
        duration = 209;
        musicClass = "SFPMusic";
    };

    class surf
    {
        name = "Charlie Don't Surf";
        sound[] = {"music\music\other\Charlie Don't Surf - COD4.ogg",1,1};
        duration = 100;
        musicClass = "SFPMusic";
    };

    class daredevil
    {
        name = "Daredevil - Ace Combat";
        sound[] = {"music\music\other\Daredevil - ACE combat.ogg",1,1};
        duration = 307;
        musicClass = "SFPMusic";
    };

    class maze
    {
        name = "Enter the Maze";
        sound[] = {"music\music\other\Enter the Maze - Kevin Macleod.ogg",1,1};
        duration = 178;
        musicClass = "SFPMusic";
    };

    class ghostsOfReach
    {
        name = "Ghosts of Reach";
        sound[] = {"music\music\halo other\Ghosts of Reach - Halo legends.ogg",1,1};
        duration = 82;
        musicClass = "HaloOther";
    };

    class amberClad
    {
        name = "In Amber Clad";
        sound[] = {"music\music\halo 2\In Amber Clad - Halo 2.ogg",1,1};
        duration = 99;
        musicClass = "Halo2";
    };

    class timeComing
    {
        name = "Long Time Coming";
        sound[] = {"music\music\other\Long Time Coming - Kevin Macleod.ogg",1,1};
        duration = 274;
        musicClass = "SFPMusic";
    };

    class machine
    {
        name = "Machines and Might";
        sound[] = {"music\music\hlao other\Machines and Might - Halo legends.ogg",1,1};
        duration = 62;
        musicClass = "HaloOther";
    };

    class finalEffort
    {
        name = "One Final Effort - Extended";
        sound[] = {"music\music\halo 3\One Final Effort - Extended - Halo 3.ogg",1,1};
        duration = 240;
        musicClass = "Halo3";
    };

    class perchanceDream
    {
        name = "Perchance To Dream";
        sound[] = {"music\music\halo ce\Perchance To Dream - Halo OST.ogg",1,1};
        duration = 116;
        musicClass = "HaloCE";
    };

    class peril
    {
        name = "Peril";
        sound[] = {"music\music\halo 2\Peril - Halo 2.ogg",1,1};
        duration = 166;
        musicClass = "Halo2";
    };

    class phantom
    {
        name = "Phantom from Space";
        sound[] = {"music\music\other\Phantom from Space - Kevin Macleod.ogg",1,1};
        duration = 156;
        musicClass = "SFPMusic";
    };

    class SCOTLAND
    {
        name = "Scotland the Brave";
        sound[] = {"music\music\other\SCOTLAND THE BRAVE.ogg",1,1};
        duration = 163;
        musicClass = "SFPMusic";
    };

    class spirit
    {
        name = "Spirit of Fire";
        sound[] = {"music\music\halo other\Spirit of Fire - Halo wars.ogg",1,1};
        duration = 131;
        musicClass = "HaloOther";
    };

    class takeLead
    {
        name = "Take the Lead";
        sound[] = {"music\music\other\Take the Lead - Kevin Macleod.ogg",1,1};
        duration = 224;
        musicClass = "SFPMusic";
    };

    class aTeam
    {
        name = "The A-Team Theme";
        sound[] = {"music\music\other\The A-Team Full Theme - The Daniel Caine Orchestra.ogg",1,1};
        duration = 192;
        musicClass = "SFPMusic";
    };

    class gunAtUniverse
    {
        name = "The Gun Pointed At The Head Of The Universe";
        sound[] = {"music\music\halo ce\The Gun Pointed At The Head Of The Universe - Halo OST.ogg",1,1};
        duration = 146;
        musicClass = "HaloCE";
    };

    class storm
    {
        name = "The Storm";
        sound[] = {"music\music\halo 3\The Storm - Halo 3.ogg",1,1};
        duration = 128;
        musicClass = "Halo3";
    };

    class unforgotten
    {
        name = "Unforgotten";
        sound[] = {"music\music\halo 2\Unforgotten - Halo 2.ogg",1,1};
        duration = 131;
        musicClass = "Halo2";
    };

    class zero
    {
        name = "Zero - Ace Combat";
        sound[] = {"music\music\other\Zero - ACE combat.ogg",1,1};
        duration = 295;
        musicClass = "SFPMusic";
    };

    class BF3
    {
        name = "Battlefield 3 Theme";
        sound[] = {"music\music\other\BF3 - Solomon's Theme.ogg",1,1};
        duration = 172;
        musicClass = "SFPMusic";
    };

    class paleHorse
    {
        name = "On a Pale Horse";
        sound[] = {"music\music\halo ce\Halo - On a Pale Horse.ogg",1,1};
        duration = 95;
        musicClass = "HaloCE";
    };

    class impend
    {
        name = "Impend";
        sound[] = {"music\music\halo 2\Halo 2 - Impend.ogg",1,1};
        duration = 141;
        musicClass = "Halo2";
    };

    class WTMain
    {
        name = "War Thunder - Main Theme";
        sound[] = {"music\music\other\War Thunder - Main Theme.ogg",1,1};
        duration = 181;
        musicClass = "SFPMusic";
    };

    class epilogue
    {
        name = "Epilogue";
        sound[] = {"music\music\halo 2\Epilogue.ogg",1,1};
        duration = 229;
        musicClass = "Halo2";
    };

    class hereticHero
    {
        name = "Heretic, Hero";
        sound[] = {"music\music\halo 2\Halo 2 Soundtrack - Heretic, Hero.ogg",1,1};
        duration = 154;
        musicClass = "Halo2";
    };

    class lastSpartan
    {
        name = "The Last Spartan";
        sound[] = {"music\music\halo 2\Halo 2 The Last Spartan.ogg",1,1};
        duration = 138;
        musicClass = "Halo2";
    };

    class endingTribute
    {
        name = "Ending (Tribute)";
        sound[] = {"music\music\halo 3\Halo 3 - Ending (Tribute).ogg",1,1};
        duration = 172;
        musicClass = "Halo3";
    };

    class openSuite
    {
        name = "Opening Suite";
        sound[] = {"music\music\halo CE\Opening Suite.ogg",1,1};
        duration = 58;
        musicClass = "HaloCE";
    };

    class madrigal
    {
        name = "The Siege of Madrigal";
        sound[] = {"music\music\halo other\The siege of Madrigal.ogg",1,1};
        duration = 64;
        musicClass = "HaloOther";
    };

    class themeMashup
    {
        name = "Ultimate Theme Mashup";
        sound[] = {"music\music\halo other\Ultimate Theme Mashup.ogg",1,1};
        duration = 421;
        musicClass = "HaloOther";
    };

    class underNight
    {
        name = "Under Cover Of Night";
        sound[] = {"music\music\halo ce\Under Cover Of Night.ogg",1,1};
        duration = 221;
        musicClass = "HaloCE";
    };

    class walkInWood
    {
        name = "A Walk In The Woods";
        sound[] = {"music\music\halo ce\A Walk In The Woods.ogg",1,1};
        duration = 113;
        musicClass = "HaloCE";
    };

    class ashes
    {
        name = "Ashes";
        sound[] = {"music\music\reach\Ashes.ogg",1,1};
        duration = 166;
        musicClass = "HaloReach";
    };

    class anyCost
    {
        name = "At Any Cost";
        sound[] = {"music\music\reach\At Any Cost.ogg",1,1};
        duration = 150;
        musicClass = "HaloReach";
    };

    class rain
    {
        name = "Rain (Deference for Darkness)";
        sound[] = {"music\music\halo 3 odst\Rain - Deference for Darkness.ogg",1,1};
        duration = 190;
        musicClass = "Halo3ODST";
    };

    class hardPlace
    {
        name = "Rock In A Hard Place";
        sound[] = {"music\music\halo ce\Rock In A Hard Place.ogg",1,1};
        duration = 80;
        musicClass = "HaloCE";
    };

    class skyline
    {
        name = "Skyline";
        sound[] = {"music\music\halo 3 odst\Skyline.ogg",1,1};
        duration = 94;
        musicClass = "Halo3ODST";
    };

    class strung
    {
        name = "Strung";
        sound[] = {"music\music\halo ce\Strung.ogg",1,1};
        duration = 109;
        musicClass = "HaloCE";
    };

    class walkingAway
    {
        name = "Walking Away";
        sound[] = {"music\music\reach\Walking Away.ogg",1,1};
        duration = 113;
        musicClass = "HaloReach";
    };

    class goingAnywhere
    {
        name = "We're Not Going Anywhere";
        sound[] = {"music\music\reach\We're Not Going Anywhere.ogg",1,1};
        duration = 74;
        musicClass = "HaloReach";
    };
};
