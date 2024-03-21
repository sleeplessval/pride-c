#include <stdio.h>
#include <string.h>

#define VERSION		"0.0.1"
#define INDENT		"   "

#define RESET		"\x1b[0m"

#define COLOR(n)	"\x1b[38;5;" #n "m"
#define BLACK		"\x1b[38;5;0m"
#define WHITE		"\x1b[38;5;255m"

#define STRIPE		"██████████████████\n"

#define RAINBOW		"rainbow"
#define AROACE		"aroace"
#define BISEXUAL	"bisexual"
#define LESBIAN		"lesbian"
#define NONBINARY	"nonbinary"
#define PANSEXUAL	"pansexual"
#define TRANSGENDER	"transgender"

void version() {
	printf("pride-c v" VERSION "\n");
}

void help() {
	version();
	printf(
		"Valerie Wolfe <sleeplessval@gmail.com>\n"
		"Display 256-color pride flags in the terminal.\n\n"

		"usage: pride [name]\n\n"

		"flag names:\n"
		INDENT AROACE "\n"
		INDENT BISEXUAL "\n"
		INDENT LESBIAN "\n"
		INDENT NONBINARY "\n"
		INDENT PANSEXUAL "\n"
		INDENT RAINBOW "\n"
		INDENT TRANSGENDER "\n"
	);
}

int main(int argc, char **argv) {
	//	get argv[1] or fall back to RAINBOW
	char *flag;
	if(argc > 1) { flag = argv[1]; }
	else { flag = RAINBOW; }

	//	handle flags
	if(strcmp(flag, "--version") == 0) {
		version();
		return 0;
	} else if(strcmp(flag, "--help") == 0) {
		help();
		return 0;
	}

	if(strcmp(flag, RAINBOW) == 0) {			//	- RAINBOW -
		printf(COLOR(196) STRIPE);				//	red
		printf(COLOR(208) STRIPE);				//	orange
		printf(COLOR(220) STRIPE);				//	yellow
		printf(COLOR(28) STRIPE);				//	green
		printf(COLOR(21) STRIPE);				//	blue
		printf(COLOR(90) STRIPE);				//	purple
	}

	else if(strcmp(flag, AROACE) == 0) {		//	- ARO/ACE -
		printf(COLOR(172) STRIPE);				//	orange
		printf(COLOR(184) STRIPE);				//	yellow
		printf(WHITE STRIPE);					//	white
		printf(COLOR(38) STRIPE);				//	blue
		printf(COLOR(17) STRIPE);				//	navy
	}

	else if(strcmp(flag, BISEXUAL) == 0) {		//	- BISEXUAL -
		printf(COLOR(161) STRIPE STRIPE);		//	maroon
		printf(COLOR(91) STRIPE);				//	purple
		printf(COLOR(21) STRIPE STRIPE);		//	blue
	}

	else if(strcmp(flag, LESBIAN) == 0) {		//	- LESBIAN -
		printf(COLOR(202) STRIPE);				//	orange
		printf(COLOR(209) STRIPE);				//	tangerine
		printf(WHITE STRIPE);					//	white
		printf(COLOR(205) STRIPE);				//	pink
		printf(COLOR(161) STRIPE);				//	magenta
	}

	else if(strcmp(flag, NONBINARY) == 0) {		//	- NONBINARY -
		printf(COLOR(226) STRIPE);				//	yellow
		printf(WHITE STRIPE);					//	white
		printf(COLOR(134) STRIPE);				//	purple
		printf(BLACK STRIPE);					//	black
	}

	else if(strcmp(flag, PANSEXUAL) == 0) {		//	- PANSEXUAL -
		printf(COLOR(161) STRIPE STRIPE);		//	magenta
		printf(COLOR(220) STRIPE STRIPE);		//	yellow
		printf(COLOR(45) STRIPE STRIPE);		//	cyan
	}

	else if(strcmp(flag, TRANSGENDER) == 0) {	//	- TRANSGENDER -
		char *blue = COLOR(45) STRIPE;
		char *pink = COLOR(177) STRIPE;
		printf(blue);
		printf(pink);
		printf(WHITE STRIPE);
		printf(pink);
		printf(blue);
	}


	else {
		printf("pride-c: no flag '%s' found.", flag);
		return 1;
	}
	printf(RESET);
	return 0;
}

