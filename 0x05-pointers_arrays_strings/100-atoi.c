#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int i = 0;
	int my_number = 0;
	int minus_sign = 1;
	/*unsigned int new_int = 0;*/

	while (s[i])
	{
		if (s[i] == '-')
		{
			minus_sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			my_number = (my_number * 10) + (s[i] - '0');
			i++;

			while (s[i] >= '0' && s[i] <= '9')
			{
				my_number = (my_number * 10) + (s[i] - '0');
				i++;
			}

			break;
		}

		else
		{
			i++;
		}
	}

	my_number *= minus_sign;
	return my_number;
}
