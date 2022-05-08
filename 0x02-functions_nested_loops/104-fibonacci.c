#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	print_98_fibonacci();
	return (0);
}

/**
 * print_98_fibonacci - prints first 98 fibonacci numbers
 */

void print_98_fibonacci(void)
{
	int num1, num2, i = 1, n = 98;

	int next_num;

	while (i <= n)
	{
		if (i == 98)
		{
			printf("%d, ", num2);
		}
		else
		{
			printf("%d, ", num2);
			next_num = num1 + num2;
			num1 = num2;
			num2 = next_num;
		}
		i++;
	}
	printf("\n");
}
