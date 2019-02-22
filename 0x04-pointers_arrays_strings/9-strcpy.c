#include "holberton.h"

/**
 * _strcpy - print the contain of array
 * until the position len
 * @dest: pointer contain a string to return
 * @src: pointer contain a string received
 *
 * Return: return char string *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = 0;
	while (*(src + len) != '\0')
		len++;

	i = 0;
	while (i <= len)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
