#include "full.h"

#include <stdio.h>

#include "draw.h"

void rainbow_256() {
	const color colors [] = {
		196,		//	red
		208,		//	orange
		220,		//	yellow
		28,			//	green
		21,			//	blue
		90			//	purple
	};
	draw(6, colors);
}

void aroace_256() {
	const color colors [] = {
		172,		//	orange
		184,		//	yellow
		255,		//	white
		38,			//	blue
		17			//	navy
	};
	draw(5, colors);
}

void bisexual_256() {
	const color colors [] = {
		161,		//	magenta
		161,
		91,			//	purple
		21,
		21			//	blue
	};
	draw(5, colors);
}

void gay_256() {
	const color colors [] = {
		29,
		49,			//	greens
		123,
		255,		//	white
		75,
		63,			//	blues
		56
	};
	draw(7, colors);
}

void lesbian_256() {
	const color colors [] = {
		202,		//	orange
		209,		//	tangerine
		255,		//	white
		205,		//	pink
		161			//	magenta
	};
	draw(5, colors);
}

void nonbinary_256() {
	const color colors [] = {
		226,		//	yellow
		255,		//	white
		134,		//	purple
		16			//	black
	};
	draw(4, colors);
}

void pansexual_256() {
	const color colors [] = {
		161, 161,	//	magenta
		220, 220,	//	yellow
		45, 45		//	cyan
	};
	draw(6, colors);
}

void transgender_256() {
	const color colors [] = {
		45,			//	blue
		213,		//	pink
		255,		//	white
		213,		//	pink
		45			//	blue
	};
	draw(5, colors);
}

