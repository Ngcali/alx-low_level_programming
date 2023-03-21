void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    if (new_size == 0) {
        free(ptr);
        return NULL;
    }

    if (ptr == NULL) {
        return malloc(new_size);
    }

    if (new_size == old_size) {
        return ptr;
    }

    void *new_ptr = malloc(new_size);

    if (new_ptr == NULL) {
        return NULL;
    }

    // Copy contents of old memory block to new memory block
    unsigned int min_size = old_size < new_size ? old_size : new_size;
    memcpy(new_ptr, ptr, min_size);

    free(ptr);

    return new_ptr;
}
