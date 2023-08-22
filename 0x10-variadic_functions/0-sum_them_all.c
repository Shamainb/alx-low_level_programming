#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: variable number of parameters
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	unsigned int sum;

	if (n == 0)
	return (0);

	sum = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
		va_end(arg);
	return (sum);
}
