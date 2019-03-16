#include "variadic_functions.h"
#include <string.h>


void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

/* struct contain type and string*/
typedef struct print_function
{
	char *type;
	void (*func)(va_list);
} print_function;

/* function that print char*/
void print_char(va_list  list)
{
	printf("%c", va_arg(list, int));
}

void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

void print_string(va_list list)
{
	char *string;

	string = va_arg(list, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);

}

/**
 * print_all -
 *
 * Return:
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int count_format;
	int arr_function;

	print_function arr_functions[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
	};

	va_start(valist, format);

	count_format = 0;
	while (format[count_format] != '\0')
	{
		/*printf("%c\n",format[count_format]);*/
		arr_function  = 0;
		while (arr_functions[arr_function].type != NULL)
		{
			/*printf("estoy aqui %s\n",arr_functions[arr_function].type);*/
			if (*arr_functions[arr_function].type == format[count_format])
			{
				/*printf("entre en el if");*/
				arr_functions[arr_function].func(valist);
			}
			arr_function++;

		}
		count_format++;
		if (format[count_format + 3] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(valist);


}
