#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int number = 0;

	int result;

	while (number <= 9)
	{
		int multiple = 0;

		while (multiple <= 9)
		{
			result = number * multiple;

			if (result == 0)
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
			if (multiple != 9)
			{
				_putchar(',');
			}
			multiple++;
		}
		_putchar('\n');
		number++;
	}
}



