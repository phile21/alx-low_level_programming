#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphs = 97;

	while (alphs <= 122)
	{
		if (alphs != 101 && alphs != 113)
		{
			putchar(alphs);
			alphs++;
		}
	}
	putchar('\n');
	return (0);
}
