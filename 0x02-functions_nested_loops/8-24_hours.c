#include "main.h"

/**
 * jack_bauer - function
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(48 + i / 10);
			_putchar(48 + i % 10);
			_putchar(58);
			_putchar(48 + j / 10);
			_putchar(48 + j % 10);
			_putchar('\n');
		}
	}
}
