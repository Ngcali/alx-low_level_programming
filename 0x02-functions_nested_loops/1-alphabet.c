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
	char my_letter = 'a';

	while (my_letter <= 'z')
	{
		_putchar(my_letter);
		my_letter++;
	}
	_putchar('\n');
}
