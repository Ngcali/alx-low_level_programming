#include "main.c"

/**
 * _isdigit - a function that checks
 * for a digit (0 through 9).
 * @c: is the intenteger that is
 * checked.
 * Return: 1 if c is a digit.
 * Return: 0 otherwise.
 */

int is_digit(int c)
{
    if (c <= 57 && c >=48)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
