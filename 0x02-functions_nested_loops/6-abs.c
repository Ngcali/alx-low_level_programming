#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @my_int: is a variable of type integer.
 *
 * Return: absolute value of an integer.
 */
int _abs(int my_int)
{
	if (my_int > 0)
	{
		return (my_int);
	}
	else if (my_int < 0)
	{
		return (-my_int);
	}
	else
	{
		return (my_int);
	}
}
