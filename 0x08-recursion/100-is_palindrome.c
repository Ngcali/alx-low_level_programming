#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome - returns 1 if a
 * string is a palindrome and 0 if not.
 *
 * @*s: is a pointer to char s.
 *
 * @s: is the string to be checked.
 *
 * Return: interger value
 */

int is_palindrome_helper(const char *s, int start, int end) {
    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return is_palindrome_helper(s, start + 1, end - 1);
}

int is_palindrome(const char *s) {
    return is_palindrome_helper(s, 0, strlen(s) - 1);
}
