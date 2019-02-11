#include <stdio.h>

/**
 *main : Entry point
 *
 */

#include <unistd.h>

/**
   * _putchar - writes the character c to stdout
    * @c: The character to print
     *
      * Return: On success 1.
       * On error, -1 is returned, and errno is set appropriately.
        */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

int main(void)
{
	_putchar('H');
	_putchar('o');
	_putchar('l');
	_putchar('b');
	_putchar('e');
	_putchar('r');
	_putchar('t');
	_putchar('o');
	_putchar('n');
	printf("\n");
	return (0);

}