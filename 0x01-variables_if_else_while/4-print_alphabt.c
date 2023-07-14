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
		if (i == 'q' || i == 'e')
			continue;
		printf("%c", i);
		i++;
	}

	printf("\n");
	return (0);
}
