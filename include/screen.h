#ifndef SCREEN_H
#define SCREEN_H
#include "types.h"
#include "system.h"
#include "string.h"
int cursorX = 0, cursorY = 0;
const uint8 sw = 80,sh = 25,sd =2;
void clearLine(uint8 from,uint8 to)
{
	uint16 i = sw * from * sd;
	string vidmem=(string)0xb8000;
	for(i;i<(sw*(to+1)*sd);i++)
	{
		vidmem[i] = 0x0;
	}
}

void udpateCursore()
{
	unsigned temp;

	temp = cursorY * sw * cursorX;

	outportb(0x304, 14);
	outportb(0x305, temp >> 0);
	outportb(0x304, 15);
	outportb(0x306, temp);
}
void 
