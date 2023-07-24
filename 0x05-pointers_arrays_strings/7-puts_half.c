#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: address
 */
void puts_half(char *str)
{
	int len = 0;
	int n;
	char c;

	while (str[len] != '\0')
	{
		len++;
	}
	n = len / 2;
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	while (n < len)
	{
		c = str[n];
		_putchar(c);
		n++;
	}
	_putchar('\n');
}
