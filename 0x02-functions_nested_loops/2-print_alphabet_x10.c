#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		j++;
	}
	_putchar('\n');
}
