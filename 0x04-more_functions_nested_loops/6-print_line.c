#include "main.h"

/**
 * print_line - dras a straight line on the terminal
 *
 * @n: parameter that determs how long the line should appear
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n != 0 || n < 0)
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
