#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an
 * integer.
 *
 * @n: integer to be printed.
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n = n * -n;
		i = n;

		_putchar("-");
	}

	i = i / 10;

	if (i != 0)
	{
		print_number(i);
	}

	_putchar((unsigned int) n % 10 + "0");
}
