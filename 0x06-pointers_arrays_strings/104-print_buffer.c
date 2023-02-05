#include "main.h"
#include <stdio.h>

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
    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (int i = 0; i < size; i++)
    {
        if (i % 10 == 0)
            printf("%.8x: ", i);

        if (b[i] >= 32 && b[i] <= 126)
            printf("%.2x %c", b[i] & 0xff, b[i]);
        else
            printf("%.2x.", b[i] & 0xff);

        if ((i + 1) % 10 == 0)
            printf("\n");
        else
            printf(" ");
    }

    if (size % 10 != 0)
        printf("\n");
}
