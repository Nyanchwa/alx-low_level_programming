#include <stdio.h>

/**
 * main - min function
 * Return: zero on success
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (j == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
