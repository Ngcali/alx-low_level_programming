#ifndef LISTS_H
#define LISTS_H

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

#endif /* LISTS_H */
