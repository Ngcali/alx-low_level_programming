#include <stdio.h>

/**
 * main - the entry point.
 *
 * Description: print all possible combinations
 * of two two-digit numbers.
 *
 * Return: C program always returns 0.
 */
int main(void)
{
	int my_number_one, my_number_two, my_number_three, my_number_four;
	
	my_number_one = 48;

	while (my_number_one < 58)
	{
		my_number_two = 48;

		while (my_number_two < 58)
		{
			my_number_four = my_number_two + 1;

			my_number_three = my_number_one;

			while (my_number_three < 58)
			{
				while (my_number_four < 58)
				{
					putchar(my_number_one);
					putchar(my_number_two);
					putchar(32);
					putchar(my_number_three);
					putchar(my_number_four);

					if (my_number_one < 57 || my_number_two < 56 || my_number_three < 57 || my_number_one;
					{
						putchar(44);
						putchar(32);
					}
					my_number_four++;
				}
				my_number_four = 48;
				my_number_three++;
			}
			my_number_two++;
		}
		my_number_one++;
	}
	putchar(10);
	return (0);
}
