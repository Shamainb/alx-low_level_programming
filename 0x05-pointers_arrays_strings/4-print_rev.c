#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: string
 */
void print_rev(char *s)
{
	int l = 0;
	int t;

	while (*s != '\0')
	l++;
	s++;

	for (t = l; t > 0; t--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
