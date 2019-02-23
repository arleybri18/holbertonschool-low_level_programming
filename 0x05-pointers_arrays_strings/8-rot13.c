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
	int j;
	int flag;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char root13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/**
	 * Iterate an array and find the letter and change
	 * letters by rot13
	 */
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (alphabet[j] != '\0' && flag == 0)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = root13[j];
				flag = 1;
			}
			j++;
		}
	i++;
	}

	return (s);
}
