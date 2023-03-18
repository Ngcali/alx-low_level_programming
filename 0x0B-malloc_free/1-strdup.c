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

char *_strdup(char *str) {
    if (str == NULL) { // check for NULL input
        return NULL;
    }
    int len = 0;
    while (str[len] != '\0') { // determine length of str
        len++;
    }
    char *new_str = malloc((len + 1) * sizeof(char)); // allocate memory for new string
    if (new_str == NULL) { // check for insufficient memory
        return NULL;
    }
    for (int i = 0; i <= len; i++) { // copy string
        new_str[i] = str[i];
    }
    return new_str; // return pointer to new string
}
