#include "main.h"

/**
 * *_strcat - overwrites terminating null
 *
 * @dest: param
 * @src: param
 *
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;

	int e = 0;

	while(dest[d] != '\0')
	{
		d++;
	}

	while(src[e] != '\0')
	{
		dest[d] = src[e];
		e++;
		d++
	}
	dest[d] = '\0';
	return (dest);
}
