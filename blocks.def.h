//Define a delimiter that can be acquired from scripts
static const Block delim_block = { "", "~/.local/share/dwmblocks/blocks/delim", 0, 0 };
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	                               /*Update Interval*/ /*Update Signal*/
    { "",       "~/.local/share/dwmblocks/blocks/ime",     0,                  1 },
    delim_block,
    { "",       "~/.local/share/dwmblocks/blocks/net",     0,                  2 },
    delim_block,
    { "",       "~/.local/share/dwmblocks/blocks/power",   0,                  3 },
    delim_block,
    { "",       "~/.local/share/dwmblocks/blocks/time",    1,                  4 },
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "\0";
static char padleft[] = " ";
static char padright[] = " ";
static unsigned int delimLen = 5;
