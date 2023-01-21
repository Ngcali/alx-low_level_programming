#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @*str: pointer to str.
 *
 * @str: string to be encoded.
 *
 * Return: encoded string.
 */

char *leet(char *str)
{
	int i;
	int j;
	int array_length = 5;
	char array_letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char array_numbers[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == array_letters[j] || str[i] - 32 == array_letters[j])
			{
				str[i] = array_numbers[j];
			}
		}
	}

	return (str);
}
