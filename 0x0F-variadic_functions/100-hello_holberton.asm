section	.text
   global main      ;must be declared for linker (ld)

main:	            ;tells linker entry point
   mov	eax,4       ;system call number (sys_write)
   mov	ebx,1       ;file descriptor (stdout)
   mov	ecx,msg     ;message to write
   mov  edx, size    ;size to write
   int	0x80        ;call kernel
   mov	eax,0       ;system call number (sys_exit)
   int	0x80        ;call kernel

section	.data
	msg db 'Hello, Holberton', 0x0a  ;string to be printed
	size equ $ - msg
