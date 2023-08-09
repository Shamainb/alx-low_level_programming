#include <stdio.h>
#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *s = needle;

	for (; *haystack != '\0'; haystack++)
	{
	while (*i == *s && *s != '\0')
	{
		i++;
		s++;
	}
	if (*s == '\0')
		return (haystack);
	}
return (0);
}
