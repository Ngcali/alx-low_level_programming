#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @*s1: pointer to s1.
 * @*s2: pointer to s2.
 *
 * @s1: first string to compare.
 * @s2: second string to compare.
 *
 * Return: integer.
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0;
	int j = 0;
	int my_lim;

	while (s1[x])
	{
		x++;
	}

	while (s2[y])
	{
		y++;
	}

	if (x <= y)
	{
		my_lim = x;
	}
	else
	{
		my_lim = y;
	}

	while (z <= my_lim)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;
		}
		else
		{
			j = s1[z] - s2[z];
			break;
		}
		z++;
	}
	return (j);
}
