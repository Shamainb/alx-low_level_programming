#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes
 * @size: arrary size
 * @c: character
 * Description:  creates an array of chars, and initializes it
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int t;
	char *st;

	st = malloc(sizeof(char) * size);
	if (size == 0 || st == NULL)
		return (NULL);
	for (t = 0; t < size; )
		st[t] = c;
	t++;
	return (st);
}
