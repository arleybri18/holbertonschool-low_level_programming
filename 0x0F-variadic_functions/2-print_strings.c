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

	/* validate if n containa a number*/
	if (n > 0)
	{
		/* initialize valist for number of arguments*/
		va_start(valist, n);
		/* initialize counter*/
		i = 0;
		/* Iterate arguments*/
		while (i < n)
		{
			string = va_arg(valist, char *);
			/* conditions for determinate if print pointer or string*/
			if (string == NULL)
				printf("%p", string);
			else
				printf("%s", string);
			if (separator != NULL && i < (n - 1))
				printf("%s", separator);
		i++;
		}
		/* free memory */
		va_end(valist);
	}
	printf("\n");
}
