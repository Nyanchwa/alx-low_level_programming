#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int j;

	for (j = 0; j < 10; j++)
	{
		while (i <= 22)
		{
			_putchar(i);
		}
	}
	putchar('\n');
}
