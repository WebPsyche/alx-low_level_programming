#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, x, t;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (x = i; x >= 0; x--)
	{
		t = s[x];
		s[x] = s[i];
		s[i] = t;
	}
}
