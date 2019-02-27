#include "holberton.h"

/**
 * _strlen_recursion - calculate a lenght string with recursion
 * @s: receive the array
 *
 * Return: Return sum of acumulate recursion
 */

int _strlen_recursion(char *s)
{
	/*validate if finish string*/
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		/*acumulate until last value*/
		return (1 + _strlen_recursion(&s[1]));
	}
}
