#include "main.h"

/**
 * _strlen - string length
 * @s: address
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
	}
	return (length);
}
