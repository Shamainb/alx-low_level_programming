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
	list_t *new;

		if (str == NULL)
			return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;

	return (new);
}
