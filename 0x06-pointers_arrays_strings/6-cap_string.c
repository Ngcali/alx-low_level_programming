#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @*str: pointer to str.
 *
 * @str: string of which words will be capitalized.
 *
 * Return: char value.
 */

char *cap_string(char *str)
{
	int i;
	int x = 0;
	const my_const = 13;
	char my_list[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	for (x = 0; str[x]; x++)
	{
		for (i = 0; i < my_const; i++)
		{
			if ((x == 0 || str[x - 1] == my_list[i]) && (str[x] >= 97 && str[x] <= 122))
			{
				str[x] -= 32;
			}
		}
	}

	return (s);
}
