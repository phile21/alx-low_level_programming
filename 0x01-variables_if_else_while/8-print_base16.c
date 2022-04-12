#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int base = 48;

	int base_2 = 97;

	while (base <= 57)
	{
		putchar(base);
		base++;
	}

	while (base_2 <= 102)
	{
		putchar(base_2);
		base_2++;
	}
	putchar('\n');
	return (0);
}
