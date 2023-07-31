#include "main.h"

/**
 * _strchr _ string char
 * @s: string
 * @c: char
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
