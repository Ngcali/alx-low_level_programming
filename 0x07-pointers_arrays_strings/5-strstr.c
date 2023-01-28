#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @*haystac: pointer to char haystac.
 * @*needle: pointer to char needle.
 *
 * @haystack: string where substring
 * will be located.
 * @needle: string to locate.
 *
 * Return: pointer to the beginning
 * of the located substring, or NULL
 * if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int counter_one, counter_two;

	for (counter_one = 0; haystack[counter_one]; counter_one++)
	{
		for (counter_two = 0; needle[counter_two]; counter_two++)
			if (haystack[counter_one + counter_two] != needle[counter_two])
				break;

		if (needle[counter_two] == '\0')
			return (haystack + counter_one);
	}

	return ('\0');
}
