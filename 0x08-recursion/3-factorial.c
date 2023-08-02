#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		returrn (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
