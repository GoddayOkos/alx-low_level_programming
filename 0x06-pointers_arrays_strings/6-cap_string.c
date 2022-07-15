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
	bool to_cap = false;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			to_cap = true;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (separators[j] == str[i])
				to_cap = true;
		}

		if (to_cap)
		{
			if (to_cap)
			{
				if (str[i] > 96 && str[i] < 123)
				{
					str[i] -= 32;
					to_cap = false;
				}
				else if (str[i] > 64 && str[i] < 91)
					to_cap = false;
				else if (str[i] > 47 && str[i] < 58)
					to_cap = false;
			}
		}
	}

	return (str);
}
