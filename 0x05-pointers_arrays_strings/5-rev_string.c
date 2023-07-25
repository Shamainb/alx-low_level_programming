#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string -  a function that reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int st = 0;
	int d = len - 1;

	while (st < d)
	{

	char t = s[st];

	s[st] = s[d];
	s[d] = t;
	}
	st++;
	d--;
}
