#include "main.h"

/**
 * main - the entry point.
 *
 * Description: prints the alphabet, in
 * lowercase, followed by a new line.
 *
 * Return: C program always returns 0.
 */
void print_alphabet(void)
{
	char my_num = 'a';

	while (my_num < 'z')
	{
		_putchar(my_num);
		my_num++;
	}
	_putchar('\n');
	return (0);
}
