#include <string.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int t = 0;

		if (str == NULL)
			return (NULL);
		i = 0;
		while (str[i] != '\0')
			i++;
		s = malloc(sizeof(char) * (i + 1));
		if (s == NULL)
			return (NULL);
		for (t = 0; str[t]; t++)
			s[t] = str[t];

		return (s);
}
