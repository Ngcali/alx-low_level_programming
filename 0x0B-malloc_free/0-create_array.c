#include <stdlib.h>

/**
 * create_array - creates an array
 * of chars, and initializes it
 * with a specific char.
 *
 * @size: size of the array to be created.
 *
 * @c: element of each array.
 *
 * Return: pointer to array of characters
 * it creates, NULL if fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int my_counter;

	/*Allocate memory for the array*/
	char *my_arr = malloc(size * sizeof(char));

	if (my_arr == NULL || size == 0)
	{
		/*Return NULL if allocation fails or size is 0*/
		return (NULL);
	}

	for (my_counter = 0; my_counter < size; my_counter++)
	{
		/*Initialize the array with the given char*/
		my_arr[my_counter] = c;
	}

	/*Return a pointer to the array*/
	return (my_arr);
}
