#include "main.h"

/**
 * _puts - Prints the given string to std output.
 *
 * @s: string to be printed.
 *
 * Return: Nothing.
 */

void _puts(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
