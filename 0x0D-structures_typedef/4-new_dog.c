#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that create new dog
 *
 * @name: pointer to name of the dog
 * @age: age of the dog
 * @owner: pointer to owner of the dog
 *
 * Return: new dog or null if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* define a pointer of type dog_t*/
	dog_t *my_dog;
	/* allocate memory for this type*/
	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	/* initialize variables*/
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	/* return struct*/
	return (my_dog);
}
