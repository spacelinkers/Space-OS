bits	32
section		.text
	align	4
	dd	0x1BADB002
	dd	0x00
	dd	- (0x1BADB002+0x00)

global start
extern kmain		;this function is gonna be located in our c code
start:
	cli		;clears the interrupts
	call kmain	;sent processor to continue from the the kmain func
	hlt 		;halt the cpu

