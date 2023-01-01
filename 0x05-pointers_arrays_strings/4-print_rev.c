#include "main.h"
#include "stdio.h"

void _puts(char *str)
{
	int i;
	int my_num = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{}

	while (my_num < i)
	{
		_putchar(str[i]);
		i--;
	}

	_putchar('\n');
}
