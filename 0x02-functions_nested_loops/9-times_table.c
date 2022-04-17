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

		_putchar('0');

		while (multiple <= 9)
		{
			_putchar(',');
			_putchar(' ');
			result = number * multiple;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			multiple++;
		}
		_putchar('\n');
		number++;
	}
}



