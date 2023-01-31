#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * @*s: pointer to char s.
 *
 * @s: string to be reversed.
 *
 * Return: No value will be returned.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
