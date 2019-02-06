#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int i;
	long l;
	long long ll;
	float fl;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(fl));
	return (0);
}
