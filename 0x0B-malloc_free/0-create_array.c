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
	/*Allocate memory for the array*/
	char *arr = malloc(size * sizeof(char));

	if (arr == NULL || size == 0)
	{
		/*Return NULL if allocation fails or size is 0*/
		return NULL;
	}

	for (unsigned int i = 0; i < size; i++)
	{
		/*Initialize the array with the given char*/
		arr[i] = c;
	}

	/*Return a pointer to the array*/
	return arr;
}
