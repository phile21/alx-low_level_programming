#include "main.h"

/**
 * _isalpha(int c) - checks for alphabetic characters
 *
 * @c: parameter to check
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
