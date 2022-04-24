#include "main.h"

/**
 * print_times_table - prints n times table;
 *
 * @n: parameter
 */

void print_times_table(int n)
{
	int number = 0;

	int result;

	while (number <= n)
	{
		int multiple = 0;

		while (multiple <= n)
		{
			result = number * multiple;

			if (multiple == 0)
			{
				_putchar(48 + result);
			}
			else if (result >= 10)
			{
				_putchar(' ');
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + result);
			}
			if (multiple != n)
			{
				_putchar(',')
			}
			multiple++;
		}
		_putchar('\n');
		number++;
	}
}
