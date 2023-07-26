#include "main.h"

/**
 * _strcat - concatinates stings
 * @dest: destination
 * @src: source
 * Return: a char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;
	int l = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	k = i + j;

	while (i < k)
	{
		dest[i + 1] = src[l];
		i++;
		l++;
	}
	return (dest);
}
