#include "full.h"

#include <stdio.h>

#include "color.h"

void rainbow_256() {
	printf(
		COLOR(196) STRIPE		//	red
		COLOR(208) STRIPE		//	orange
		COLOR(220) STRIPE		//	yellow
		COLOR(28) STRIPE		//	green
		COLOR(21) STRIPE		//	blue
		COLOR(90) STRIPE		//	purple
	);
}

void aroace_256() {
	printf(
		COLOR(172) STRIPE
		COLOR(184) STRIPE
		COLOR(255) STRIPE
		COLOR(38) STRIPE
		COLOR(17) STRIPE
	);
}

void bisexual_256() {
	printf(
		COLOR(161) STRIPE STRIPE
		COLOR(91) STRIPE
		COLOR(21) STRIPE STRIPE
	);
}

void gay_256() {
	printf(
		COLOR(29) STRIPE
		COLOR(49) STRIPE
		COLOR(123) STRIPE
		COLOR(255) STRIPE
		COLOR(75) STRIPE
		COLOR(63) STRIPE
		COLOR(56) STRIPE
	);
}

void lesbian_256() {
	printf(
		COLOR(202) STRIPE
		COLOR(209) STRIPE
		COLOR(255) STRIPE
		COLOR(134) STRIPE
		COLOR(161) STRIPE
	);
}

void nonbinary_256() {
	printf(
		COLOR(226) STRIPE
		COLOR(255) STRIPE
		COLOR(134) STRIPE
		COLOR(16) STRIPE
	);
}

void pansexual_256() {
	printf(
		COLOR(161) STRIPE STRIPE
		COLOR(220) STRIPE STRIPE
		COLOR(45) STRIPE STRIPE
	);
}

void transgender_256() {
	printf(
		COLOR(45) STRIPE
		COLOR(117) STRIPE
		COLOR(255) STRIPE
		COLOR(117) STRIPE
		COLOR(45) STRIPE
	);
}

