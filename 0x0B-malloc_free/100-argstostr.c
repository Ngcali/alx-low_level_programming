#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string containing all
 * the arguments concatenated
 * followed by a newline, or NULL if ac == 0 or av == NULL or malloc
 * fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_length = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;

		while (av[i][len])
		{
			len++;
			total_length++;
		}
		total_length++;
	}

	result = malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j])
		{
			result[total_length] = av[i][j];
			j++;
			total_length++;
		}
		result[total_length] = '\n';
		total_length++;
	}
	result[total_length] = '\0';

	return (result);
}
