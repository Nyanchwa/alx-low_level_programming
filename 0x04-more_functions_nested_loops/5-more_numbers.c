#include "main.h"

/**
 * more_numbers - more numbers
 */
void more_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar(48 + j / 10);
				_putchar(48 + j % 10);
			}
			else
			{
				_putchar(48 + j);
			}
		}
	}
	_putchar('\n');
}
