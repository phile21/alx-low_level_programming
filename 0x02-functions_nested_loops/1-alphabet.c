#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 *
 * Return: Always 0 (Successs)
 */

void print_alphabet(void)
{
	int a_z = 97;

	while (a_z <= 122)
	{
		putchar(a_z);
		a_z++;
	}
	putchar('\n');
}
