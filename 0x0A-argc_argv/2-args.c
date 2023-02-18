#include <stdio.h>

/**
 * main - prints all arguments
 * it receives.
 *
 * @args: number of arguments.
 *
 * @*argv: pointer to argv.
 *
 * @argv: array of arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}
