#include "main.h"
#include <stdio.h>

/**
 * main - entry
 * Description: prints the numbers from 1 to 100, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (num = 1);
		{
			printf("%d", num);
		}
		else
		{
			printf("%d", num);
		}
		printf ("\n");
	}
	return (0);
}
