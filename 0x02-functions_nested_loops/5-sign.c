#include "main.h"
#include <stdio.h>

/**
 * print_sign - print a sign of a number
 *
 * @n: parameter to check
 *
 * Return: 1 if n is greater than 0, 0 if n is zero and -1 if n  is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
}
