#include <stdio.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning
 * @head: double pointer
 * @str: new string
 * Return: the address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

		if (str == NULL)
			return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
