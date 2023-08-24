#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_list - a function that prints all the elements of a list_t lis
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu]%s\n",  cnt, h->str);
		}
			h = h->next;
			cnt++;
	}

		return (cnt);
}
