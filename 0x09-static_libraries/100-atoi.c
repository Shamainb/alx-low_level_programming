#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: string
 */
int _atoi(char *s)
{

	int l = 0;
	int c = 0;
	int n = 0;
	int len = 0;
	int t = 0;
	int i = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && t == 0)
	{
		if (s[l] == '-')
			++c;

		if (s[l] >= '0' && s[l] <= '9')
		{
			i = s[l] - '0';
			if (c % 2)
				i = -i;
			n = n * 10 + i;
			t = 1;
			if (s[l + 1] < '0' || s[l + 1] > '9')
				break;
			t = 0;
		}
		l++;
	}
}
