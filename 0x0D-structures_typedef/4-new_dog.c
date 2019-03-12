#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"


/**
 * _strdup - Function that copy an array
 * @str: The string that receives
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *ar;

	if (!str)
		return (NULL);
	while (str[size])
		size++;
	ar = malloc(size * sizeof(char) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = str[i];
	ar[i] = '\0';
	return (ar);
}
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
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	if (name)
	{
		my_dog->name = _strdup(name);
		if (my_dog->name == NULL)
			free(my_dog);
	}

	my_dog->age = age;

	if (owner)
	{
		my_dog->owner = _strdup(owner);
		if (my_dog->owner == NULL)
		{
			if (my_dog->name != 0)
				free(my_dog->name);
			free(my_dog);
		}
	}
	/* return struct*/
	return (my_dog);
}
