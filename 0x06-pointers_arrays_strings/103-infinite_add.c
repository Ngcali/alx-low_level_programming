#include <string.h>

/**
 * infinite_add - adds two numbers.
 *
 * @*n1: pointer to char n1.
 * @*n2: pointer to char n2.
 * @*r: pointer to char r.
 * @*size_r: pointer to size_r.
 *
 * @n1: input string one.
 * @n2: input string two.
 * @r: array to be inputed.
 * @size_r: size of the array which
 * will be inputed.
 *
 * Return: char value
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int len = (len1 > len2) ? len1 : len2;
    int carry = 0;
    int i, j;

    if (size_r <= len + 1)
        return 0;

    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
    {
        int a = (i >= 0) ? n1[i] - '0' : 0;
        int b = (j >= 0) ? n2[j] - '0' : 0;
        int sum = a + b + carry;
        carry = sum / 10;
        r[--len] = (sum % 10) + '0';
    }
    if (carry)
        r[--len] = carry + '0';
    return r + len;
}
