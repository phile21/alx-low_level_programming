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

	if (n <= 15 && n >= 0)
	{
		while (number <= n)
		{
			int multiple = 1;

			_putchar('0');

			while (multiple <= n)
			{
				_putchar(',');
				_putchar(' ');
				result = number * multiple;
				if (result <= 99)
				{
					_putchar(' ');
				}
				if (result <= 9)
				{
					_putchar(' ');
				}
				if (result >= 100)
				{
					_putchar((result / 100) + 48);
					_putchar((result / 10) % 10 + 48);
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + 48);
				}
				_putchar((result % 10) + 48);
				multiple++;
			}
			_putchar('\n');
			number++;
		}
	}
}
