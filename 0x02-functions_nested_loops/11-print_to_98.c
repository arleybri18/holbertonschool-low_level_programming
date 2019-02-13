#include <stdio.h>
/**
 * print_to_98 - print number until 98
 * @n: input parameter
 *
 * Return: On success 0.
 */

void print_to_98(int n)
{
	int i = 0;

	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			(i == 98) ? printf("%d", i) : printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			(i == 98) ? printf("%d", i) : printf("%d, ", i);
		}
	}
	printf("\n");
}
