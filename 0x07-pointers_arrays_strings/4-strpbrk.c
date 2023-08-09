#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *n = accept;

	while (*s)
{
	while (*n)
	{
		if (*s == *n)
		{
			return (s);
		}
		n++;
	}
	s++;
}
return (NULL);
}
