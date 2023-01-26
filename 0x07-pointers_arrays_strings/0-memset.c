#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @*dest: pointer to char dest.
 * @*src: pointer to char src.
 *
 * @dest: memory area where src is copied to.
 * @src: memory area to be copied.
 * @n: number of bytes of memory area that
 * will be copied.
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int my_int;

	my_int = 0;
	while(my_int < n)
	{
		dest[my_int] = src;
		my_int++;
	}

	return (dest);
}
