#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 *
 * @*a: pointer to char a.
 *
 * @a: an array of chess pieces.
 *
 * Return: Nothing.
 */

void print_chessboard(char (*a)[8])
{
	int counter_one, counter_two;

	counter_one = 0;

	while (counter_one < 8)
	{
		counter_two = 0;
		while (counter_two < 8)
		{
			_putchar(a[counter_one][counter_two]);
			counter_two++;
		}

		_putchar('\n');
		counter_one++;
	}
}
