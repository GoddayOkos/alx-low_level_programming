#include "main.h"
int is_prime(int n, int div);

/**
 * is_prime_number - check if the given number n is prime.
 *
 * @n: integer under test.
 *
 * Return: 1 if n is prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	return (is_prime(n, 2));
}


/**
 * is_prime - check if the given number n is prime.
 *
 * @n: integer under test
 * @div: divisor
 *
 * Return: 1 if n is prime else 0
 */

int is_prime(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);

	return (is_prime(n, div + 1));
}
