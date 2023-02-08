#include <unistd.h>
#include "main.h"

/**
 * main - the entry point.
 *
 * Description: print _putchar, followed by a new line.
 *
 * Return: C program always returns 0.
 */

int _putchar(char c)
{
        _putchar('_');
        _putchar('p');
        _putchar('u');
        _putchar('t');
        _putchar('c');
        _putchar('h');
        _putchar('a');
        _putchar('r');
        return (write(1, &c,1));
}
