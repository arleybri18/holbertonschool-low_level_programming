#include "holberton.h"

/**
 * set_string - The function asign the asignement in memory
 * from **s to *to
 * @s: This is the firts string
 * @to: second string
 *
 */

void set_string(char **s, char *to)
{
	/*asign value of a pointer *s stored the address of s*/
	*s = to;
}
