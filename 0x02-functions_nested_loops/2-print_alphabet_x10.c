#include <stdio.h>

/**
 * print_alphabet_x10 - void
 *  a function that prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	char alp;
	int i;

	i = 0;

	while (i < 10)
	{
		alp = 'a';
		while (alp <= 'z')
		{
			putchar(alp);
			alp++;
		}
		putchar('\n');
		i++;
	}
}
