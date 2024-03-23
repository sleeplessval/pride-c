#include "draw.h"

#include <stdio.h>

void draw(const unsigned short int len, const color colors []) {
	for(int i = 0; i < len; i++) {
		printf(ANSI "%dm" STRIPE, colors[i]);
	}
}

