#include "main.h"
#include "stdio.h"

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
