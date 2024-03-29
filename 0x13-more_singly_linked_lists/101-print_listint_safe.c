#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe -  function that prints a listint_t
 * @head: pointer
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *loop_node = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

	if (current >= current->next && loop_node == NULL)
	{
		loop_node = current->next;
		while (loop_node->next != current->next)
	{
		loop_node = loop_node->next;
	}
		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		break;
	}
	current = current->next;
	}

	return (count);
}
