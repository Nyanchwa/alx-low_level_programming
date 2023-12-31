#include "main.h"

/**
 * times_table - 9 times table
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			k = j * i;
			if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + k / 10);
				_putchar(48 + k % 10);
			}
			else if (k >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(48 + k / 100);
				_putchar(48);
				_putchar(48 + k % 10);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + k);
			}
		}
		_putchar('\n');
	}
}
