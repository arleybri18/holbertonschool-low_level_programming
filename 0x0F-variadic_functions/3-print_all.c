#include "variadic_functions.h"
/**
 * print_all - function that print all arguments
 *
 * @format: format for print the argument
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int count_format = 0, skip;
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
				print_char(valist);
				break;
			case 'i':
				print_int(valist);
				break;
			case 'f':
				print_float(valist);
				break;
			case 's':
				print_string(valist);
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

/**
 * print_char - function that print char
 *
 * @list: list of variadic argument
 */

void print_char(va_list  list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - function that print integer
 *
 * @list: list of variadic argument
 */

void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_float - function that print float
 *
 * @list: list of variadic argument
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - function that print string
 *
 * @list: list of variadic argument
 */

void print_string(va_list list)
{
	char *string;

	string = va_arg(list, char *);

	if (string == NULL)
		printf("%p", string);
	else
		printf("%s", string);

}
