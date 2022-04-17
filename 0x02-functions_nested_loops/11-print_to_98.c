#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural number until 98
 *
 * @n: parameter with natural number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar((n % 10) + 48);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar((n % 10) + 48);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar((n % 10) + 48);
	_putchar('\n');
}
