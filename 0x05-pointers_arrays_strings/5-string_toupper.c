#include "holberton.h"

/**
 * string_toupper - convert characters in lowercase to uppercase
 * @s: receive the string
 *
 * Return: return de string converted
 */

char *string_toupper(char *s)
{
	int i;
	/**
	 * Iterate an array in alphabet in lowercase and
	 * convert to uppercase less 32 see ASCII
	 */
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
