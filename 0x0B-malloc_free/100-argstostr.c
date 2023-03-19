#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: the number of arguments.
 * @av: the array of arguments.
 *
 * Return: On success, a pointer to the concatenated string.
 * On failure, NULL.
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return NULL;

	int i, j, len = 0;
	char *str;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * len);
	if (!str)
		return NULL;

	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[len++] = av[i][j];
		str[len++] = '\n';
	}

	str[len] = '\0';
	return str;
}
