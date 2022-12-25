#include <stdio.h>
#include "math.h"

/**
 * main - finds and prints
 * the largest prime factor
 * of the number 612852475143,
 * followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	long a, my_max_factor;
	long my_number = 612852475143;
	double my_square_root = sqrt(my_number);

	for (a = 1; a <= my_square_root; a++)
	{
		if (my_number % a == 0)
		{
			my_max_factor = my_number / a;
		}
	}

	printf("%ld\n", my_max_factor);

	return (0);
}
