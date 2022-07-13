#include "main.h"

/**
 * swap_int - Swap the value of two integers.
 *
 * @a: The first of 2 values to be swapped.
 * @b: The second of two values to be swapped.
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
