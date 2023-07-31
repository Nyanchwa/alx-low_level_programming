#include "main.h"

/**
 * _memcpy - copies a string to another
 * @dest: destination
 * @src: source
 * @n: int
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
