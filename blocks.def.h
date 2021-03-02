/* macro for conveniently specifying pathu and pathc below */
#define PATH(name) "/home/chenxianbin/Projects/desktop/suckless/dwmblocks/blocks/"name

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", PATH("nettraf.sh"),	1,                  1},
	{"", PATH("cpu.sh"),	    5,                  4},
	{"", PATH("memory.sh"),	    30,                 2},
	{"", PATH("volume.sh"),     0,                  10},
	{"", PATH("clock.sh"),      60,                 3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 10;
