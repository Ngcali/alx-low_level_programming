void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    void *new_ptr;

    // If new size is zero, free the memory block and return NULL
    if (new_size == 0) {
        free(ptr);
        return NULL;
    }

    // If the pointer is NULL, just allocate new memory
    if (ptr == NULL) {
        return malloc(new_size);
    }

    // If new size is the same as old size, return the original pointer
    if (new_size == old_size) {
        return ptr;
    }

    // Allocate new memory block with the new size
    new_ptr = malloc(new_size);

    // If the allocation fails, return NULL and keep the original memory block
    if (new_ptr == NULL) {
        return NULL;
    }

    // Copy the contents from the original memory block to the new one
    memcpy(new_ptr, ptr, (old_size < new_size ? old_size : new_size));

    // Free the original memory block
    free(ptr);

    return new_ptr;
}
