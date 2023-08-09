#include <stdio.h>
#include "main.h"

/**
 * _strcpy - a function that copies the string
 * @dest: pointer
 * @src: pointer
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (s);
}
