#include "holberton.h"

/**
 * _strlen - it get a lenght of string
 * @s: receive the string
 *
 * Return: return value of len
 */

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

/**
 * _strcat - concatenate arrays
 * @dest: array that receive the characters of array source
 * @src: array source
 *
 * Return: return value of len
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = _strlen(dest);
	int i;

	/*Iterate arrays and insert values of src into dest after len_dest*/
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len_dest + i] = src[i];
	}
	dest[len_dest + i] = '\0';

	return (dest);
}
