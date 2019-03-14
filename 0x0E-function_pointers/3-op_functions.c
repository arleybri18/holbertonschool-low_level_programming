#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - function sum two numbers
 *
 * @a: firts number
 * @b: second number
 *
 * Return: sum of number a + b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subtrac two numbers
 *
 * @a: firts number
 * @b: second number
 *
 * Return: sub of number a + b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function multiply two numbers
 *
 * @a: firts number
 * @b: second number
 *
 * Return: multiply of number a + b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divide two numbers
 *
 * @a: firts number
 * @b: second number
 *
 * Return: divide of number a + b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function module two numbers
 *
 * @a: firts number
 * @b: second number
 *
 * Return: module of number a + b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
