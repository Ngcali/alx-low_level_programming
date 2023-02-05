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
        if ((i % 10) == 0) { // start of a new line 
            printf("%08x: ", i); // print the position in hexadecimal 
    }

    printf("%02x ", b[i]); // print the content of the buffer in hexadecimal

    if ((b[i] >= 32 && b[i] <= 126))
    { // check if it is a printable character 
        printf("%c", b[i]); // print the character 
    }
    else
    {
        printf("."); // otherwise, print .  
    }

    if ((i + 1) % 10 == 0 || i == size - 1)
    {
        printf("\n");
    }
}
