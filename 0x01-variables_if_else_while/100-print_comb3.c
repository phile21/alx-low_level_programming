#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num_1 = 48;

	int num_2 = 48;

	while (num_1 < 58)
	{
		while (num_2 < 58)
		{
			if (num_1 == num_2)
			{
				continue;
			}
			putchar(num_1);
			putchar(num_2);
			if (num_1 == 56 && num_2 == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
				num_2++;
			}
		}
		num_1++;
	}
	putchar('\n');
	return (0);
}
