#include <stdio.h>

/**
 * main - main function
 * Return: zero on succsses
 */
int main(void)
{
	int i = 1;
	int j = 2;
	int next;
	int k;

	printf("%d, %d", i, j);

	for (k = 3; k <= 50; k++)
	{
		next = i + j;
		printf(", %d", next);
		i = j;
		j = next;
	}
	printf("\n");

	return (0);
}
