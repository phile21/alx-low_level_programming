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
	i = 2;
	secnum = 1;
	printf("%d%d, ", frstnum, secnum);

	while (i < 50)
	{
		nextnum = frstnum + secnum;
		printf(" %d, ", nextnum);
		frstnum = secnum;
		secnum = nextnum;
	}
	printf("\n");
}
