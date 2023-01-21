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

	while (str[i])
	{
		switch (str[i])
		{
			case 'a'...'m': case 'A'...'M':str[i] += 13;break;
			case 'n'...'z': case 'N'...'Z':str[i] -= 13;break;
			default:break;
		}
	} i++;

	return (str);
}
