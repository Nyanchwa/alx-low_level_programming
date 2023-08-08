#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *buffer;
	int i = 0;
	int len;

	if (!str)
	{
		return (NULL);
	}

	if (str != NULL)
	{
		for (len = 0; str[len];)
		{
			len++;
		}
	}
	buffer = malloc((len + 1) * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		buffer[i] = str[i];
		i++;
	}
	return (buffer);
}
