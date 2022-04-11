#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int low = 97;
	int high = 65;

	while (low <= 122)
	{
		putchar(low);
		low++;
	}

	while (high <= 90)
	{
		putchar(high);
		high++
	}
	putchar('\n');
	return (0);
}
