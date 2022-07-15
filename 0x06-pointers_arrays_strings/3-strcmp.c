#include "main.h"

/**
 * _strcomp - Copmares two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int indicating the status.
 */

int _strcomp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
