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
    size_t str_len;

    if (str == NULL)
        return (NULL);

    str_len = strlen(str);
    duplicate_str = malloc(sizeof(char) * (str_len + 1));
    if (duplicate_str == NULL)
        return (NULL);

    strcpy(duplicate_str, str);

    return (duplicate_str);
}
