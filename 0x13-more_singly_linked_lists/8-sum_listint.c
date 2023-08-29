#include "lists.h"

/**
 * sum_listint -  a function that returns the sum of all the data
 * @head: pointer
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *temp = head;

	while (temp)
	{
		n += temp->n;
		temp = temp->next;
	}
	return (n);
}
