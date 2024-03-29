#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: key structured
 * @size: The length of arrays of pointers of the hash table
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
