#include <stdio.h>

/**
 * print_triangle - prints a triangle
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < size; j++)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
}
