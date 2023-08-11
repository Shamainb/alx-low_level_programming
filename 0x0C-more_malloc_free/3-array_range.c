#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - unction that creates an array of integers
 * @min: values
 * @max: values
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;
	int s;
	int *arr;

	if (min > max)
		return (NULL);
	{
	s = max - min + 1;
	arr = (int *)malloc(s * sizeof(int));

	if (arr == NULL)
		return (NULL);
	}
	for (i = 0; i < s; i++)
		arr[i] = min = 1;
	return (arr);
}
