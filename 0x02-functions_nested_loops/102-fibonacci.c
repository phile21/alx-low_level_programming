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
	int i = 3;

	int frstnum = 1;

	int secnum = 1;
	
	int nextnum;

	while (i <= 50)
	{
		printf("%d, ", nextnum);
		frstnum = secnum;
		secnum = nextnum;
		nextnum = frstnum + secnum;
		i++;
	}
	printf("\n");
}
