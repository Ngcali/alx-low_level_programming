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
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);

#endif /* LISTS_H */
