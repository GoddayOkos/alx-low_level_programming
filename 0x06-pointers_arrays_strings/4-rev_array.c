#include "main.h"

/**
 * reverse_array - Reverse array of int
 *
 * @a: Array of int
 * @n: Number of elements in a
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		int temp = a[i];
		int last = n - i - 1;

		a[i] = a[last];
		a[last] = temp;
	}
}
