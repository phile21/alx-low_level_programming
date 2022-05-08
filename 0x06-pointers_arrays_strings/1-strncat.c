#include "main.h"

/**
 * *_strncat - overwrites the terminating null but src does not need to be null
 *
 * @dest: param
 * @src: param
 * @n: param
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (j < 1000)
	{
		if (dest[j] == '\0')
		{
			break;
		}
		j++;
		i++;
	}

	while (src[j] != '\0'  && i < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
