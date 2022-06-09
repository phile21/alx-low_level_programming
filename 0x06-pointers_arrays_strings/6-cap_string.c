#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 *
 * @n: param
 *
 * Return: *n
 */

char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
