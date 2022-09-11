#include <stdio.h>

/**
 * main - the entry point.
 *
 * Description: prints the alphabet in lowercase, and
 * then in uppercase, followed by a new line.
 *
 * Return: C program always returns 0.
 */
int main(void)
{
	int my_a = 97;
	int my_A = 65;

	while (my_a < 123)
	{
		putchar(my_a);
		my_a++;
	}

	while (my_A < 91)
	{
		putchar(my_A);
		my_A++;
	}
	putchar(10);
	return (0);
}
