//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "nettraf.sh",	1,                  1},
	{"", "cpu.sh",	    5,                  4},
	{"", "memory.sh",	    30,                 2},
	{"", "volume.sh",     0,                  10},
	{"", "clock.sh",      60,                 3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 10;
