#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - A program that adds positive numbers
 * @argc: The arguments' counter
 * @argv: The argument's values
 * Return: 0 as Success.
 */

int main(int argc, char *argv[])
{
	int i, result;

	result = 0;

	if (argc == 1)
	{
		printf("%d\n", result);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(isdigit(argv[i])))
		{
			printf("Error\n");
			return (1);
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
