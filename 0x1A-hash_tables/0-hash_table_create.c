#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_create -  function that creates a hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *t;

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);
	t->size = size;
	t->array = calloc(t->size, sizeof(hash_table_t *));
	if (t->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (index = 0; index < t->size; index++)
		t->array[index] = NULL;

			return (t);
}
