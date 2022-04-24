#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints sign of a number
 *
 * @n: parameter holding number
 *
 * Return: 0 if n is zero, 1 if n is positive, -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
