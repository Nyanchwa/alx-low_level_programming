#include <stdio.h>

/**
 * main - main function
 * Return: zero on succsses
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 50)
	{
		if (j < 10)
		{
			k = j % 10;
			if (k == 1 || k == 2)
			{
				printf("%d, ", j);
			}
		}
		else if (j < 99)
		{
			k = j / 10;
			if (k == 1 || k == 2)
			{
				printf("%d, ", j);
			}
		}
	}

	return (0);
}
