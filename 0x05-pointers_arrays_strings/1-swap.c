#include "main.h"

/**
 * swap_int - swaps the values
 * of two integers.
 *
 * @*a: pointer which points to a
 *
 * @*b: pointer which points to b
 *
 * @a: first integer to swap
 * with second integer.
 *
 * @b: second integer to swap
 * with first integer.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int store_a;

	store_a = *a;
	*a = *b;
	*b = store_a;
}
