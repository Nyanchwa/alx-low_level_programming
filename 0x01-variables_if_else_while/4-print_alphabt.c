#include <stdio.h>

/**
 * main - main function
 * Return: zero on success
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		printf("%c", i);
		i++;
	}

	printf("\n");
	return (0);
}
