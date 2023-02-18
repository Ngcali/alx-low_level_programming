#include <stdio.h>

/**
 * main - prints the number of
 * arguments passed into it.
 *
 * @argc: number of aguements passed.
 *
 * @*argv: pointer to argv.
 *
 * @argv: array of arguments.
 *
 * Return: 0
 */

/*int main(int argc, char *argv[]) {
    printf("%d\n", argc - 1);
    return 0;
}*/

int main(int argc, char *argv)
{
	argc = argc -1;

	if (argc != 1)
	{
		printf("Usage: %s\n", argv[0]);
		return (1);
	}

	printf("%s\n", argv[0]);
	return (0);
}
