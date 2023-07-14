#include <stdio.h>
#include <time.h>

/**
 * main - main program
 * Return: returns 0 o suces
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negativei", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is zero", n);
	}

	return (0);
}
