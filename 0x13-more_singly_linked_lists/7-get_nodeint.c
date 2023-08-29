#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth node
 * @head: pointer
 * @index: index of the node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *t = head;

	while (t && x < index)
	{
		t = t->next;
		x++;
	}

	return (t ? t : NULL);

}
