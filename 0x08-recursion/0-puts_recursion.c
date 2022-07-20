#include "main.h"

/**
 * _puts_recursion - prints the characters in s recursively.
 *
 * @s: string to print
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
