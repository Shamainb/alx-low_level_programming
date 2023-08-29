#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t
 * @head: pointer
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next_node;
	}
	*head = previous;

	return (*head);
}
