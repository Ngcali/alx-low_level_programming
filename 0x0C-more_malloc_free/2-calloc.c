#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements to allocate memory for
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory or NULL if allocation failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return NULL;

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;

    memset(ptr, 0, nmemb * size);

    return ptr;
}
