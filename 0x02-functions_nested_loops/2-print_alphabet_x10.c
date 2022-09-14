#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 *
 * Description: prints 10 times the alphabet, in
 * in lowercase, followed by a new line.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char my_letter;
	int my_iteration = 1;

	while (my_iteration <= 10)
	{
		my_letter = 'a';

		while (my_letter <= 'z')
		{
			_putchar(my_letter);
			my_letter++;
		}
		_putchar('\n');
	}
}
