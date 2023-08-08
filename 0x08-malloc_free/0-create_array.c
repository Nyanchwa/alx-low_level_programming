#include "main.h"

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: character
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		buffer[i] = c;
		i++;
	}
	return (buffer);
}
