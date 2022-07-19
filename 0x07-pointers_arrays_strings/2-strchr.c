#include "main.h"

/**
 * _strchr - A program the locates the first occurance of c
 * in s.
 *
 * @s: The string to be searched
 * @c: The character to be located
 *
 * Return: A pointer to first occurance of c in s or NULL.
 */

char *_strchr(char *s, char c)
{
	char *pointer;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			pointer = &s[i];
			break;
		}
	}

	return (pointer);
}
