#include "main.h"

#include <unistd.h>

/**
 * main - Entry point
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: nothing, return void
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
int _putchar(char c)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');

return (0);
	return (write(1, &c, 1));
}
