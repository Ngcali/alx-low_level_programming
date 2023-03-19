#include <stdlib.h>

char *argstostr(int ac, char **av) {
    if (ac == 0 || av == NULL) {
        return NULL;
    }

    // Compute the total length of the concatenated string
    int total_length = 0;
    for (int i = 0; i < ac; i++) {
        int arg_length = 0;
        while (av[i][arg_length] != '\0') {
            arg_length++;
        }
        total_length += arg_length + 1;  // Add 1 for the newline character
    }

    // Allocate memory for the concatenated string
    char *result = (char *) malloc((total_length + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    // Copy the arguments into the concatenated string
    int index = 0;
    for (int i = 0; i < ac; i++) {
        int arg_length = 0;
        while (av[i][arg_length] != '\0') {
            result[index++] = av[i][arg_length++];
        }
        result[index++] = '\n';
    }
    result[index] = '\0';

    return result;
}

