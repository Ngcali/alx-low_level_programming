#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* Add this line to include the size_t type and NULL macro */

/**
 * struct listint_s - Singly linked list
 * @n: Integer stored in the node
 * @next: Pointer to the next node
 *
 * Description: Basic singly linked list node structure
 */

/* Definition of struct listint_s */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototype for print_listint */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* LISTS_H */
