#nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c kernel.c -o kc.o
ld -m elf_i386 -T link.ld -o Os1/boot/kernel.bin kasm.o kc.o
qemu-system-i386 -kernel Os1/boot/kernel.bin
#grub-mkrescue -o Os1.iso Os1/

read a
