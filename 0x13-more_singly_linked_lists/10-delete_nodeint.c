#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer
 * @index: index of the node
 * Return: 1 if it succeeded -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);

	for (x = 0; x < index; x++)
	{
		if (current == NULL)
			return (-1);
		previous = current;
		current = current->next;
	}
	if (previous != NULL)
		previous->next = current->next;

	else
		*head = current->next;

	free(current);

	return (1);
}
