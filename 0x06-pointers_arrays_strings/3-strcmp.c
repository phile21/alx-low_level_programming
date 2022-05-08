#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: param
 * @s2: param
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int results;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	results = s1[i] - s2[i];
	return (results);
}
