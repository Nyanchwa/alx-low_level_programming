#include "main.h"

/**
 * times_table - 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;
			if (k > 10)
			{
				_putchar(48 + k / 10);
				_putchar(48 + k % 10);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(48 + k);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
