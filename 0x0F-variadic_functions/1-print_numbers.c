#include "variadic_functions.h"

/**
 * print_numbers - print number in arguments
 *
 * @separator: string to print between arguments
 * @n: number of arguments
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
	/* Iterate arguments*/
	for (i = 0; i < n; i++)
	{
		/* conditions for determinate if print counter*/
		if (i != (n - 1))
		{
			if (separator != NULL)
				printf("%d%s", va_arg(valist, int), separator);
			else
				printf("%d", va_arg(valist, int));
		}
		else
			printf("%d\n", va_arg(valist, int));
	}
	/* free memory */
	va_end(valist);
}
