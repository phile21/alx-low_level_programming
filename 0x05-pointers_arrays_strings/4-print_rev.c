#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: parameter holding string input
 */

void print_rev(char *s)
{
	int rev, legth, n;

	legth = 0;
	rev = 0;
	n = 0;

	while (s[n] != '\0')
	{
		legth = n;
		n++;
	}
	while (legth >= rev)
	{
		_putchar(s[legth]);
		legth--;
	}
	_putchar('\n');
}
