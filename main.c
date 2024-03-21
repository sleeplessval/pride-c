#include <stdio.h>
#include <string.h>

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

int main(int argc, char **argv) {
	//	get argv[1] or fall back to RAINBOW
	char *flag;
	if(argc > 1) { flag = argv[1]; }
	else { flag = RAINBOW; }


	if(strcmp(flag, RAINBOW) == 0) {
		printf(COLOR(196) STRIPE);			//	red
		printf(COLOR(208) STRIPE);			//	orange
		printf(COLOR(220) STRIPE);			//	yellow
		printf(COLOR(28) STRIPE);			//	green
		printf(COLOR(21) STRIPE);			//	blue
		printf(COLOR(90) STRIPE);			//	purple
	}

	else if(strcmp(flag, AROACE) == 0) {
		printf(COLOR(172) STRIPE);			//	orange
		printf(COLOR(184) STRIPE);			//	yellow
		printf(WHITE STRIPE);				//	white
		printf(COLOR(38) STRIPE);			//	blue
		printf(COLOR(17) STRIPE);			//	navy
	}

	else if(strcmp(flag, BISEXUAL) == 0) {
		printf(COLOR(161) STRIPE STRIPE);	//	maroon
		printf(COLOR(91) STRIPE);			//	purple
		printf(COLOR(21) STRIPE STRIPE);	//	blue
	}

	else if(strcmp(flag, LESBIAN) == 0) {
		printf(COLOR(202) STRIPE);			//	orange
		printf(COLOR(209) STRIPE);			//	tangerine
		printf(WHITE STRIPE);				//	white
		printf(COLOR(205) STRIPE);			//	pink
		printf(COLOR(161) STRIPE);			//	magenta
	}

	else if(strcmp(flag, NONBINARY) == 0) {
		printf(COLOR(226) STRIPE);			//	yellow
		printf(WHITE STRIPE);				//	white
		printf(COLOR(134) STRIPE);			//	purple
		printf(BLACK STRIPE);				//	black
	}

	else if(strcmp(flag, PANSEXUAL) == 0) {
		printf(COLOR(161) STRIPE STRIPE);	//	magenta
		printf(COLOR(220) STRIPE STRIPE);	//	yellow
		printf(COLOR(45) STRIPE STRIPE);	//	cyan
	}

	else if(strcmp(flag, TRANSGENDER) == 0) {
		char *blue = COLOR(45) STRIPE;
		char *pink = COLOR(177) STRIPE;
		printf(blue);
		printf(pink);
		printf(WHITE STRIPE);
		printf(pink);
		printf(blue);
	}

	printf(RESET);
}

