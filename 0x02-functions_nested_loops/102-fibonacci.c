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
	long int i, frstnum, secnum, nextnum;

	frstnum = 1;
	i = 3;
	secnum = 2;
	nextnum = 3;
	printf("%ld, ", frstnum);
	printf("%ld, ", secnum);

	while (i < 50)
	{
		printf("%ld, ", nextnum);
		frstnum = secnum;
		secnum = nextnum;
		nextnum = frstnum + secnum;
		i++;
	}
	printf("%ld\n", nextnum);
}
