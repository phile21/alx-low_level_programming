#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0;

	while(num1 < 9)
	{
		int num2 = num1 + 1;
		while(num2 < 9)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');
			if (num1 == 8 && num2 == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
