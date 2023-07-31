#include "main.h"

/**
 * cap_string - capitalize
 * @s: string
 * Return: pointer
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			i++;
		}
		if (s[i - 1] == ' ' ||
			s[i - 1] == ',' ||
			s[i - 1] == '.' ||
			s[i - 1] == ';' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}' ||
			s[i - 1] == '\t' ||
			s[i - 1] == '\n' ||
			i == 0)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}