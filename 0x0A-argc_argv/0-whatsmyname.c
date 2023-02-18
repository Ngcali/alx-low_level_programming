#include <stdio.h>

/**
 * main - prints program name,
 * followed by a new line.
 *
 * @*argv: pointer to char argv.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: integer value.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s <argument>\n", argv[0]);
		return 1;
	}

	printf("The argument is: %s\n", argv[1]);
	return 0;
}
