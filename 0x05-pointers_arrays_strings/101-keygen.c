#include "main.h"

int main(void):
{
	int i = 0;
	int my_ascii = 2772;
	char my_password[100];

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

	int k = 0;
	while (k <= i)
	{
		printf("%c", my_password[k]);
		k++;
	}
}
