#include "main."

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
				_putchar(0);
				_putchar(i);
				_putchar(58);
				_putchar(0);
				_putchar(j);
			}
			else if (i < 10 && j > 9)
			{
				_putchar(0);
				_putchar(i);
				_putchar(58);
				_putchar(j);
			}
			else if (i > 9 && j < 10)
			{
				_putchar(i);
				_putchar(58);
				_putchar(0);
				_putchar(j);
			}
			else
			{
				_putchar(i);
				_putchar(58);
				_putchar(j);
			}
		}
	}
}
