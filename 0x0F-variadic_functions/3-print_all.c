#include "variadic_functions.h"
#include <string.h>


void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

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
		string = "(nil)";
	printf("%s", string);

}

/**
 * print_all - function that print all arguments
 *
 * @format: format for print the argument
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int count_format;
	int arr_function;
	/*Declare array of structs for selected function*/
	print_function arr_functions[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
	};
	/*initilize list of arguments*/
	va_start(valist, format);
	/* intialize counter for loop*/
	count_format = 0;
	/* Iterate on string format */
	while (format != NULL && format[count_format] != '\0')
	{
		/* intialize counter for array structs*/
		arr_function  = 0;
		/* Itearte on array structs*/
		while (arr_functions[arr_function].type != NULL)
		{
			/* Validate if member type is equal to char in string format */
			if (*arr_functions[arr_function].type == format[count_format])
			{
				/* call function in array struct, sending parameter valist*/
				arr_functions[arr_function].func(valist);
				/*control of separator*/
				if (format[count_format + 1] != '\0')
					printf(", ");
			}
			arr_function++;

		}
		count_format++;
	}
	printf("\n");
	/* free memory*/
	va_end(valist);


}
