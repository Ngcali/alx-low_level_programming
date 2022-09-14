#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @my_mumber: is a variable of type integer.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int my_mumber)
{
	int my_last_digit = my_mumber % 10;

	if (my_mumber < 0)
	{
		my_last_digit = my_last_digit * -1;
	}
	_putchar(my_last_digit + '0');
	return (my_last_digit);
}
