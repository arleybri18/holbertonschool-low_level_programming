#include "holberton.h"

/**
 * times_table - print table times
 *
 * Return: On success 0.
 */

void print_times_table(int n)
{
	int i = 0;
	int j;
	int res;

	if (n > 0 && n < 16)
	{	
		while (i <= n)
		{
			j = 0;
			_putchar(48);
			while (j <= n)
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
				j++;
			}
			_putchar(10);
			i++;
		}
	}
}
