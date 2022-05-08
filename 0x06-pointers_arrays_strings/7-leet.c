#include "main.h"

/**
 * leet - encodes a string to 1337
 *
 * @n: param
 *
 * Return: *n
 */

char *leet(char *n)
{
	int i = 0;

	char l[] = "ol_ea__t";

	while (s[i] != '\0')
	{
		int j = 0;

		while (l[j] != '\0')
		{
			if (s[i] == l[j] || s[i] == (l[j] - 32))
			{
				s[i] = j + '0';
			}
			j++;
		}
		i++;
	}
	return (n);
}
