#include <stdlib.h> // for malloc and free
#include <string.h> // for memcpy

/**
 * Reallocates a memory block using malloc and free.
 * If ptr is NULL, the function is equivalent to malloc(new_size).
 * If new_size is equal to zero, and ptr is not NULL, the function is equivalent to free(ptr).
 * If new_size is greater than old_size, the added memory should not be initialized.
 * If ptr is not NULL, the contents of the memory block are copied to the new block.
 * If new_size is less than old_size, the contents of the memory block are truncated.
 *
 * @param ptr Pointer to the memory block to be reallocated.
 * @param old_size Size of the previously allocated memory block.
 * @param new_size Size of the new memory block.
 *
 * @return Pointer to the new memory block, or NULL if the allocation fails.
 */
void *realloc(void *ptr, size_t new_size) {
    void *new_ptr;

    /* If new size is zero, free the memory block and return NULL */
    if (new_size == 0) {
        free(ptr);
        return NULL;
    }

    /* If the pointer is NULL, just allocate new memory */
    if (ptr == NULL) {
        return malloc(new_size);
    }

    /* Allocate new memory block with the new size */
    new_ptr = malloc(new_size);

    /* If the allocation fails, return NULL and keep the original memory block */
    if (new_ptr == NULL) {
        return NULL;
    }

    /* Copy the contents from the original memory block to the new one */
    size_t copy_size = (new_size < old_size ? new_size : old_size);
    memcpy(new_ptr, ptr, copy_size);

    /* Free the original memory block */
    free(ptr);

    return new_ptr;
}

