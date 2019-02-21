#include "holberton.h"

/**
 * _strncat - concatenate n characters of an array
 * @dest: array that receive the characters of array source
 * @src: array source
 * @n: numbers of characters to concat
 *
 * Return: return value of dest variable
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int flag;

	flag = 0;
	for(i = 0;s1[i] != '\0' ;i++)
	{
		if(s1[i] != s2[i])
			flag = -15;
	}

	return flag;
}
