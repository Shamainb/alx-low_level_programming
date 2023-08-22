#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Write a function that prints anything
 * @format: list of types of arguments passed
 * Return 0
 */
void print_all(const char * const format, ...)
{
	va_list arg;

	char c;
	int i;
	float f;
	char *s;
	int idx = 0;

	va_start(arg, format);

	while (format[idx] != '\0')

		if (format[idx] == 'c')
		{
			c = (char)va_arg(arg, int);
		printf("%c", c);
		}
	else if (format[idx] == 'i')
	{
		i = va_arg(arg, int);
	printf("%d", i);
	}
	else if (format[idx] == 'f')
	{
		f = (float) va_arg(arg, double);
	printf("%f", f);
	}
	else if (format[idx] == 's')
	{
		s = va_arg(arg, char*);
	}
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);

	idx++;

	va_end(arg);
	printf("\n");
}
