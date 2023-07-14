#include <stdio.h>

/**
 * main - main function
 * Return; 0 on success
 */
int main(voi)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
			continue;
		putchar(44);
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
