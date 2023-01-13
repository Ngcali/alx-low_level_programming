#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int i;
	int my_number = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i]> '9' || str[i]<'0')
		{
			return (-1);
		}

		my_number = my_number * 10 + str[i] - '0';
	}

	return (my_number);
}
