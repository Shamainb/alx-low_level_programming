#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: pointer
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
	return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
