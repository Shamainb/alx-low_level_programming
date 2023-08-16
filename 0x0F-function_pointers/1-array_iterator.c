#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * @array: array
 * @size: elements
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
