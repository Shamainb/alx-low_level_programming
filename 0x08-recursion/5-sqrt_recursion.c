#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(_sqrt_recursion(n,0));
}
