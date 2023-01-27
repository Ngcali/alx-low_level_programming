#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#include "main.h"

/**
 * _memcpy - that copies memory area.
 *
 * @*dest: ponter to char dest.
 * @*src: pointer to char src.
 *
 * @dest: destination memory area where source
 * memory area will be copied to.
 * @src: source memory area to be copied.
 * @n: number of bytes from the memory area
 * to be copied.
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int my_int;

	my_int = 0;
	while (my_int < n)
	{
		dest[my_int] = src[my_int];
		my_int++;
	}

	return (dest);
}
