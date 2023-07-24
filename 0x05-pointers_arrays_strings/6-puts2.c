#include "main.h"

/**
 * puts2 - writes a string to STDOUT
 * @str: adress
 */
void puts2(char *str)
{
	char *c = str;
	int i = 0;
	int t = 0;
	int o;

	while (*c != '\0')
	{
		c++;
		i++;
	}
	t = i - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
