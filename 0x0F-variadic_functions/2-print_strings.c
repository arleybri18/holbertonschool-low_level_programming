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
	
	if (n > 0)
	{
		/* initialize valist for number of arguments*/
		va_start(valist, n);
		/* initialize counter*/
		i = 0;
		/* Iterate arguments*/
		while (i < (n - 1))
		{
			string = va_arg(valist, char *);
			/* conditions for determinate if print counter*/
			if (string == NULL)
				printf("%s", string);
			
			if (separator != NULL)
				printf("%s%s", string, separator);
			else
				printf("%s", string);
		
			i++;
		}
		printf("%s", va_arg(valist, char *));
		/* free memory */
		va_end(valist);
	}
	printf("\n");
}
