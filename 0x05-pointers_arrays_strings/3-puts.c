#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * followed by a new line.
 *
 * @*str: pointer which points
 * to str.
 *
 * @str: string in which pointer
 * points to.
 */

void _puts(char *str)
{
	int my_counter;

	for (my_counter = 0; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
