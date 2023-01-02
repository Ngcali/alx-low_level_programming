#include "main.h"
#include "stdio.h"

/**
 * puts2 - prints every other
 * character of a string,
 * starting with the first
 * character, followed by a
 * new line.
 *
 * @*str: pointer that points
 * to char str.
 *
 * @str: string that will be
 * printed.
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int my_num = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{}

	while (my_num < i)
	{
		_putchar(str[my_num]);
		my_num += 2;
	}

	_putchar('\n');
}
