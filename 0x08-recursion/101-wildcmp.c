#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * wildcmp - compares two strings
 * and returns 1 if the strings
 * can be considered identical,
 * otherwise return 0.
 *
 * @*s1: pointer to char s.
 * @*s2: pointer to char s2.
 *
 * @s1: string to compare with.
 * @s2: string to compare.
 *
 * Return: interger value
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	}
	else if (*s1 == *s2)
	{
		if (wildcmp(s1 + 1, s2 + 1))
			return (1);
	}

	return (0);
}
