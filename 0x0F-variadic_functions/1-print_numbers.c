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

	if (n > 0)
	{
		/* initialize valist for number of arguments*/
		va_start(valist, n);
		/* Iterate arguments*/
		i = 0;
		while (i < (n - 1))
		{
			printf("%d", va_arg(valist, int));
			/*validate if separator is NULL*/
			if (separator != NULL)
				printf("%s", separator);
			i++;
		}
		printf("%d", va_arg(valist, int));
		/* free memory */
		va_end(valist);
	}
	printf("\n");
}
