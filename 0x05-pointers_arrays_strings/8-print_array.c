#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array
 * @a: array
 * @n: size
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", *(a + i));
			break;
		}
		printf("%d, ", *(a + i));
		i++;
	}
}
