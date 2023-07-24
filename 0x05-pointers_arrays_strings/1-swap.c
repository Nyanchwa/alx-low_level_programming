#include "main.h"

/**
 * swap_int - swaps integers
 * @a: address
 * @b: address
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
