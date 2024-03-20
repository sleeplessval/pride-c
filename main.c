#include <stdio.h>
#include <string.h>

#define RESET		"\x1b[0m"

#define BLACK		"\x1b[30m"
#define RED			"\x1b[31m"
#define GREEN		"\x1b[32m"
#define YELLOW		"\x1b[33m"
#define BLUE		"\x1b[34m"
#define MAGENTA		"\x1b[35m"
#define CYAN		"\x1b[36m"
#define GRAY		"\x1b[37m"

#define GREY		"\x1b[90m"
#define L_RED		"\x1b[91m"
#define LIME		"\x1b[92m"
#define L_YELLOW	"\x1b[93m"
#define L_BLUE		"\x1b[94m"
#define PINK		"\x1b[95m"
#define L_CYAN		"\x1b[96m"
#define WHITE		"\x1b[97m"

#define STRIPE		"██████████████████\n"

#define RAINBOW		"rainbow"
#define LESBIAN		"lesbian"
#define NONBINARY	"nonbinary"
#define TRANSGENDER	"transgender"

void rainbow() {
	
}

int main(int argc, char **argv) {
	char *flag;
	if(argc > 1) { flag = argv[1]; }
	else { flag = RAINBOW; }

	if(strcmp(flag, RAINBOW) == 0) {
		printf(RED STRIPE);
		printf(L_RED STRIPE);
		printf(YELLOW STRIPE);
		printf(GREEN STRIPE);
		printf(BLUE STRIPE);
		printf(MAGENTA STRIPE);
	}

	else if(strcmp(flag, LESBIAN) == 0) {
		printf(RED STRIPE);
		printf(L_RED STRIPE);
		printf(WHITE STRIPE);
		printf(PINK STRIPE);
		printf(MAGENTA STRIPE);
	}

	else if(strcmp(flag, NONBINARY) == 0) {
		printf(L_YELLOW STRIPE);
		printf(WHITE STRIPE);
		printf(L_BLUE STRIPE);
		printf(BLACK STRIPE);
	}

	else if(strcmp(flag, TRANSGENDER) == 0) {
		printf(L_CYAN STRIPE);
		printf(PINK STRIPE);
		printf(WHITE STRIPE);
		printf(PINK STRIPE);
		printf(L_CYAN STRIPE);
	}

	printf(RESET);
}

