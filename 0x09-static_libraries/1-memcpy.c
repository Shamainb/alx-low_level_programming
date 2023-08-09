#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - a function that copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
        dest[i] = src[i];
        }
        return (dest);
}
