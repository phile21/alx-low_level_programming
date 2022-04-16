#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: parameter to check if it's alphabetic
 *
 * Return: 1 if it's alphabetic and 0 if not
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
