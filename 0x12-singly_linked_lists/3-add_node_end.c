#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	char *str_copy;
	size_t len;
	/* Calculate the length of the string */
	for (len = 0; str[len] != '\0'; len++)
		;
	/* Duplicate the string */
	str_copy = strdup(str);

	if (str_copy == NULL)
		return (NULL);
	/* Create the new node */
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(str_copy);
		return (NULL);
	}
	/* Assign values to the new node */
	new_node->str = str_copy;
	new_node->len = len;
	new_node->next = NULL;
	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Traverse the list to find the last node */
	current = *head;

	while (current->next != NULL)
		current = current->next;
	/* Append the new node to the end */
	current->next = new_node;
	return (new_node);
}
