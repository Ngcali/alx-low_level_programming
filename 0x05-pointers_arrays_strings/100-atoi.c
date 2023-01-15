#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int i;
	int my_number = 0;
	int minus_sign = 1;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			minus_sign *= -1;
			i++;
		}
	}


	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			my_number = my_number * 10 + s[i] - '0';
		}
	}

	my_number *= minus_sign;
	return (my_number);
}
