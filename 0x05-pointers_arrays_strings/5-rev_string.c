#include "main.h"

/**
 * rev_string - reverse a sting
 * @s: adress
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len > 0)
	{
		len--;
		temp = s[len];
		s[len] = s[i];
		s[i] = temp;
		i++;
	}
	_putchar('\n');
}
