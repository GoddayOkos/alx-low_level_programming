#include "main.h"

#define LOWER_START 97
#define LOWER_END 122
#define LOWER_UPPER_DIFF 32

/**
 * string_toupper - Convert lowercase char to uppercase
 *
 * @str: String
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= LOWER_START && str <= LOWER_END)
			str[i] -= LOWER_UPPER_DIFF;
	}

	return (str);
}
