#include "main.h"

/**
 * main - check the code
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
