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

	srand((int) time(&my_time));
	while (my_ascii > 126)
	{
		my_password[i] = rand() % 126;
		my_ascii -= my_password[i];
		i++;
	}

	if (my_ascii > 0)
	{
		my_password[i] = my_ascii;
	}

	for (k = 0; k <= i; k++)
	{
		printf("%c", my_password[k]);
	}
	return (0);
}
