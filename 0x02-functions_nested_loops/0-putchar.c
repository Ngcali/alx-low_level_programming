#include "main.h"

/**
 * main - the entry point.
 *
 * Description: print _putchar, followed by a new line.
 *
 * Return: C program always returns 0.
 */
int main(void)
{
	char my_string[10] = "_putchar";
	int my_number = 0;

	while (my_number < 8)
	{
		_putchar(my_string[my_number]);
		my_number++;
	}
	_putchar('\n');
	return (0);
}
