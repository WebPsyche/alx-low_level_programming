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
	int i, x, c, t;

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	x = i - 1;
	while (c < x)
	{
		t = s[c];
		s[c] = s[x];
		s[x] = t;
		c++;
		x--;
	}
}
