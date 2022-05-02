#include "main.h"

/**
 * print_most_numbers - prints numbers but not including 2 and 4
 */

void print_most_numbers(void)
{
	int nums = 48;

	while (nums <= 57)
	{
		if ((nums != 50) && (nums != 52))
		{
			_putchar(nums);
		}
		nums++;
	}
	_putchar('\n');
}
