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

	while (b[index] != '\0')
	{
		if (b[index] == '0')
		{
			r = r * 2;
		}
		else if (b[index] == '1')
		{
			r = r * 2 + 1;
		}
		else
		{
			return (0);
		}
		index++;
	}
	return (r);
}
