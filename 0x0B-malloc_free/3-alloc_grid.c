#include <stdlib.h>

int **alloc_grid(int width, int height) {
    // Return NULL if width or height is 0 or negative
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    // Allocate memory for the grid
    int **grid = malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL;
    }

    // Allocate memory for each row of the grid
    for (int i = 0; i < height; i++) {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            // Free previously allocated memory and return NULL on failure
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }

        // Initialize each element of the row to 0
        for (int j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}
