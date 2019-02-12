#include "holberton.h"

/**
 * jack_bauer - print 24 hours
 *
 * Return: On success 0.
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24 ; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(58);
			_putchar((minutes / 10) + 48);
			_putchar((minutes % 10) + 48);
			_putchar(10);
		}
	}
}
