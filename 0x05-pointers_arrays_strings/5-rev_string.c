#include "main.h"

/**
 * rev_string - reverse a sting
 * @s: adress
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		len--;
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
	}
}
