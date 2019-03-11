#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize struct dog
 *
 * @d: pointer to argument type dog
 * @name: pointer to name of the dog
 * @age: age of the dog
 * @owner: pointer to owner of the dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}
