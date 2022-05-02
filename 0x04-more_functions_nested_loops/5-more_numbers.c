#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 */

void more_numbers(void)
{
	int nums = 0, times = 1;

	while (times <= 10)
	{
		nums = 0;
		while (nums <= 14)
		{
			if (nums >= 10)
			{
				_putchar(nums / 10 + '0');
			}
			_putchar(nums % 10 + '0');
			nums++;
		}
		_putchar('\n');
		times++;
	}
}
