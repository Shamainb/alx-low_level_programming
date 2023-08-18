#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed
 * @n: number of integers passed
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	num = va_arg(args, int);

	printf("%d", num);

	if (i < n - 1 && separator != NULL)
		printf("%s", separator);

	printf("\n");

	va_end(args);
}
