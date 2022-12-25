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
		n = n * -1;
		_putchar('-');
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((unsigned int) n / 10 + '0');
}
