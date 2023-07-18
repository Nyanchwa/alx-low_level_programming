#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit
 * @i: int
 * Return: an int
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
		i = -i;
	}

	j = i % 10;
	if (j < 0)
	{
		j = -j;
	}
	_putchar(48 + j);
	return (j);
}
