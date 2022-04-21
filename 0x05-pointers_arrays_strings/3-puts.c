#include "main.h"

/**
 * _puts - prints a string followed by new line
 *
 * @str: parameter holding the string 
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
