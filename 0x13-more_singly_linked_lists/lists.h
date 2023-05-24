#ifndef LISTS_H
#define LISTS_H

/* Definition of struct listint_s */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototype for print_listint */
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
