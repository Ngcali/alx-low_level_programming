#include <stdlib.h>
#include <string.h>

// Returns the number of words in the given string.
// Words are separated by spaces.
static int count_words(const char *str) {
    int count = 0;
    int in_word = 0;

    while (*str != '\0') {
        if (*str == ' ') {
            if (in_word) {
                in_word = 0;
            }
        } else {
            if (!in_word) {
                in_word = 1;
                count++;
            }
        }

        str++;
    }

    return count;
}

// Returns a pointer to an array of strings, where each string
// is a single word from the given string, null-terminated.
// Words are separated by spaces.
// Returns NULL if str == NULL or str == "".
// Returns NULL if memory allocation fails.
char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);

    char **words = malloc(sizeof(char *) * (num_words + 1));
    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;
    int in_word = 0;
    char *word_start = NULL;

    while (*str != '\0') {
        if (*str == ' ') {
            if (in_word) {
                in_word = 0;
                *words = malloc(str - word_start + 1);
                if (*words == NULL) {
                    // Allocation failed. Clean up and return NULL.
                    for (int i = 0; i < word_index; i++) {
                        free(words[i]);
                    }
                    free(words);
                    return NULL;
                }

                memcpy(*words, word_start, str - word_start);
                (*words)[str - word_start] = '\0';
                words++;
                word_index++;
            }
        } else {
            if (!in_word) {
                in_word = 1;
                word_start = str;
            }
        }

        str++;
    }

    // Add the last word (if any).
    if (in_word) {
        *words = malloc(str - word_start + 1);
        if (*words == NULL) {
            // Allocation failed. Clean up and return NULL.
            for (int i = 0; i < word_index; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }

        memcpy(*words, word_start, str - word_start);
        (*words)[str - word_start] = '\0';
        words++;
        word_index++;
    }

    // Add the final NULL pointer.
    *words = NULL;

    return words - word_index;
}

