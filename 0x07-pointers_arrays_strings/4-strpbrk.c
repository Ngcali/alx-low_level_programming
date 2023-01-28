#include "main.h"

/**
 * _strpbrk - searches a string for any
 * of a set of bytes.
 *
 * @*s: pointer to char s.
 * @*accept: pointer to char accept.
 *
 * @s: source string.
 * @accept: accepted array of characters.
 *
 * Return: pointer to the byte in s that
 * matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int counter_one, counter_two;

	for (counter_one = 0; accept[counter_one]; counter_one++)
	{
		for (counter_two = 0; s[counter_two] != 32; counter_two++)
		{
			if (accept[counter_two] == s[counter_one])
			{
				s += counter_one;
				return (s);
			}
		}
	}

	return ('\0');
}
