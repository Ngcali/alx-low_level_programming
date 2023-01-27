#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @*s: pointer to char s.
 *
 * @s: string given.
 * @c: character to locate.
 *
 * Return: a pointer to the first occurrence
 * of the character c in the string s, or NULL
 * if the character is not found.
 */


char *_strchr(char *s, char c)
{
	int counter_one, counter_two;

	counter_one = 0;
	while (s[counter_one])
	{
		counter_one++;
	}

	counter_two = 0;
	while (counter_two <= counter_one)
	{
		if (c == s[counter_two])
		{
			s += counter_two;
			return (s);
		}

		counter_two++;
	}

	return ('\0');
}
