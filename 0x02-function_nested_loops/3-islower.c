#include "main.h"

/**
 * _islower - checks if c is lower
 * @c: number or char
 * Return: zero on success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
