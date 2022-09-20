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
	int i, x;

	for (i = 0; i < s; i++)
	{
		x++;
	}
	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
}
