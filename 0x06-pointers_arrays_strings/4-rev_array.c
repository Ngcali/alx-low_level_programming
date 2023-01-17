#include "main.h"

/**
 * reverse_array - reverses the content of an
 * array of integers.
 *
 * @*a: pointer to a.
 * 
 * @a: array of integers.
 * @n: number of elements to be reversed.
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int *my_var;
	int my_counter_one, my_counter_two;
	int my_container;

	my_var = a;
	my_counter_one = 1;
	my_counter_two = 0;

	while (my_counter_one < n)
	{
		my_var++;
		my_counter_one++;
	}

	while (my_counter_two < my_counter_one / 2)
	{
		my_container = a[my_counter_two];
		a[my_counter_two] = *my_var;
		*my_var = my_container;
		my_var--;
		my_counter_two++;
	}
}
