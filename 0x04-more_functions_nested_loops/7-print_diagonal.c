#include "main.h"

/**
 * print_diagonal - draws a diagonal line ont the terminal
 *
 * @n: parameter determining the diagonal size
 */

void print_diagonal(int n)
{
	int i, j;

	i = 1;
	if (n > 0)
	{
		while (i <= n)
		{
			j = 1;
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
