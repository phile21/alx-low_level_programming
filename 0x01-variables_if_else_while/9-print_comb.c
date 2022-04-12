#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digits = 48;

	while (digits <= 57)
	{
		putchar(digits);
		if (digits < 57)
		{
			putchar(',');
			putchar(' ');
		}
		digits++;
	}
	putchar('\n');
	return (0);
}
