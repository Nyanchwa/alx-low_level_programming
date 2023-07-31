#include "main.h"

/**
 * _strspn - function
 * @s: string
 * @accept: string
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
