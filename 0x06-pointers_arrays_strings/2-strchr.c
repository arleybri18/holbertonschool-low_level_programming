#include "holberton.h"

/**
 * _strchr - searches for the first occurrence of the character c
 * @s: This is the C string to be scanned
 * @c: This is the character to be searched in s
 *
 * Return: This returns a pointer to the first occurrence of the
 * character c in the string str, or NULL if the character is not
 * found.
 */

char *_strchr(char *s, char c)
{
	int i;
	/*Iterate the array and search the character*/
	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	/*Return null if not find the character*/
	return (&s[i]);
}
