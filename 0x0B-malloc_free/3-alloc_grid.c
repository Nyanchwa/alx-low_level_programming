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
	int i = 0;
	int j = 0;

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
		buffer[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			buffer[i][j] = 0;
		}
	}
	return (buffer);
}
