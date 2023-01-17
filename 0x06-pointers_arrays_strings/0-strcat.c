#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 *
 * @*dest: pointer to dest.
 * @*src: pointer to src.
 *
 * @dest: string to be appended.
 * @src: string to append to dest.
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *_strcat(char *dest, char *src)
	{
		int dest_length = 0;
		int i = 0;

		while (dest[dest_length])
		{
			dest_length++;
		}
		while (src[i] != 0)
		{
			dest[dest_length] = src[i];
			dest_length++;
			i++;
		}
		dest[dest_length] = '\0';
		return (dest);
	}
}
