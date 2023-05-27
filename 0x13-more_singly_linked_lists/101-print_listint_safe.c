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
	const listint_t *visited[1000]; // Assuming a maximum of 1000 nodes in the list
	int visitedCount = 0;

	current = head;
	while (current != NULL)
	{
		// Check if the current node has been visited before
		for (int i = 0; i < visitedCount; i++) {
			if (current == visited[i]) {
				loop_node = current;
				while (loop_node != current) {
					count++;
					printf("[%p] %d\n", (void *)loop_node, loop_node->n);
					loop_node = loop_node->next;
				}
				printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
				exit(98);
			}
		}

		visited[visitedCount++] = current;

		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		current = current->next;
	}

	return count;
}
