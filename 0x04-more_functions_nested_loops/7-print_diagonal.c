#include "main.h"

/**
 * print_diagonal - draws a
 * diagonal line on the terminal.
 *
 * @n: number of times the
 * character \ should be printed.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 0; a < n; a++)
		{
			_putchar(92);
		}

		_putchar('\n');
	}
}