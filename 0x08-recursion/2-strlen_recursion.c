#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @*s: pointer to char s.
 *
 * @s: string of which length is to be counted.
 *
 * Return: an integer value.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
