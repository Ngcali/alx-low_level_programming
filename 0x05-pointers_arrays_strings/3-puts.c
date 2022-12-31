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
	int i;
	int my_num;

	for (i = 0; str[i] != '\0'; ++i);

	while (my_num < i)
	{
		_putchar(str[my_num]);
		my_num;
	}
	_putchar('\n');
}
