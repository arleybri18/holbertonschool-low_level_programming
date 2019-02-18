#include "holberton.h"
#include <stdio.h>

/**
   * main - check the code for Holberton School students.
    *
     * Return: Always 0.
      */

long int sumatorie(int max)
{
	int i;
	long int aux;
	
	i = 0;
	aux = 0;
	while (i < max)
	{	
		if (i % 3 == 0 || i % 5 == 0)
		{
			aux =  aux + i;
		}
		i++;
	}
	return (aux);
}

int main(void)
{
	long int suma;
	
	suma = sumatorie(1024);
	printf("%ld \n", suma);
	return (0);
}
