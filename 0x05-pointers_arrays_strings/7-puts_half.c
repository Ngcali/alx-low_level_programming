#include "main.h"
#include "stdio.h"

/**
 * puts_char - prints half
 * of a string, followed
 * by a new line.
 *
 * @*s: pointer which points
 * t char str.
 *
 * @s: string to be printed.
 */

void puts_half(char *str)
{
	int i;
	int length_of_the_string;
	int n;
	int length_of_half;
	int my_counter;
	int my_counter_odd;

	for (i = 0; str[i] != '\0'; ++i)
	{}

	length_of_the_string = i;
	length_of_half = i / 2;
	my_counter = length_of_half;
	n = (length_of_the_string - 1) / 2;
	my_counter_odd = n;
	if (i % 2 == 0)
	{
		while (my_counter < i)
		{
			_putchar(str[my_counter]);
			my_counter++;
		}
	}
	else
	{
		while (my_counter_odd < i)
		{
			_putchar(str[my_counter_odd]);
			my_counter_odd++;
		}
	}

	_putchar('\n');
}
