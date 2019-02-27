#include "holberton.h"

/**
 * _print_rev_recursion - print array reverse
 * @s: receive the array
 *
 */

void _print_rev_recursion(char *s)
{
	/*validate if finish string*/
	if (s[0] != '\0')
	{
		/*call function with next memory position*/
		_print_rev_recursion(&s[1]);
		/*print the array then acumulate value*/
		_putchar(s[0]);
	}
}
