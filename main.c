#include <stdio.h>
#include <string.h>

#include "draw.h"
#include "basic.h"
#include "full.h"

#define VERSION		"0.0.1"
#define INDENT		"   "

#define RESET		"\x1b[0m"

#define RAINBOW		"rainbow"
#define AROACE		"aroace"
#define BISEXUAL	"bisexual"
#define GAY			"gay"
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
		INDENT GAY "\n"
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

	int color_mode = 0;

	//	handle flags
	if(strcmp(flag, "--version") == 0) {
		version();
		return 0;
	} else if(strcmp(flag, "--help") == 0) {
		help();
		return 0;
	}

	if(strcmp(flag, RAINBOW) == 0) {			//	- RAINBOW -
		if(color_mode)
			rainbow_256();
		else
			rainbow_8();
	}

	else if(strcmp(flag, AROACE) == 0) {		//	- ARO/ACE -
		if(color_mode)
			aroace_256();
		else
			aroace_8();
	}

	else if(strcmp(flag, BISEXUAL) == 0) {		//	- BISEXUAL -
		if(color_mode)
			bisexual_256();
		else
			bisexual_8();
	}

	else if(strcmp(flag, GAY) == 0) {			//	- GAY -
		if(color_mode)
			gay_256();
		else
			gay_8();
	}

	else if(strcmp(flag, LESBIAN) == 0) {		//	- LESBIAN -
		if(color_mode)
			lesbian_256();
		else
			lesbian_8();
	}

	else if(strcmp(flag, NONBINARY) == 0) {		//	- NONBINARY -
		if(color_mode)
			nonbinary_256();
		else
			nonbinary_8();
	}

	else if(strcmp(flag, PANSEXUAL) == 0) {		//	- PANSEXUAL -
		if(color_mode)
			pansexual_256();
		else
			pansexual_8();
	}

	else if(strcmp(flag, TRANSGENDER) == 0) {	//	- TRANSGENDER -
		if(color_mode)
			transgender_256();
		else
			transgender_8();
	}


	else {
		printf("pride-c: no flag '%s' found.", flag);
		return 1;
	}
	printf(RESET);
	return 0;
}

