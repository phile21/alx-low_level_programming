#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphs = "a";

	while (alphs <= "z")
	{
		putchar("%c ", alphs);
		alphs++;
	}
	putchar("\n");
	return (0);
}
