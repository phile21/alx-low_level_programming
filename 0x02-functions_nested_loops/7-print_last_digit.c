#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: parameter holding the number
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
