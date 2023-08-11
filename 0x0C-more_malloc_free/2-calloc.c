#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc -  function that allocates memory for an array
 * @nmemb: elements
 * @size: of bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int t;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	t = nmemb * size;

	ptr = malloc(t);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, t);

	return (ptr);
}

