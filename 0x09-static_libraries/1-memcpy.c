#include "main.h"

/**
 *_memcpy - function that copies memory area
 *@dest: memory
 *@src: memory
 *@n: bytes
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int t = n;


	for (; i < t; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
