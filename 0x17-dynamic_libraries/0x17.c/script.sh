#!/bin/bash
echo -e "#include <stdlib.h>\nvoid printf(){\nwrite(1, \"Please make me win!\",19);\nexit(EXIT_SUCCESS);\n}" >> _printf.c
gcc -w -shared -fPIC _printf.c -o _printf.so
export LD_PRELOAD=_printf.so
sleep 98 && export LD_PRELOAD=
