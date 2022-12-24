#include "main.h"

/**
 * print_square - prints a
 * square, followed by a new
 * line.
 *
 * @size: size of the square.
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a = 0;
		for (; a < size; a++)
		{
			int b = 0;
			for (; b < size; b++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
