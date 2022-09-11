#include <stdio.h>

/**
 * main - the entry point.
 *
 * Desciption: print all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: C program always returns 0.
 */
int main(void)
{
	int my_number = 48;

	while (my_number < 58)
	{
		putchar(my_number);
		my_number++;
	}
	putchar(10);
	return (0);
}
