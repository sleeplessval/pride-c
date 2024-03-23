#pragma once

#define ANSI		"\x1b[38;5;"
#define COLOR(n)	ANSI #n "m"
#define STRIPE		"██████████████████\n"

typedef unsigned short int color;

void draw(const unsigned short int len, const color colors[]);

