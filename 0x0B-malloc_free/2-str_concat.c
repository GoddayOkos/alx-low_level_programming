#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: pointer to concatened strings or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len, s2_len, i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len]; s2_len++)
		;

	new_str = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < (s1_len + s2_len + 1); i++)
	{
		if (i < s1_len)
			new_str[i] = s1[i];
		else
			new_str[i] = s2[i - s1_len];
	}

	return (new_str);
}
