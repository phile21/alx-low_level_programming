#include "main.h"
/**
 * print_times_table - prints n times table;
 * @n: parameter
 */
void print_times_table(int n)
{
	int num = 0;

	int rslt;

	if (n <= 15 && n >= 0)
	{
		while (num <= n)
		{
			int multiple = 1;

			_putchar('0');
			while (multiple <= n)
			{
				_putchar(',');
				_putchar(' ');
				rslt = num * multiple;
				if (rslt <= 99)
				{
					_putchar(' ');
				}
				if (rslt <= 9)
				{
					_putchar(' ');
				}
				if (rslt >= 100)
				{
					_putchar((rslt / 100) + 48);
					_putchar((rslt / 10) % 10 + 48);
				}
				else if (rslt <= 99 && rslt >= 10)
				{
					_putchar((rslt / 10) + 48);
				}
				_putchar((rslt % 10) + 48);
				multiple++;
			}
			_putchar('\n');
			num++;
		}
	}
}
