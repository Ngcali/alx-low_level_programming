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

int is_palindrome(const char *s) {
    int i, j;
    int len = strlen(s);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (s[i] != s[j])
            return 0;
    }

    return 1;
}
