#include "main.h"

/**
 * print_times_table - prints the n times table,
 * starting with 0.
 *
 * @n: the number that the times table
 * will be for.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int my_row, my_column, my_product;

	if (n >= 0 && n < 15)
	{
		for (my_row = 0; my_row <= n; my_row++)
		{
			for (my_column = 0; my_column <= n; my_column++)
			{
				my_product = my_row * my_column;

				if (my_column == 0)
				{
					_putchar('0');
				}
				else if (my_product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(my_product % 10 + '0');
				}
				else if (my_product >= 10 && my_product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((my_product / 10) % 10 + '0');
					_putchar(my_product % 10 + '0');
				}
				else if (my_product > 99 && my_product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(my_product / 100 + '0');
					_putchar((my_product / 10) % 10 + '0');
					_putchar(my_product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
