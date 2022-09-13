#include "main.h"

/**
 * print_alphabet - prints the alphabet.
 *
 * Description: prints the alphabet, in
 * lowercase, followed by a new line.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char my_num = 'a';

	while (my_num <= 'z')
	{
		_putchar(my_num);
		my_num++;
	}
	_putchar('\n');
}
