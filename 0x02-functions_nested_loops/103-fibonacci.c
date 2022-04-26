#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always zero (Success)
 */

int main(void)
{
	fibonacci_even();
	return (0);
}

/**
 * fibonacci_even - prints sum of even-valued terms
 */

void fibonacci_even(void)
{
	long int num1 = 1, num2 = 2, sum = num2, tmp;

	while (num2 < 4000000)
	{
		tmp = num1 + num2;
		num1 = num2;
		num2 = tmp;
		sum += (num2 % 2 == 0) ? num2 : 0;
	}
	printf("%li\n", sum);
}
