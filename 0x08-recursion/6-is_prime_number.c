#include "main.h"

/**
 * is_prime_number - returns 1 if the
 * input integer is a prime number,
 * otherwise return 0.
 *
 * @n: number that will be checked if
 * it is a prime number.
 * @i: number of iterations.
 *
 * Return: integer value.
 */

int check_if_prime(int n, int i);

int is_prime_number(int n)
{
	return (check_if_prime(n, 1));
}

/**
 * check_if_prime - checks if the
 * integer is a prime number.
 *
 * @n: number that will be checked
 * if it is a prime number.
 * @i: number of iterations.
 *
 * Return: integer value.
 */
int check_if_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_if_prime(n, i + 1));
}
