#include "holberton.h"

/**
 * _strstr - The strpbrk() function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * entirely of characters in accept
 * @haystack: This is the C string to be scanned
 * @needle: This is the string containing the list of characters to match in s
 *
 * Return: returns a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	/*Iterate first array*/
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		/*iterate string to compare letter a letter*/
		while (accept[j] != '\0')
		{
			/* if the positions are equals return addres*/
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
	i++;
	}
	/*Return null if not find the character*/
	return (0);
}
