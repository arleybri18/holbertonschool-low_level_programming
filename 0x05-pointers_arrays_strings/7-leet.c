#include "holberton.h"

/**
 * leet - convert string to capitalize
 * @s: receive the string
 *
 * Return: return de string converted
 */

char *leet(char *s)
{
	int i;
	/**
	 * Iterate an array and find the letter and change
	 * letters by numbers
	 */
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = 4 + 48;
		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = 3 + 48;
		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = 0 + 48;
		else if (s[i] == 't' || s[i] == 'T')
			s[i] = 7 + 48;
		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = 1 + 48;
		i++;
	}

	return (s);
}
