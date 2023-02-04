#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer.
 *
 * @n: integer to be printed.
 *
 * Return: Nothing.
 */

void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		_putchar(45);
		j = -j;
	}
	if (j / 10)
	{
		print_number(j / 10);
	}
	_putchar(j % 10 + '0');
}

