#include "holberton.h"

/**
 * _strlen - it get a lenght of string
 * @s: receive the string
 *
 * Return: return value of len
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = _strlen(dest);
	int i;

	for(i = 0;i < n && src[i] != '\0';i++)
	{
		dest[len_dest + i] = src[i];
	}
	dest[len_dest + i] = '\0';

return dest;



}






int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
