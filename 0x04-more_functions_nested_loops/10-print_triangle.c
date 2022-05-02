#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i = 0, j, k;

	while (i < size)
	{
		k = size - 1 - i;
		while (k > 0)
		{
			_putchar(' ');
			k--;
		}
		j = 0;
		while (j <= i)
		{
			_putchar(35);
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
