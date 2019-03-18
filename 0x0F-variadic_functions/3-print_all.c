#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - function that print all arguments
 *
 * @format: format for print the argument
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int count_format = 0, skip;
	char *string;
	/*Declare array of structs for selected function*/
	/*initilize list of arguments*/
	va_start(valist, format);
	/* Iterate on string format */
	while (format != NULL && format[count_format])
	{
		skip = 0;
		switch (format[count_format])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				string = va_arg(valist, char *);
				if (string == NULL)
					printf("%p", string);
				printf("%s", string);
				break;
			default:
				skip = 1;
				break;

		}
		/*control of separator*/
		if (format[count_format + 1] != '\0' && skip == 0)
			printf(", ");
		count_format++;
	}
	printf("\n");
	/* free memory*/
	va_end(valist);
}
