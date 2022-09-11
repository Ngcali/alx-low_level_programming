#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: print the lowercase alphabet in
 * reverse, followed by a new line.
 *
 * Return: C program always returns 0.
 */
int main(void)
{
	int my_z = 122;

	while (my_z > 95)
	{
		putchar(my_z);
		my_z--;
	}
	putchar(my_z);
	return (0);
}
