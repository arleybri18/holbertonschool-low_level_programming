#include "holberton.h"
#include <stdlib.h>


/**
 * malloc_checked - vallidate result of malloc
 *
 * @b: value in bytes for malloc
 *
 * Return: code 98 if malloc fail, pointer it's ok
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	/* reserved memory malloc*/
	a = malloc(b);
	/* validate result of malloc*/
	if (a == NULL)
		/*return code fail*/
		exit(98);
	else
		return (a);
}
