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

	if (str[i] >= 'a' && str[i] <= 'm')
	{
		str[i] += 13;
	}
	else if (str[i] >= 'A' && str[i] <= 'M')
	{
		str[i] += 13;
	}
	else if (str[i] >= 'n' && str[i] <= 'z')
	{
		str[i] -= 13;
	}
	else if (str[i] >= 'N' && str[i] <= 'Z')
	{
		str[i] -= 13;
	}

	return (str);
}
