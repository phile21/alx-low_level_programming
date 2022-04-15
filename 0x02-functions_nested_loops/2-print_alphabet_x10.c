#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int how_many = 0;

	while (how_many < 10)
	{
		int alphs = 97;

		while (alphs <= 122)
		{
			putchar(alphs);
			alphs++;
		}
		putchar('\n');
		how_many++;
	}
}
