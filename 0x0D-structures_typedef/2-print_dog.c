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
	float new_age;
	char *new_owner;

	if ((*d).name == NULL)
		new_name = "(nil)";
	else
		new_name = (*d).name;

	if ((*d).age == NULL)
		new_age = "(nil)";
	else
		new_age = (*d).age;
	
	if ((*d).owner == NULL)
		new_owner = "(nil)";
	else
		new_owner = (*d).owner;
	
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", new_name, new_age, new_owner);
}
