#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: to be checked
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int len_s1 = strlen(s1);
	unsigned int len_s2 = strlen(s2);
	unsigned int total_len;

	if (n >= len_s2)
	{
		total_len = len_s1 + n + 1;
	r = (char *)malloc(total_len);
	if (r == NULL)
		return (NULL);
	}
	strcpy(r, s1);

	strncat(r, s2, n);

	return (r);
}
