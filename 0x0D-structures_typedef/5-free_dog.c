#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that free memory
 *
 * @d: pointer of struct dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	/*validate if a pointer is diferent null*/
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
