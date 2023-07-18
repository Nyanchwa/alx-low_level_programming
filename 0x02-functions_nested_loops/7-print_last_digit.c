#include "main.h"

/**
 * print_last_digit - prints last digit
 * @i: int
 * Return: an int
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	_putchar(j);
	return (j);
}
