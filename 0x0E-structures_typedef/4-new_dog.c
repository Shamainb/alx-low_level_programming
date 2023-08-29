#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
	}
/**
  *_strcpy - copies the string pointed to by src
 * @dest: pointer
 * @src: string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n;
	int i;

	n = 0;

	while (src[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog -  a function that creates a new dog
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 *
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
		if (dog == NULL)
		return (NULL);

		dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
