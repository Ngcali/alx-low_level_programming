#include "main.h"
#include <stdio.h>

/**
 * main - prints Fizz for
 * multiples of 3 and Buzz for
 * multples of 5. For multiples
 * of both 3 and 5, prints FizzBuzz.
 *
 * Description: FizzBuzz function,
 * that prints numbers from 1 to
 * 100. Multiples of 3 and 5 are
 * replaced by FizzBuzz, multiples
 * of 3 are replaced by Fizz,
 * multiples of 5 are replaced by
 * Buzz.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
