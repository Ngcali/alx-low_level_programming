#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer.
 *
 * @*b: pointer to char b.
 *
 * @b: element in the buffer.
 * @size: number of bytes to be printed.
 *
 * Return: Nothing
 */

void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i++)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		printf("%02x ", b[i]);
		if (i % 10 == 9 || i == size - 1)
		{
			for (int j = i - (i % 10); j <= i; j++)
				printf("%c", isprint(b[j]) ? b[j] : '.');
			printf("\n");
		}
	}
}
