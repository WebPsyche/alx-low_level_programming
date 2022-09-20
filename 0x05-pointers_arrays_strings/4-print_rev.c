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
	int w;

	while (*s != '\0')
	{
		*s++;
	}
	w = *s;
	for (i--; i >= 0; i--)
	{
		_putchar(w);
	}
	_putchar('\n');
}

