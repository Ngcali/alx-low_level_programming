#include "main.h"

/**
 * _strlen - returns the length
 * of a string.
 *
 * @*s: pointer which points to
 * s.
 *
 * @s: string of which length is
 * returned.
 *
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}
