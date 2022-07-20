#include "main.h"

/**
 * factorial - computes the factorial of a given number recursively.
 *
 * @n: number whose factorial is to be computed.
 *
 * Return: factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
