#include "main.h"

/**
 * alloc_grid - creates 2D array
 * @width: columns
 * @height: rows
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **buffer = malloc(height * sizeof(int *));
	int i = 0, j = 0;

	if (buffer == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(sizeof(int) * width);
		if (buffer[i] == NULL)
		{
			for (; i >= 0; i--)
				free(buffer[i]);
			free(buffer);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
	}
	return (buffer);
}
