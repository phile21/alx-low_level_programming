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
	int i, frstnum, secnum,nextnum;

	frstnum = 1;
	i = 1;
	secnum = 2;

	while (i <= 50)
	{
		printf("%d, ", frstnum);
		nextnum = frstnum + secnum;
		frstnum = secnum;
		secnum = nextnum;
		i++;
	}
	printf("\n");
}
