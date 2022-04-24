#include "main.h"

/**
 * main - Entry point
 *
 * numbers - prints sum of multiples of numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	numbers();
	return (0);
}

void numbers(void)
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
