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
	int num_one, num_two, num_three, num_four;

	num_one = 48;

	while (num_one < 58)
	{
		num_two = 48;

		while (num_two < 58)
		{
			num_four = num_two + 1;

			num_three = num_one;

			while (num_three < 58)
			{
				while (num_four < 58)
				{
					putchar(num_one);
					putchar(num_two);
					putchar(32);
					putchar(num_three);
					putchar(num_four);

					if (num_one < 57 || num_two < 56 || num_three < 57 || num_four < 57)
					{
						putchar(44);
						putchar(32);
					}
					num_four++;
				}
				num_four = 48;
				num_three++;
			}
			num_two++;
		}
		num_one++;
	}
	putchar(10);
	return (0);
}
