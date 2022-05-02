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
	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{
			if (!(n <= 0))
			{
				_putchar(' ');
			}
			j = j + 1;
		}
		_putchar(92);
		i = i + 1;
	}
}
