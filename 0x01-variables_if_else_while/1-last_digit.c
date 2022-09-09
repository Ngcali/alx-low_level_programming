#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is the entry point
 *
 * Description: assign a random number to the
 * variable n each time it is executed
 *
 * Return: All C programs always return 0
 */
int main(void)
{
	int n, lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDig = n % 10;
	if (lastDig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);
	}
	else if (lastDig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDig);
	}
	else if (lastDig < 6 && lastDig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
	}
	return (0);
}
