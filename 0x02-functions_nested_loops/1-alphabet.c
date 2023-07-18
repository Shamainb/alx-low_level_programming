#include <stdio.h>

/**
 * print_alphabet - void
 * Description: a function that prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	int alp = 97;

	while (alp <= 122)
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
}
