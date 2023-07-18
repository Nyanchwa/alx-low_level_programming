#include "main.h"

/**
 * print_to_98 - function
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			if (n < 10)
			{
				if (n < 0)
				{
					n = -n;
				}
				_putchar(48 + n);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(48 + n / 10);
				_putchar(48 + n % 10);
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n == 99)
	{
		_putchar(48 + n / 10);
		_putchar(48 + n % 10);
		_putchar(',');
		_putchar(' ');
	}
	else if (n >= 100)
	{
		while (n > 98)
		{
			_putchar(48 + n / 100);
			_putchar(48 + n / 10);
			_putchar(48 + n % 10);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
}
