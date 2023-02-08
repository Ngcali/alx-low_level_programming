#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * main - the entry point.
 *
 * Description: print _putchar, followed by a new line.
 *
 * Return: C program always returns 0.
 */

int _putchar(char c)
{
        c[10] = "_putchar";
	int my_number = 0;

	while (my_number < 8)
	{
		_putchar(c[my_number]);
		my_number++;
	}
	_putchar('\n');
	return (0);
}
