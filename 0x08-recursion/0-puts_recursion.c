#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	printf("%c", *s);
	_puts_recursion(s + 1);
	}
	else
	{
	printf("\n");
	}
}
