#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a
 * given index of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0) /* Delete the first node */
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1; i++)
	/* Traverse the list to the node before the desired position */
	{
		if (current->next == NULL)
		/* Cannot delete at the desired position */
			return (-1);
		current = current->next;
	}

	if (current->next == NULL) /* Cannot delete at the desired position */
		return (-1);

	/* Delete the node */
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
