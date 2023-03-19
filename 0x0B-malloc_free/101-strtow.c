#include <stdlib.h>

/**
 * count_words - Returns the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: An array of strings (words) or NULL if str is NULL or empty
 */
char **strtow(char *str)
{
	char **words;
	int num_words, i, j, k, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < num_words; i++)
	{
		while (str[j] == ' ' || str[j] == '\t')
			j++;
		len = 0;
		while (str[j + len] && str[j + len] != ' ' && str[j + len] != '\t')
			len++;
		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			words[i][k] = str[j + k];
		words[i][len] = '\0';
		j += len;
	}

	words[num_words] = NULL;

	return (words);
}
