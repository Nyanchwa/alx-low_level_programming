#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: int
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = (size - i); j > 0; j--)
		{
			_putchar(' ');
		}
		k = (size - i);
		while (k < size)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
	}
}
