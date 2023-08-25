#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * @head: pointer
 * @str: string
 * Return: the address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;
	unsigned int i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);

}


