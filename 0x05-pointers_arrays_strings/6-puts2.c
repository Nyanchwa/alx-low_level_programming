#include "main.h"

/**
 * puts2 - writes a string to STDOUT
 * @str: adress
 */
void puts2(char *str)
{
	char c;

	while (*str != '\0')
	{
		c = *str;

		_putchar(c);
		str = str + 2;
	}
	_putchar('\n');
}
