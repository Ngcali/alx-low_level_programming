#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *temp;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		/* Check if the next node is already visited */
		if (current >= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}

		/* Mark the current node as visited */
		temp = current;
		current = current->next;

		/* Update the next pointer of the current node to point to itself */
		temp->next = temp;
	}

	return count;
}
