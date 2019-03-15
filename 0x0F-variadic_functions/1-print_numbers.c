#include "variadic_functions.h"

/**
 * print_numbers - print number in arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* declare va_list */
	va_list valist;
	unsigned int i;

	/* initialize valist for number of arguments*/
	va_start(valist, n);
	/* initialize counter*/
	i = 0;
	/* Iterate arguments*/
	do
	{/* conditions for determinate if print counter*/
		if (i != (n - 1))
		{
			if (separator != NULL)
				printf("%d%s", va_arg(valist, int), separator);
			else
				printf("%d", va_arg(valist, int));
		}
		else
			printf("%d\n", va_arg(valist, int));
		i++;
	}while (i < n);
	/* free memory */
	va_end(valist);
}
