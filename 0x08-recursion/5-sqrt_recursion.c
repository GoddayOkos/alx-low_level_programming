#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - computes th sqrt of a number recursively.
 *
 * @n: number whose sqrt is to be computed.
 *
 * Return: sqrt of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}


/**
 * _sqrt - computes the square of a number recursively.
 *
 * @prev: the previous value
 * @root: the number whose sqrt we are computing
 *
 * Return: sqrt of root.
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
