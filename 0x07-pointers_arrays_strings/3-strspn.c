#include "main.h"

/**
 * _strspn - function
 * @s: string
 * @accept: string
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}
		}
		s++;
	}
	return (i);
}
