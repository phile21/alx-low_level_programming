#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural number until 98
 *
 * @n: parameter with natural number
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar(\n);
}
