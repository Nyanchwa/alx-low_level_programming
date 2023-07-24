#include "main.h"

/**
 * _strlen - string length
 * @s: address
 * Return: int
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
