#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "draw.h"
#include "basic.h"
#include "full.h"
#include "name.h"

#define VERSION		"0.0.1"

#define RESET		"\x1b[0m"

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
		"   aromantic\n"
		"   aroace\n"
		"   asexual\n"
		"   bigender\n"
		"   bisexual\n"
		"   gay\n"
		"   genderfluid\n"
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

	//	handle flags
	if(strcmp(flag, "--version") == 0) {
		version();
		return 0;
	} else if(strcmp(flag, "--help") == 0) {
		help();
		return 0;
	}

	int color_mode = 0;
	char * term = getenv("TERM");
	if(strcmp(term, "linux"))
		color_mode = 1;

	unsigned long flag_hash = djb_hash(flag);

	#ifdef DEBUG_HASH
		printf("[ %lu ]\n\n", flag_hash);
		return 0;
	#endif

	char *output;
	switch(flag_hash) {
		//	- RAINBOW -
		case RAINBOW:
		case EMPTY:
			if(color_mode)	rainbow_256();
			else			rainbow_8();
			break;

		//	- AROMANTIC -
		case AROMANTIC:
		case ARO:
			if(color_mode)	aromantic_256();
			else			aromantic_8();
			break;

		//	- ARO/ACE -
		case AROACE:
		case ARO_ACE:
			if(color_mode)	aroace_256();
			else			aroace_8();
			break;

		//	- ASEXUAL -
		case ASEXUAL:
		case ACE:
			if(color_mode)	asexual_256();
			else			asexual_8();
			break;

		//	- BIGENDER -
		case BIGENDER:
			if(color_mode)	bigender_256();
			else			bigender_8();
			break;

		//	- BISEXUAL -
		case BISEXUAL:
		case BI:					//	'bi'
			if(color_mode)	bisexual_256();
			else			bisexual_8();
			break;

		//	- GAY -
		case GAY:
		case MLM:
			if(color_mode)	gay_256();
			else			gay_8();
			break;

		//	- GENDERFLUID -
		case GENDERFLUID:
			if(color_mode)	genderfluid_256();
			else			genderfluid_8();
			break;

		//	- LESBIAN -
		case LESBIAN:
		case WLW:
			if(color_mode)	lesbian_256();
			else			lesbian_8();
			break;

		//	- NONBINARY -
		case NONBINARY:
		case NB:
			if(color_mode)	nonbinary_256();
			else			nonbinary_8();
			break;

		//	- PANSEXUAL -
		case PANSEXUAL:
		case PAN:
			if(color_mode)	pansexual_256();
			else			pansexual_8();
			break;

		//	- TRANSGENDER -
		case TRANSGENDER:
		case TRANS:
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

