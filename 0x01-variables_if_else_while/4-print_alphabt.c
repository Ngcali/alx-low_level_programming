#include <stdio.h>

/**
 * main - the entry point.
 *
 * Description: prints the alphabet in lowercase, followed
 * by a new line.
 *
 * Return: C program always returns 0.
 */
int main(void)
{
	int my_a = 97;

	while (my_a < 123)
	{
		if (my_a != 101 && my_a != 113)
		{
			putchar(my_a);
		}
		my_a++;
	}
	putchar(10);
	return (0);
}
