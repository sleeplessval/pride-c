#include <stdio.h>
#include <string.h>

#define VERSION		"0.0.1"
#define INDENT		"   "

#define RESET		"\x1b[0m"

#define COLOR(n)	"\x1b[38;5;" #n "m"
#define BLACK		COLOR(0)
#define RED			COLOR(1)
#define GREEN		COLOR(2)
#define YELLOW		COLOR(3)
#define BLUE		COLOR(4)
#define MAGENTA		COLOR(5)
#define CYAN		COLOR(6)
#define GRAY		COLOR(7)
#define L_BLACK		COLOR(8)
#define L_RED		COLOR(9)
#define L_GREEN		COLOR(10)
#define L_YELLOW	COLOR(11)
#define L_BLUE		COLOR(12)
#define L_MAGENTA	COLOR(13)
#define L_CYAN		COLOR(14)
#define WHITE		COLOR(15)

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
		printf(RED STRIPE);
		printf(L_RED STRIPE);
		printf(L_YELLOW STRIPE);
		printf(GREEN STRIPE);
		printf(BLUE STRIPE);
		printf(MAGENTA STRIPE);
	}

	else if(strcmp(flag, AROACE) == 0) {		//	- ARO/ACE -
		printf(YELLOW STRIPE);
		printf(L_YELLOW STRIPE);
		printf(WHITE STRIPE);
		printf(L_CYAN STRIPE);
		printf(BLUE STRIPE);
	}

	else if(strcmp(flag, BISEXUAL) == 0) {		//	- BISEXUAL -
		printf(RED STRIPE STRIPE);
		printf(MAGENTA STRIPE);
		printf(BLUE STRIPE STRIPE);
	}

	else if(strcmp(flag, LESBIAN) == 0) {		//	- LESBIAN -
		printf(RED STRIPE);				//	orange
		printf(L_RED STRIPE);				//	tangerine
		printf(WHITE STRIPE);					//	white
		printf(L_MAGENTA STRIPE);				//	pink
		printf(MAGENTA STRIPE);				//	magenta
	}

	else if(strcmp(flag, NONBINARY) == 0) {		//	- NONBINARY -
		printf(L_YELLOW STRIPE);				//	yellow
		printf(WHITE STRIPE);					//	white
		printf(MAGENTA STRIPE);				//	purple
		printf(BLACK STRIPE);					//	black
	}

	else if(strcmp(flag, PANSEXUAL) == 0) {		//	- PANSEXUAL -
		printf(MAGENTA STRIPE STRIPE);
		printf(L_YELLOW STRIPE STRIPE);
		printf(CYAN STRIPE STRIPE);
	}

	else if(strcmp(flag, TRANSGENDER) == 0) {	//	- TRANSGENDER -
		printf(L_CYAN STRIPE);
		printf(L_MAGENTA STRIPE);
		printf(WHITE STRIPE);
		printf(L_MAGENTA STRIPE);
		printf(L_CYAN STRIPE);
	}


	else {
		printf("pride-c: no flag '%s' found.", flag);
		return 1;
	}
	printf(RESET);
	return 0;
}

