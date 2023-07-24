#include "main.h"

/**
 * _puts - writes a string to STDOUT
 * @str: adress
 */
void _puts(char *str)
{
	char c;

	while (*str != '\0')
	{
		c = *str;

		_putchar(c);
		str++;
	}
	_putchar('\n');
}
