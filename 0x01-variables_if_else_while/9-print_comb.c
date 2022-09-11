#include <stdio.h>

/**
 * main - the entry point.
 *
 * Description: print all possible combinations of
 * single-digit numbers.
 *
 * Return: C program always returns 0.
 */
int main(void)
{
	int my_number = 48;

	while (my_number < 58)
	{
		putchar(my_number);

		if (my_number != 57)
		{
			putchar(44);
			putchar(32);
		}
		my_number++;
	}
	putchar(10);
	return (0);
}
