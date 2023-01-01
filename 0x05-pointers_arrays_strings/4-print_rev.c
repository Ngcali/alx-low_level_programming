#include "main.h"
#include "stdio.h"

void print_rev(char *s)
{
	int i;
	int my_num = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{}

	while (my_num < i)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
