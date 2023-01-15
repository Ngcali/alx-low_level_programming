#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int i = 0;
	int minus_sign = 1;
	unsigned int new_int = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			minus_sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			new_int = (new_int * 10) + (s[i] - '0');
			i++;

			while (s[i] >= '0' && s[i] <= '9')
			{
				new_int = (new_int * 10) + (s[i] - '0');
				i++;
			}

			break;
		}

		else
		{
			i++;
		}
	}

	new_int *= minus_sign;
	return new_int;
}
