#include "main.h"
#include <stdio.h>
#include <string.h>

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
        if ((i % 10) == 0) { 
            printf("%08x: ", i); 
    }

    printf("%02x ", b[i]);

    if ((b[i] >= 32 && b[i] <= 126))
    { 
        printf("%c", b[i]); 
    }
    else
    {
        printf(".");  
    }

    if ((i + 1) % 10 == 0 || i == size - 1)
    {
        printf("\n");
    }
}}
