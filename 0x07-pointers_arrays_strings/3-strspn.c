#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: to be checked
 * @accept: to be checked
 * Return: (0)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		r++;
		s++;
	}
	return (r);
}
