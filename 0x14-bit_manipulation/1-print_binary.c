#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	int i;
	int size = 0;
	unsigned long int m;

	for (i = 63; i >= 0; i--)
	{
		m = n >> i;

		if (m & 1)
		{
			_putchar('1');
			size++;
		}
		else if (size)
			_putchar('0');
	}
	if (!size)
		_putchar('0');
}

