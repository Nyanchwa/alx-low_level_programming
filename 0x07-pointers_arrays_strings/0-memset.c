#include "main.h"

/**
 * _memset - sets a element in an array
 * @s: string
 * @b: char
 * @n: unsiged int
 * Return: pointers
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
