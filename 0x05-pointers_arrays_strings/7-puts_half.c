#include "main.h"
#include "stdio.h"

void puts_half(char *str)
{
	int i;
	int length_of_the_string;
	int n;
	int length_of_half;

	for (i = 0; str[i] != '\0'; ++i)
	{}

	length_of_the_string = i;
	length_of_half = i / 2;
	my_counter = length_of_half + 1;
	n = (length_of_the_string - 1) / 2;
	if (i % 2 == 0)
	{
		while (length_of_half < i)
		{
			_putchar(str[length_of_half]);
			length_of_half++;
		}
	}
	else
	{
		while (n < i)
		{
			_putchar(str[n]);
			n++;
		}
	}

	_putchar('\n');
}
