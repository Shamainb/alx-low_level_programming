#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check string there are digit
 * @str: array str
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))

	{
		if (!isdigit(str[c]))
		{
			return (0);
		}

		c++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int c;
	int str;
	int s = 0;

	c = 1;
	while (c < argc)
	{
		if (check_num(argv[c]))

		{
			str = atoi(argv[c]);
			s += str;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", s);

	return (0);
}

