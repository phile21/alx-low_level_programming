#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hour = 0;

	while (hour <= 23)
	{
		int minute = 0;

		while (minute <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
