#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (d = 0; d < n; d++)
		{
			if (d == i)
				_putchar('\\');
			else if (d < i)
				_putchar(' ');
		}
		_putchar('\n');
		}
	}
}
