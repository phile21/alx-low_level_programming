#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
