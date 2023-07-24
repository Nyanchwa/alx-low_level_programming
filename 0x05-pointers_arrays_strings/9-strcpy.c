#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: rturn value
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	while (i <= len)
	{
		if (i == len)
		{
			dest[i] = '\0';
		}
		dest[i] = src[i];
		i++;
	}
	_putchar('\n');
	return (dest);
}
