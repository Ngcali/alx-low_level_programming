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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LIST_H */
