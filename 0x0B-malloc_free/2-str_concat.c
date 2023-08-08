#include "main.h"

/**
 * str_concat - concatinates two strings
 * @s1: string
 * @s2: sting
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	int len = 0, i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 != NULL)
	{
		for (i = 0; s1[i];)
		{
			i++;
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j];)
		{
			j++;
		}
	}
	len = j + i;
	buffer = malloc(len * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}
	while (k < len)
	{
		if (k < i)
		{
			buffer[k] = s1[k];
		}
		else if (k >= i && k < len)
		{
			buffer[k] = s2[l];
			l++;
		}
		k++;
	}
	return (buffer);
}
