#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n
 * elements of an array
 * of integers, followed
 * by a new line.
 *
 * @*a: pointer to int a.
 *
 * @a: array of which
 * elements are to be
 * printed.
 *
 * @n: number of elements
 * to be printed.
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i < n)
		{
			printf("%d, ", a[i]);
		}
		else if (i == n)
		{
			printf("%d", a[i]);
		}

	}

	printf("\n");
}
