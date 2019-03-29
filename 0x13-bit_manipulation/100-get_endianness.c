#include "holberton.h"

/**
 * get_endianness - return if a number is llittle o big endian
 *
 * Return: 0 Big endian or 1 little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
