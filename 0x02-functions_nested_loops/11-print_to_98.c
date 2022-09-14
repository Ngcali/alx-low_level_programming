#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * from n to 98, followed by a new line.
 *
 * @n: is a variable of type integer.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar(n);
			n--;
		}
	}
	printf("98\n");
}
