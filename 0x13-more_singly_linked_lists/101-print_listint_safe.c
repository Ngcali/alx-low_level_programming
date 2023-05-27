#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *loop_node;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		/* Check for a loop */
		if (current - current->next > 0)
		{
			loop_node = current->next;
			while (current > loop_node)
			{
				count++;
				printf("[%p] %d\n", (void *)loop_node, loop_node->n);
				loop_node = loop_node->next;
			}
			printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
			exit(98);
		}

		current = current->next;
	}

	return count;
}
