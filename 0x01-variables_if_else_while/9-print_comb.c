#include <stdio.h>

/**
 * main - main function
 * Return; 0 on success
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(44);
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
