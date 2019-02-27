#include "holberton.h"

/**
 * _puts_recursion - print the contain in 2D array
 * @s: receive the array
 *
 */

void _puts_recursion(char *s)
{
	/*validate if finish string*/
	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		/*print the character*/
		_putchar(s[0]);
		/*call function with next memory position*/
		_puts_recursion(&s[1]);
	}
}
