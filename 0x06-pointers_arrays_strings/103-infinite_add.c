#include "main.h"
#include <stdio.h>
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

	if (size_r <= len + 1)
		return (0);

	r[len + 1] = '\0';
	while (len1 || len2 || carry)
	{
		int sum = carry;

		if (len1)
			sum += n1[--len1] - '0';
		if (len2)
			sum += n2[--len2] - '0';

		carry = sum / 10;
		r[len--] = (sum % 10) + '0';
	}
	return (r + len + 1);
}
