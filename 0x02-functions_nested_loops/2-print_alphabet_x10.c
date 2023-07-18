#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	while (j < 10)
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		j++;
	}
	_putchar('\n');
}
