#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	fibonacci_numbers();
	return (0);
}

/**
 * fibonacci_numbers - prints first 50 fibonacci numbers
 *
 * Return: returns nothing
 */

void fibonacci_numbers(void)
{
	int i, frstnum, secnum, nextnum;

	frstnum = 1;
	i = 0;
	secnum = 1;

	while (i < 50)
	{
		if (i <= 1)
		{
			nextnum = i;
		}
		else
		{
			nextnum = frstnum + secnum;
			frstnum = secnum;
			secnum = nextnum;
		}
		printf("%d, ", nextnum);
		i++;
	}
	printf("\n");
}
