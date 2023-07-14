#include <stdio.h>

/**
 * main - min function
 * Return: zero on success
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 55; i++)
	{
		putchar(i);
		for (j = 49; j <= 56; j++)
		{
			putchar(j);
			for (k = 50; k <= 57; k++)
			{
				if (k == 57)
					break;
				putchar(k);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
