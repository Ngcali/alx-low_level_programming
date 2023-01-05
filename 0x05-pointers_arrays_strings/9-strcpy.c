#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	int i;
	int my_counter;

	for (i = 0; src[i] != '\0'; i++)
	{}

	my_counter = 0;
	while (my_counter <= i)
	{
		dest[my_counter] = src[my_counter];
		my_counter++;
	}

	dest[my_counter++] = '\0';

	return (dest);
}
