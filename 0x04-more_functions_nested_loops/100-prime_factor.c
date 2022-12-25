#include "main.h"

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
	long a, my_max_factor, my_number;
	number = 612852475143;
	double my_square_root = sqrt(number);

	for (a = 0; a <= my_square_root; a++)
	{
		if (my_number % a == 0)
		{
			my_max_factor = my_number / a;
		}
	}

	printf("%ld\n", my_max_factor);

	return (0);
}
