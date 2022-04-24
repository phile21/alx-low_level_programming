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
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (48);
	}
	else if (n < 48)
	{
		_putchar('-');
		return (-1);
	}
	return (48);
}
