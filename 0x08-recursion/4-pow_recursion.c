#include "main.h"

/**
 * _pow_recursion - returns the value of x
 * raised to the power of y.
 *
 * @x: value to be multiplied.
 * @y: number of times x value will be
 * multiplied for.
 *
 * Return: an integer value.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
