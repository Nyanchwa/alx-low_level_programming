#include "main.h"

/**
 * rev_string - reverse a sting
 * @s: adress
 */
void rev_string(char *s)
{
	int len = 0;
	char *p = s;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len > 0)
	{
		len--;
		*s = p[len];
		s++;
	}
}
