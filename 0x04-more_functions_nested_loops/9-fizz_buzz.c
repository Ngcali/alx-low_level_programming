#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints Fizz for
 * multiples of 3 and Buzz for
 * multples of 5. For multiples
 * of both 3 and 5, prints FizzBuzz.
 */

int fizz_buzz(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
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

		if (x != 100)
		{
			_putchar(32);
		}
	}

	printf("\n");
}
