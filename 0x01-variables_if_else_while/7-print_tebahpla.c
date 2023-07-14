#include <stdio.h>

/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
