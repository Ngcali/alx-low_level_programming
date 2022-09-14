#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0.
 *
 * Return: void.
 */
void times_table(void)
{
	int my_column, my_row, my_units, my_tens, my_product;

	for (my_row = 0; my_row <= 9; my_row++)
	{
		for (my_column = 0; my_column <= 9; my_column++)
		{
			my_product = my_column * my_row;
			my_units = my_product % 10;
			my_tens = my_product / 10;

			if (my_column == 0)
			{
				_putchar('0');
			}
			else if (my_product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(my_units + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(my_tens + '0');
				_putchar(my_units + '0');
			}
		}
		_putchar('\n');
	}
}
