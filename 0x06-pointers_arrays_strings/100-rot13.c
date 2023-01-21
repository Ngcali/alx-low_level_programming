#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 *
 * @*str: pointer to str.
 *
 * @str: string to be encoded.
 *
 * Return: encoded string.
 */

char *rot13(char *str)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'm')
	{
		s[i] += 13;
	}
	else if (s[i] >= 'A' && s[i] <= 'M')
	{
		s[i] += 13;
	}
	else if (s[i] >= 'n' && s[i] <= 'z')
	{
		s[i] -= 13;
	}
	else if (s[i] >= 'N' && s[i] <= 'Z')
	{
		s[i] -= 13;
	}

	return (str);
}
