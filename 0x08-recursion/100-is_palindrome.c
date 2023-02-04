#include <string.h>

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

int is_palindrome(char *s) {
    int len = strlen(s);
    int i, j;

    // Empty string is considered a palindrome
    if (len == 0)
        return 1;

    // Check if the string is a palindrome
    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (s[i] != s[j])
            return 0;
    }

    return 1;
}

