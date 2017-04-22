kmain()
{
	char* vidmem = (char*)0xb8000;
	vidmem[0] = 'H';
	vidmem[1] = 0x06;
	vidmem[2] = 'i';
	vidmem[3] = 0x06;
	vidmem[4] = ' ';
	vidmem[5] = 0x00;
	vidmem[6] = 'H';
	vidmem[7] = 0x06;
	vidmem[8] = 'a';
	vidmem[9] = 0x06;
	vidmem[10] = 's';
	vidmem[11] = 0x06;
	vidmem[12] = 'a';
	vidmem[13] = 0x06;
	vidmem[14] = 'n';
	vidmem[15] = 0x06;
}
