#include "main.h"

/**
 * print_rev - reverses a string
 * @s: adress
 */
void print_rev(char *s)
{
	int len = 0;
	char c;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len > 0)
	{
		c = s[len];
		_putchar(c);
		len--;
	}
	_putchar('\n');
}
