#include "main.h"

/**
 * main - Entry point
 *
 * print_sum_of_multiples - prints sum of multiples of numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_sum_of_multiples();
	return (0);
}

void print_sum_of_multiples(void)
{
	int sum = 0;

	int num = 0;

	while (num < 1024)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			sum += num;
		}
		num++;
	}
	printf("%d\n", sum);
}
