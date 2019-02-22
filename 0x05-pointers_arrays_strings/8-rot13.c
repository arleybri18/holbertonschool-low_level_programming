#include "holberton.h"

/**
 * rot13 - convert string to capitalize
 * @s: receive the string
 *
 * Return: return de string converted
 */

char *rot13(char *s)
{
	int i;
	/**
	 * Iterate an array and find the letter and change
	 * letters by rot13
	 */
	for (i = 0; (s[i] != '\0'); i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			s[i] = s[i] - 13;
		}
	}

	return (s);
}
