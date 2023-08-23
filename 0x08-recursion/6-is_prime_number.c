#include <stdio.h>
#include "main.h"

/**
 * is_prime_number -  function that returns 1 if the input integer
 * @n: prime number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i * i <= n;  i++)
	{
		if (n % i == 0)
	{
		return (0);
	}
	}
	return (1);
}
