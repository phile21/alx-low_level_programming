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
	int num1 = 1, num2 = 2, num3, num, count = 0;

	printf("%d, ", num1);
	printf("%d, ", num2);
	count = 2;
	num = 98;
	while (count <= num)
	{
		num3 = num1 + num2;
		count++;
		printf("%d, ", num3);
		num1 = num2;
		num2 = num3;
	}
	printf("%d\n");
}
