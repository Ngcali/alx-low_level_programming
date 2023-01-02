#include "main.h"
#include "stdio.h"

void puts_half(char *str)
{
	int i;
	int my_num = 0;
	char n = (length_of_the_string - 1) / 2;

	for (i = 0; str[i] != '\0'; ++i)
	{}

	if (i % 2 == 0)
	{
		while (my_num < i)
		{
			_putchar(str[my_num]);
			my_num++;
		}
	}
	else
	{
		_putchar(n);
	}

	_putchar('\n');
}
