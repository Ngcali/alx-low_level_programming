#include <stdio.h>

/**
 * main - the entry point.
 *
 * Description: prints the alphabet in lowercase.
 *
 * Return: C program always return 0.
 */
int main(void)
{
	int my_a = 97;

	while (my_a < 123)
	{
		putchar(my_a);
		my_a++;
	}
	putchar(10);
	return (0);
}
