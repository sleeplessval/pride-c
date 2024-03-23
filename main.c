#include <stdio.h>
#include <string.h>

#include "color.h"
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
		"   aroace\n"
		"   bisexual\n"
		"   gay\n"
		"   lesbian\n"
		"   nonbinary\n"
		"   pansexual\n"
		"   rainbow\n"
		"   transgender\n"
	);
}

unsigned long djb_hash(unsigned char *string) {
	unsigned long output = 5381;
	int c;

	while(c = *string++)
		output = ((output << 5) + output) + c;

	return output;
}

int main(int argc, char **argv) {
	//	get argv[1] or fall back to RAINBOW
	char *flag;
	if(argc > 1) { flag = argv[1]; }
	else { flag = ""; }

	int color_mode = 0;

	//	handle flags
	if(strcmp(flag, "--version") == 0) {
		version();
		return 0;
	} else if(strcmp(flag, "--help") == 0) {
		help();
		return 0;
	}

	unsigned long flag_hash = djb_hash(flag);

	char *output;
	switch(flag_hash) {
		//	- RAINBOW -
		case 229480993726103lu:			//	'rainbow'
		case 5381lu:					//	(empty)
			if(color_mode)	rainbow_256();
			else			rainbow_8();
			break;

		//	- ARO/ACE -
		case 6953324567312lu:			//	'aroace'
		case 22945708850429lu:			//	'aro-ace'
			if(color_mode)	aroace_256();
			else			aroace_8();
			break;

		//	- BISEXUAL -
		case 7572201611094690lu:		//	'bisexual'
		case 5863248lu:					//	'bi'
			if(color_mode)	bisexual_256();
			else			bisexual_8();
			break;

		//	- GAY -
		case 193492486lu:				//	'gay'
		case 193499371lu:				//	'mlm'
			if(color_mode)	gay_256();
			else			gay_8();
			break;

		//	- LESBIAN -
		case 229473412894979lu:			//	'lesbian'
		case 193510271lu:				//	'wlw'
			if(color_mode)	lesbian_256();
			else			lesbian_8();
			break;

		//	- NONBINARY -
		case 249899779187415445lu:		//	'nonbinary'
		case 5863637lu:					//	'nb'
			if(color_mode)	nonbinary_256();
			else			nonbinary_8();
			break;

		//	- PANSEXUAL -
		case 249901996007388822lu:		//	'pansexual'
		case 193502276lu:				//	'pan'
			if(color_mode)	pansexual_256();
			else			nonbinary_8();
			break;

		//	- TRANSGENDER -
		case 13895753452281080578lu:	//	'transgender'
		case 210729322765lu:			//	'trans'
			if(color_mode)	transgender_256();
			else			transgender_8();
			break;

		default:
			printf("pride-c: no flag '%s' found.", flag);
			return 1;
	}

	printf(RESET);
	return 0;
}

