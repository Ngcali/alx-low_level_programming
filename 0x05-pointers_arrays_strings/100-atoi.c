#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] <= '9' && !(s[i] < '0'))
		{
			printf("%d", s);
		}
		else
		{
			return (0);
		}
	}
}
