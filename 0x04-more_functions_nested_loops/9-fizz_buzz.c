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
			printf("Fizz ");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	if (i == 100)
	{
		printf("Buzz");
	}
	return (0);
}
