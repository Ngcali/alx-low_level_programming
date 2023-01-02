#include "main.h"
#include "stdio.h"

void puts_half(char *str)
{
	int i;
	int my_num = 0;
	int length_of_the_string;
	char n;

	for (i = 0; str[i] != '\0'; ++i)
	{}

	length_of_the_string = i;
	n = (length_of_the_string - 1) / 2;
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
