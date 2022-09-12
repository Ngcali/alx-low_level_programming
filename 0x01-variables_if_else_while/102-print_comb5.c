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
	int my_num_one, my_num_two, my_num_three, my_num_four;
	
	my_num_one = 48;

	while (my_num_one < 58)
	{
		my_num_two = 48;

		while (my_num_two < 58)
		{
			my_num_four = my_num_two + 1;

			my_num_three = my_num_one;

			while (my_num_three < 58)
			{
				while (my_num_four < 58)
				{
					putchar(my_num_one);
					putchar(my_num_two);
					putchar(32);
					putchar(my_num_three);
					putchar(my_num_four);

					if (my_num_one < 57 || my_num_two < 56 || my_num_three < 57 || my_num_four < 57)
					{
						putchar(44);
						putchar(32);
					}
					my_num_four++;
				}
				my_num_four = 48;
				my_num_three++;
			}
			my_num_two++;
		}
		my_num_one++;
	}
	putchar(10);
	return (0);
}
