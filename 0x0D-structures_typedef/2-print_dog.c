#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer thar receive the struct dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	char *new_name;
	char *new_owner;

	if ((*d).name == NULL)
		new_name = "(nil)";
	else
		new_name = (*d).name;
	
	if ((*d).owner == NULL)
		new_owner = "(nil)";
	else
		new_owner = (*d).owner;

	if ((*d).age == 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", new_name, new_owner);
	else
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", new_name, (*d).age, new_owner);

}
