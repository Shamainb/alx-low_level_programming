#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: pointing to a string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int r = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		r = 2 * r + (b[index] - '0');
	}
	return (r);
}
