#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0-9
 * return: void
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
