#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	fizzbuzz();
	return (0);
}

/**
 * fizzbuzz - prints numbers
 */

void fizzbuzz(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("%s ", "FizzBuzz");
		}
		else
		{
			printf("%d ", num);
		}
		num++;
	}
	putchar('\n');
}
