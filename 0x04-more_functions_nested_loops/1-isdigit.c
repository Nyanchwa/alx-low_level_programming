#include "main.h"

/**
 * _isdigit - checks if c is lower
 * @c: number or char
 * Return: zero on success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else if (c >= 0 && c <= 9)
	{
		return (1);
	}

	return (0);
}
