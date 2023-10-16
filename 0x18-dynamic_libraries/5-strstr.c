#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *n = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*i == *n && *n != '\0')
		{
			i++;
			n++;
		}


		if (*n == '\0')
			return (haystack);
	}


	return (0);
}
