#ifndef LIST_H
#define LIST_H

/* Definition of the list node structure */
typedef struct list_s
{
    char *str;                 /* Pointer to the string data */
    unsigned int len;          /* Length of the string */
    struct list_s *next;       /* Pointer to the next node */
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);

#endif /* LIST_H */
