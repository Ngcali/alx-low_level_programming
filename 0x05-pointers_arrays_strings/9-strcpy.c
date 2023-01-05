#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * pointed to by src, including
 * the terminating null byte
 * (\0), to the buffer pointed
 * to by dest.
 *
 * @*src: pointer to src.
 * @*dest: pointer to dest.
 *
 * @src: string to be copied,
 * string pointed to by *src.
 * @dest: variable to copy to,
 * string pointed to by *dest.
 *
 * Return: the pointer to dest.
 */

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

	/*dest[my_counter++] = '\0';*/

	return (dest);
}
