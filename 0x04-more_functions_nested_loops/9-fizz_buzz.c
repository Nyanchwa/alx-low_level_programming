#include <stdio.h>

/**
 * main - main function
 * Return: zero on successs
 */
int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("%d ", i);
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("%d ", i);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%d ", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	if (i == 100)
	{
		printf("Buzz");
	}
	return (0);
}
