#include "main.h"
#include <stdio.h>

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)

		return (1);
	else
		return (0);
}
