#include "main.h"

/**
 * print_alphabet - Prints all alphabets
 * in lowercase followed by a new line.
 *
 * Return: void.
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
