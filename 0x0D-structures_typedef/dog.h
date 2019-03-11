#ifndef SCOPE_H
#define SCOPE_H
#include "dog.h"
/**
  * struct dog -  struct for dog
  *
  * @name: name of the dog
  * @age: number of years of the dog
  * @owner: name of the owner of the dog
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void print_dog(struct dog *d);
#endif
