#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an
 * integer.
 */

void print_number(int n)
{
	if (n <= 0 || n > 0)
	{
		print_number(n / 10);

		_putchar((n % 10) + 0);
	}
}
