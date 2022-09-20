#include "main.h"

/**
 * print_rev - prints a string in reverse followed
 * by a new line
 *
 * @s: string to be printed in new line
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int w, x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	w = x - 1;
	for (; w >= 0; w--)
	{
		_putchar(s[w]);
	}
	_putchar('\n');
}

