#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: number of which factorial will be calculated.
 *
 * Return: integer value.
 */

int factorial(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return n * factorial(n -1)
}