#include "main.h"

/**
 * print_diagsums - prints the sum
 * of the two diagonals of a square
 * matrix of integers.
 *
 * @*a: pointer to char a.
 *
 * @a: square matrix.
 * @size: size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int my_counter, sum_of_elements_in_first_diagonal, sum_of_elements_in_second_diagonal;

	my_counter = 0;
	while (my_counter < size)
	{
		sum_of_elements_in_first_diagonal += a[(size + 1) * my_counter];
		sum_of_elements_in_second_diagonal += a[(size + 1) * (my_counter + 1)];
		my_counter++;
	}

	printf("%d, %d\n", sum_of_elements_in_first_diagonal, sum_of_elements_in_second_diagonal);
}
