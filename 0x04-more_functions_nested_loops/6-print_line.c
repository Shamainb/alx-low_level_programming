#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n:  number of times the character _ should be printed
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (j = 1; j <= n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
