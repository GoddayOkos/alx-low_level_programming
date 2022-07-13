#include "main.h"

/**
 * print_rev - Print string in reverse.
 *
 * @s: string to be printed in reverse.
 *
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
