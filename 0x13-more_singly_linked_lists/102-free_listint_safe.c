#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list (safe version)
 * @h: Double pointer to the head of the list
 *
 * Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		if (current->next >= current)
		{
			temp = current->next;
			current->next = NULL;
			break;
		}
		temp = current->next;
		free(current);
		current = temp;
	}

	*h = NULL;
	free(temp);

	return (count);
}
