#include <stdio.h>

/**
 * main - Entry point of C program. This program prints the sizes of various data types.
 * Return: 0 as Success.
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)\n", sizeOf(a), sizeOf(b), sizeOf(c), sizeOf(d), sizeOf(e));
	return (0);

}
