#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - The function locates the first occurrence in the
 * string haystack of any of the bytes in the string needle
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
	if (needle[0] == 32)
		return (&haystack[i]);
	while (haystack[i] != '\0')
	{
		/*compare string whit firts character in needle*/
		if (haystack[i] == needle[0])
		{
			/*iterate string to compare letter a letter*/
			for (j = 1; haystack[i + j] == needle[j]; j++)
			{
				if (needle[j] == '\0')
					return (&haystack[i]);
			}
		}
	i++;
	}
	/*Return null if not find the character*/
	return (0);
}
