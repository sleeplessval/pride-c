#include "basic.h"

#include <stdio.h>

#include "draw.h"

void rainbow_8() {
	color colors [] = {
		RED,
		L_RED,
		L_YELLOW,
		GREEN,
		BLUE,
		MAGENTA
	};
	draw(6, colors);
}

void aroace_8() {
	color colors [] = {
		YELLOW,
		L_YELLOW,
		WHITE,
		L_CYAN,
		BLUE
	};
	draw(5, colors);
}

void bigender_8() {
	printf(
		L_RED STRIPE
		L_YELLOW STRIPE
		WHITE STRIPE
		MAGENTA STRIPE
		L_BLUE STRIPE
	);
}

void bisexual_8() {
	color colors [] = {
		RED,
		RED,
		MAGENTA,
		BLUE,
		BLUE
	};
	draw(5, colors);
}

void gay_8() {
	color colors [] = {
		CYAN,
		L_CYAN,
		WHITE,
		L_BLUE,
		BLUE
	};
	draw(5, colors);
}

void genderfluid_8() {
	printf(
		L_RED STRIPE
		WHITE STRIPE
		MAGENTA STRIPE
		BLACK STRIPE
		BLUE STRIPE
	);
}

void lesbian_8() {
	color colors [] = {
		RED,
		L_RED,
		WHITE,
		L_MAGENTA,
		MAGENTA
	};
	draw(5, colors);
}

void nonbinary_8() {
	color colors [] = {
		L_YELLOW,
		WHITE,
		MAGENTA,
		BLACK
	};
	draw(4, colors);
}

void pansexual_8() {
	color colors [] = {
		MAGENTA,
		MAGENTA,
		L_YELLOW,
		L_YELLOW,
		CYAN,
		CYAN
	};
	draw(6, colors);
}

void transgender_8() {
	color colors [] = {
		L_CYAN,
		L_MAGENTA,
		WHITE,
		L_MAGENTA,
		L_CYAN
	};
	draw(5, colors);
}

