#ifndef LIST_H
#define LIST_H

/**
 * struct list_s - Structure for a node in a linked list
 * @str: Pointer to the string data
 * @len: Length of the string
 * @next: Pointer to the next node
 */

typedef struct list_s
{
	char *str;
	/*Pointer to the string data */
	unsigned int len;
	/* Length of the string */
	struct list_s *next;
	/* Pointer to the next node */
}
list_t;

/* Function prototypes */
size_t print_list(const list_t *h);

#endif /* LIST_H */
