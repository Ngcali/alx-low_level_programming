#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Adds positive numbers.
 *
 * @argc: The number of command-line arguments.
 *
 * @**argv: pointer to a pointer char * argv.
 *
 * @argv: An array of pointers to
 * strings containing the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char **argv)
{
	int my_sum = 0;
	int x, y;

	if (argc < 2)
	{
		printf("0\n");

		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");

				return (1);
			}
		}

		my_sum += atoi(argv[x]);
	}

	printf("%d\n", my_sum);

	return (0);
}
