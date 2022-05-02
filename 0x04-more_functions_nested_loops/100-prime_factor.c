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
	long int num = 612852475143;

       	long int i = 2;
	
	while (i < num)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		i++;
	}
	printf("%ld\n", i);
}

