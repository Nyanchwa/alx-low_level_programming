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
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
