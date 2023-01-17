#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 *
 * @*str: pointer to str.
 *
 * @str: string of which letters will be changed
 * to uppercase.
 *
 * Return: string with uppercase letters.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i <= str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}

	return (str);
}
