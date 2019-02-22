#include "holberton.h"

/**
 * cap_string - convert string to capitalize
 * @s: receive the string
 *
 * Return: return de string converted
 */

char *cap_string(char *s)
{
	int i;
	/**
	 * Iterate an array and find the space or tabulation character
	 * then convert to space and then convert to uppercase less
	 * the firts character of a word less 32 see ASCII
	 */
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i - 1] == '\t')
			s[i - 1] = ' ';

		if (s[i - 1] == ' ' || s[i - 1] == '.' || s[i -1] == '\n')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
