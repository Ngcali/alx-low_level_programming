#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @*dest: pointer to dest.
 * @*src: pointer to src.
 *
 * @dest: string to concatenate to.
 * @src: string to be cocatenated.
 * @n: limit of concatenation.
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int i;

	while (dest[dest_length])
	{
		dest_length++;
	}

	for (i = 0; i < n && src[j]; i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
	}

	dest[dest_length + n + 1] = '\0';
	return (dest);
}
