#include "main.h"

/**
 * is_palindrome - returns 1 if a string
 * is a palindrome and 0 if not.
 *
 * @*s: pointer to char s.
 *
 * @s: string to be checked if it is a
 * palindrome.
 *
 * Return: interger value.
 */

int check_if_palindrome(char *s);

int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_if_palindrome(s));
}

/**
 * check_if_palindrome - checkes if a
 * string is palindrome.
 *
 * @s: string to be checked if it is
 * a palindrome.
 *
 * Return: integer value.
 */

int check_if_palindrome(char *s)
{
	int str_l = _strlen_recursion(s) - 1;

	if (*s == s[str_l])
	{
		s++;
		str_l--;
	}
	else
	{
		return (1);
	}

	return (1);
}

/**
 * _strlen_recursion - calculates the
 * length of a string.
 *
 * @s: string of which length is to be
 * calculated.
 *
 * Return: integer value.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
