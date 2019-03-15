#include "variadic_functions.h"

/**
 * print_strings - print strings in arguments
 *
 * @separator: separator to print between arguments
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declare va_list */
	va_list valist;
	unsigned int i;
	char *string;

	/* initialize valist for number of arguments*/
	va_start(valist, n);
	/* initialize counter*/
	i = 0;
	/* Iterate arguments*/
	do {
		string = va_arg(valist, char *);
		/* conditions for determinate if print counter*/
		if (i != (n - 1))
		{
			if (separator != NULL)
				printf("%s%s", string, separator);
			else
				printf("%s", string);
		}
		else
			printf("%s\n", string);
		i++;
	} while (i < n);
	/* free memory */
	va_end(valist);
}
