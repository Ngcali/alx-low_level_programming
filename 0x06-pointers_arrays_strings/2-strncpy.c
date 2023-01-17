#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @*dest: pointer to dest.
 * @*src: pointer to src.
 *
 * @dest: destination to copy the string to.
 * @src: the string to copy to dest.
 * @n: copy limit.
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;
	int i, j;

	while (src[y])
	{
		y++;
	}

	for (i = 0; x < n && src[x]; i++)
	{
		dest[x] = src[x];
		x++;
	}

	for (j = 0; x < n; j++)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
