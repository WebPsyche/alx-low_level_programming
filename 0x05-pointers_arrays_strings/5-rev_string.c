#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;

	for (i = s; i >=0; i--)
	{
		_putchar(s[i]);
	}
}
