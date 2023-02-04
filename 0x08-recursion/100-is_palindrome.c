#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome - returns 1 if a
 * string is a palindrome and 0 if not.
 *
 * is_palindrome_helper - where the
 * recursive logic is implemented.
 *
 * @*s: is a pointer to char s.
 *
 * @s: is the string to be checked.
 *
 * @start: start index of the current
 * substring being checked for palindromeness.
 *
 * @end: end index of the current
 * substring being checked for palindromeness.
 *
 * Return: interger value
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return 1;
	if (s[start] != s[end])
		return 0;
	return is_palindrome_helper(s, start + 1, end - 1);
}

int is_palindrome(char *s)
{
	return is_palindrome_helper(s, 0, strlen(s) - 1);
}
