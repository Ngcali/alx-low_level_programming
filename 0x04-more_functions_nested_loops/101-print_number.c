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
	/*if (n >= 0)
	{
		_putchar(n + '0');
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}*/

	/*if (n / 10)
		print_number(n / 10);*/

	/*_putchar(n + '0');*/

	/*print_number(n + '0');*/

	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;

		_putchar('-');
	}

		k /= 10;

		if (k != 0)
			print_number(k);

		_putchar((unsigned int) n % 10 + '0');
}
