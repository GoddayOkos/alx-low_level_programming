#include "main.h"

/**
 * _strlen_recursion - returns the length of the given string s.
 *
 * @s: string whose length is to be determined.
 *
 * Return: length of the string s
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
