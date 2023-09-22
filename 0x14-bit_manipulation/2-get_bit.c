#include "main.h"

/**
 * get_bit - a function that returns the value of a bit
 * @n: number to check
 * @index: is the index, starting from 0
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
