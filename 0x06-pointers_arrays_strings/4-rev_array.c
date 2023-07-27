#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
