#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	large_prime();
	return (0);
}

/**
 * large_prime - print largest prime factor of a number
 */

void large_prime(void)
{
	int num = 612852475143, i = 2;
	
	while (i < num)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		i++;
	}
	printf("%d\n", i);
}

