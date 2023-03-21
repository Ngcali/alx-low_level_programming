#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated with malloc/calloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the new memory block, or NULL if new_size is zero
 * or if the function fails to allocate memory
 */
char *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    /* case where new_size is zero */
    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    /* case where ptr is NULL */
    if (ptr == NULL)
    {
        return malloc(new_size);
    }

    /* case where new_size is equal to old_size */
    if (new_size == old_size)
    {
        return ptr;
    }

    /* allocate memory for the new block */
    char *new_ptr = malloc(new_size);
    if (new_ptr == NULL)
    {
        return NULL;
    }

    /* copy the contents of the old block to the new block */
    unsigned int copy_size = old_size < new_size ? old_size : new_size;
    memcpy(new_ptr, ptr, copy_size);

    /* free the old block */
    free(ptr);

    /* return the pointer to the new block */
    return new_ptr;
}
