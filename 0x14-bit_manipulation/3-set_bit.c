#include "main.h"

/**
 * set_bit - function that sets the value
 * @n: pointer to number
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
