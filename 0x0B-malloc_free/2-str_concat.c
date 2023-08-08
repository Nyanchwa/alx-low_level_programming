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
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	len = j + i;
	buffer = malloc((len + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	while (s1[k] != '\0')
	{
		buffer[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		buffer[k] = s2[l];
		k++;
		l++;
	}
	buffer[k] = '\0';
	return (buffer);
}
