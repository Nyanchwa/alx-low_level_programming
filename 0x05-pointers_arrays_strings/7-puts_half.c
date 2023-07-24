#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: address
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	if (len / 2 != 0)
	{
		n = (len - 1)  / 2;
	}
	else
	{
		n = len / 2;
	}
	while (n <= len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
