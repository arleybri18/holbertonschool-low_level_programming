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
	int j;
	char low_letter[] = "aeotl";
	char upper_letter[] = "AEOTL";
	char integers[] ="43071";
	/**
	 * Iterate an array and find the letter and change
	 * letters by numbers
	 */
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (low_letter[j] != '\0')
		{
			if (s[i] == low_letter[j] || s[i] == upper_letter[j])
			{
				s[i] = integers[j];
			}
		j++;
		}
	i++;
	}

	return (s);
}
