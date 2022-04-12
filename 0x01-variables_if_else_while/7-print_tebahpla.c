#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphs = 122;

	while (alphs >= 97)
	{
		putchar(alphs);
		alphs--;
	}
	putchar('\n');
	return (0);
}
