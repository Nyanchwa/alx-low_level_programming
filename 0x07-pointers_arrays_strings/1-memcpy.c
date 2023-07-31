#include "main.h"

/**
 * _memcpyn - copies a string to another
 * @dest: destination
 * @src: source
 * @n: int
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while(i < n)
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}