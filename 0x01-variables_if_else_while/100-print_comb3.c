#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num_1 = 0;

	while (num_1 < 9)
	{
		int num_2 = num_1 + 1;

		while (num_2 < 10)
		{
			putchar((num_1 % 10) + '0');
			putchar((num_2 % 10) + '0');
			if (num_1 == 8 && num_2 == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
			num_2++;
		}
		num_1++;
	}
	putchar('\n');
	return (0);
}
