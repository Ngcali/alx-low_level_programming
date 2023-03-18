#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2) {
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }
    size_t s1_len = strlen(s1);
    size_t s2_len = strlen(s2);
    char *result = malloc((s1_len + s2_len + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }
    memcpy(result, s1, s1_len);
    memcpy(result + s1_len, s2, s2_len);
    result[s1_len + s2_len] = '\0';
    return result;
}
