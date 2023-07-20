#include "main.h"

/**
 * _isupper - checks if c is lower
 * @c: number or char
 * Return: zero on success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
