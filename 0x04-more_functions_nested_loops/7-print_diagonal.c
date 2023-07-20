#include "main.h"

/**
 * print_diagonal - function
 * @n: int
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		return;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = i; j > 1; j--)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
