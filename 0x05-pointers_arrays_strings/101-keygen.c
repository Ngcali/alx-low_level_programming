#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
	int i = 0;
	int k;
	int my_ascii = 2772;
	char my_password[100];
	time_t my_time;
	int my_random;

	srand((int) time(&my_time));
	while (my_ascii > 126)
	{
		my_random = rand() % 126;
		my_password[i] = my_random;
		my_ascii -= my_random;
		i++;
	}

	if (my_ascii > 0)
	{
		my_password[i] = my_ascii;
	}

	for (k = 0; k <= i; k++)
	{
		printf("%c", password[k]);
	}
	return (0);
}
