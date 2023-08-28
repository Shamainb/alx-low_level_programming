#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  function that concatenates all the arguments
 * @ac: input
 * @av: double pointer
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i;
	int n = 0;
	int x = 0;
	int t = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			t++;
	}
	t += ac;

	str = malloc(sizeof(char) * t + 1);
	if (str == NULL)
		return (NULL);
	for (n = 0; av[i][n]; n++)
	{
		str[x] = av[i][n];
			x++;
	}
	if (str[x] == '\0')
	{
		str[x++] = '\n';
	}
	return (str);
}
