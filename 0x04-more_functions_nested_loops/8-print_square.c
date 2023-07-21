#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 */
void print_square(int size)
{
	int s, j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{

		for (s = 0; s < size; s++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
