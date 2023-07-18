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
			if (i < 10 && j < 10)
			{
				_putchar(48);
				_putchar(48 + i);
				_putchar(58);
				_putchar(48);
				_putchar(48 + j);
				_putchar('\n');
			}
			else if (i < 10 && j > 9)
			{
				_putchar(48);
				_putchar(48 + i);
				_putchar(58);
				_putchar(48 + j);
				_putchar('\n');
			}
			else if (i > 9 && j < 10)
			{
				_putchar(48 + i);
				_putchar(58);
				_putchar(48);
				_putchar(48 + j);
			}
			else
			{
				_putchar(48 + i);
				_putchar(58);
				_putchar(48 + j);
			}
		}
	}
}
