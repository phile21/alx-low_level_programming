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

	while (number <= 9)
	{
		_putchar(48);
		int multiple = 1;

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
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			multiple++;
		}
		_putchar('\n');
		number++;
	}
}



