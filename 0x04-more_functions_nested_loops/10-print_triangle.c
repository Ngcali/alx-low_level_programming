#include "main.h"

/**
 * print_triangle - prints a triangle.
 *
 * @size: the size of the triangle.
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 0; a <= size; a++)
		{
			int b;

			for (b = size - a; b > 1; b++)
			{
				_putchar(32);
			}

			int c;

			for (c = 0; c <= a; c++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
