#include "holberton.h"

/**
 * times_table - print table times
 *
 * Return: On success 0.
 */

void times_table(void)
{
	int i = 0;
	int j;
	int res;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j != 0)
			{
				_putchar(44);
				res = i * j;

				if (res < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar((res % 10) + 48);
				}
				else
				{
					_putchar(32);
					_putchar((res / 10) + 48);
					_putchar((res % 10) + 48);
				}
			}
			res = i * j;
			_putchar
			j++;

		}
		printf("\n");
		i++;
	}
}
