#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print_function - contain type and string
 *
 * @type: type of function
 * @func: fucntion to invoque
 *
 */
typedef struct print_function
{
const char * const type;
void (*func)(va_list);
} print_function;


#endif /* VARIADIC_FUNCTIONS_H */
