#include <stdio.h>

/**
 * main - the entry point.
 *
 * Descreption: print all possible different
 * combinations of two digits.
 *
 * Return: C program always returns 0.
 */
int main(void)
{
	int my_number_one, my_number_two;

	my_number_one = 48;
	my_number_two = 48;

	while (my_number_one < 58)
	{
		my_number_two = my_number_one + 1;

		while (my_number_two < 58)
		{
			putchar(my_number_one);
			putchar(my_number_two);

			if (my_number_one < 56 || my_number_two < 57)
			{
				putchar(44);
				putchar(32);
			}
			my_number_two++;
		}
		my_number_one++;
	}
	putchar(10);
	return (0);
}
