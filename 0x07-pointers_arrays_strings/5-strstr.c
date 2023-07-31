#include "main.h"

/**
 * _strstr - function
 * @haystack - string
 * @neeedle - string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int len = 0;
	int i;

	while (needle[len] != '\0')
	{
		len++;
	}

	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			for (i = 0; i < len; i++)
			{
				if (haystack[i] != needle[i])
				{
					break;
				}
				else if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
			}
		}
		haystack++;
	}
	return (0);
}
