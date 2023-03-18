#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string
 * given as a parameter.
 *
 * @*str: pointer to char str.
 *
 * @str: first character of a null-terminated
 * string.
 *
 * Return: pointer to duplicate_str
 */

char *_strdup(char *str)
{
  char *duplicate_str;
  int str_len = 0;

  if (str == NULL)
    return (NULL);

  while (str[str_len] != '\0')
    str_len++;

  duplicate_str = malloc((str_len + 1) * sizeof(char));
  if (duplicate_str == NULL)
    return (NULL);

  for (int i = 0; i <= str_len; i++)
    duplicate_str[i] = str[i];

  return (duplicate_str);
}
