#include "main.h"
#include "stdio.h"

/**
 * print_rev - prints a string,
 * in reverse, followed by a new
 * line.
 *
 * @*s: pointer which points to
 * char s.
 *
 * @s: char in which pointer points
 * to.
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int my_num = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{}

	while (my_num <= i)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
