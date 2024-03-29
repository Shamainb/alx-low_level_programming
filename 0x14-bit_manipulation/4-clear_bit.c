#include "main.h"

/**
 * clear_bit - function that sets the value
 * @n: pointer to the number
 * @index: index of bit
 *
 * Return: 1 if it worked, or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
