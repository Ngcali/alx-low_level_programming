#include <stdlib.h>

int* array_range(int min, int max) {
    if (min > max) {
        return NULL;
    }

    int* arr = malloc((max - min + 1) * sizeof(int));
    if (arr == NULL) {
        return NULL;
    }

    for (int i = 0; i <= max - min; i++) {
        arr[i] = min + i;
    }

    return arr;
}
