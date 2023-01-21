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
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			{
				str[i] -= 13;
				break;
			}

			str[i] += 13;
			break;
		}
	}

	return (str);
}
