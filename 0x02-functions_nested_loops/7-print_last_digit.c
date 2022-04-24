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
	int digit = n % 10;

	_putchar(digit);
	return (digit);
}
