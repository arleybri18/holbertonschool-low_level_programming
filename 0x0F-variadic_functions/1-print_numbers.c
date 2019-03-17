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

			printf("%d", va_arg(valist, int));
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("%d\n", va_arg(valist, int));
	/* free memory */
	va_end(valist);
}
