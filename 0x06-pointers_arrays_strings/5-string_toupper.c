#include "main.h"

/**
 * *string_toupper - changes lowercase letters to uppercase of a string
 *
 * @n: param
 *
 * Return: *n
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (n);
}
