#include <stdio.h>

/**
 * main - Prints the alphabet without q and e.
 * Description: a program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
