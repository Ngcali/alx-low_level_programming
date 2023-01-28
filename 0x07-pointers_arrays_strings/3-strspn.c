#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @*s: pointer to char s.
 * @*accept: pointer to char accept.
 *
 * @s: source string.
 * @accept: string that will be accepted.
 *
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes
 * from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter_one, counter_two, my_bytes;

	my_bytes = 0;

	for (counter_one = 0; accept[counter_one]; counter_one++)
	{
		for (counter_two = 0; s[counter_two] != 32; counter_two++)
		{
			if (accept[counter_one] == s[counter_two])
			{
				my_bytes++;
			}
		}
	}

	return (my_bytes);
}
