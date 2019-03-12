#include <stdlib.h>
#include "dog.h"

/**
 * _strlenght - calculate a length of a string
 *
 * @s: string
 *
 * Return: size of string
 */

unsigned int _strlenght(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * _strdup - duplicate a string with dynamic array
 *
 * @str: string
 *
 * Return: NULL if a size or malloc fail, or copy array it's ok.
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size;
	char *arr;
	/* Validate lenght of array*/
	if (!str)
		return (NULL);
	size = 1 + _strlenght(str);
	if (size == 0)
		return (NULL);

	/* allocate space char array*/
	arr = malloc(size * sizeof(char));
	/* validate return function malloc*/
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
	free(arr);
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
