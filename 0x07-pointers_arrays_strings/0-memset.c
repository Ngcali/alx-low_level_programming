#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @*s: pointer to char s.
 * @*b: pointer to char b.
 *
 * @s: memory area to be filled.
 * @b: constant byte to fill s.
 * @n: number of bytes of memory area to fill.
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char *b, unsigned int n)
{
	unsigned int my_int;

	my_int = 0;
	while(my_int < n)
	{
		s[my_int] = b;
		my_int++;
	}

	return (s);
}
