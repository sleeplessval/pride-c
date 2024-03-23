#include "draw.h"

#include <stdio.h>

void draw(unsigned short int len, color colors []) {
	for(int i = 0; i < len; i++) {
		printf(ANSI "%dm" STRIPE, colors[i]);
	}
}

