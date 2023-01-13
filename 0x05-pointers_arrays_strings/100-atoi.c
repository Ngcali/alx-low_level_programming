#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int i;
	int my_number = 0;
	int my_sign = 1;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
		{
			my_number = my_number * 10 + s[i] - '0';
		}
	}

	return (my_number);
}
