#include "main.h"

/**
 * _strncat - concatinate two string
 * @dest: destination
 * @src: source
 * @n: int
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}
	k = i + n;

	while (src[j] != '\0' && (i < k))
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
