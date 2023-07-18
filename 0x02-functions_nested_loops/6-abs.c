#include "main.h"

/**
 * _abs - absolute
 * Return: integer
 */
int _abs(int i)
{
	int abs = 0;

	if (i > 0)
	{
		while (i > 0)
		{
			abs++;
			i--;
		}
	}
	else if (i < 0)
	{
		while (i < 0)
		{
			abs++;
			i++;
		}
	}
	return (abs);
}
