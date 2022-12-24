#include "main.h"

/**
 * more_numbers - prints 10 times
 * the numbers, from 0 to 14.
 *
 * Return: Numbers from 0 to 14,
 * 10 times.
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int a;

		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}

			_putchar((a % 10) + '0');
		}

		_putchar('\n');
	}


}
