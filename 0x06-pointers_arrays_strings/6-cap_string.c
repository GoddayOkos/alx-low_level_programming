#include "main.h"

/**
 * cap_string - Capitalize all words in string str
 *
 * @str: String
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i, j;
	char separators[] = ",;.!?(){}\n\t\" ";
	int to_cap = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			to_cap = 1;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (separators[j] == str[i])
				to_cap = 1;
		}

		if (to_cap)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				to_cap = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				to_cap = 0;
			else if (str[i] > 47 && str[i] < 58)
				to_cap = 0;
		}
	}

	return (str);
}
