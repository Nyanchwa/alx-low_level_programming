#include <stdio.h>

/**
 * main - main function
 * Return: zero on success
 */
int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		printf("%c", i);
		i++;
	}

	while (j <= 'Z')
	{
		printf("%c", j);
		j++;
	}
	printf("\n");
	return (0);
}
