#include "search_algos.h"

/**
 * a function that searches for a value in an array of integers
 * array - a pointer to the first element
 * size - the number of elements
 * value - is the value to search fo
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
if (array == NULL)
        return -1;

    for (size_t i = 0; i < size; ++i) {
        printf("Comparing array[%zu] = %d\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
